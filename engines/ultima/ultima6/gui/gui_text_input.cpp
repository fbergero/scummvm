/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "ultima/ultima6/core/nuvie_defs.h"

#include "ultima/ultima6/gui/gui_text_input.h"
#include "ultima/ultima6/gui/gui_font.h"
#include "ultima/ultima6/keybinding/keys.h"
//#include <stdlib.h>

namespace Ultima {
namespace Ultima6 {

GUI_TextInput:: GUI_TextInput(int x, int y, uint8 r, uint8 g, uint8 b, char *str,
                              GUI_Font *gui_font, uint16 width, uint16 height, GUI_CallBack *callback)
	: GUI_Text(x, y, r, g, b, gui_font, width) {
	max_height = height;
	callback_object = callback;
	cursor_color = 0;
	selected_bgcolor = 0;

	text = (char *)malloc(max_width * max_height + 1);

	if (text == NULL) {
		DEBUG(0, LEVEL_ERROR, "GUI_TextInput failed to allocate memory for text\n");
		return;
	}

	strncpy(text, str, max_width * max_height);

	pos = strlen(text);
	length = pos;

	area.w = max_width * font->CharWidth();
	area.h = max_height * font->CharHeight();
}

GUI_TextInput::~GUI_TextInput() {
	return;
}

void GUI_TextInput::release_focus() {
	GUI_Widget::release_focus();

// SDL_EnableUNICODE(0); //disable unicode.
}

GUI_status GUI_TextInput::MouseUp(int x, int y, int button) {
// if(button == SDL_BUTTON_WHEELUP || button == SDL_BUTTON_WHEELDOWN)
//   return GUI_PASS;
//release focus if we click outside the text box.
	if (focused && !HitRect(x, y))
		release_focus();
	else {
		if (!focused) {
			grab_focus();
// FIXME SDL2     SDL_EnableUNICODE(1); //turn on unicode processing.
		}
	}

	return (GUI_PASS);
}

GUI_status GUI_TextInput::KeyDown(Common::KeyState key) {
	char ascii = get_ascii_char_from_keysym(key);

	if (!focused)
		return GUI_PASS;


	if (!Common::isPrint(ascii) && key.sym != SDLK_BACKSPACE) {
		KeyBinder *keybinder = Game::get_game()->get_keybinder();
		ActionType a = keybinder->get_ActionType(key);
		switch (keybinder->GetActionKeyType(a)) {
		case NORTH_KEY:
			key.sym = SDLK_UP;
			break;
		case SOUTH_KEY:
			key.sym = SDLK_DOWN;
			break;
		case WEST_KEY:
			key.sym = SDLK_LEFT;
			break;
		case EAST_KEY:
			key.sym = SDLK_RIGHT;
			break;
		case TOGGLE_CURSOR_KEY:
			release_focus();
			return GUI_PASS; // can tab through to SaveDialog
		case DO_ACTION_KEY:
			key.sym = SDLK_RETURN;
			break;
		case CANCEL_ACTION_KEY:
			key.sym = SDLK_ESCAPE;
			break;
		case HOME_KEY:
			key.sym = SDLK_HOME;
		case END_KEY:
			key.sym = SDLK_END;
		default :
			if (keybinder->handle_always_available_keys(a)) return GUI_YUM;
			break;
		}
	}

	switch (key.sym) {
	case SDLK_LSHIFT   :
	case SDLK_RSHIFT   :
	case SDLK_LCTRL    :
	case SDLK_RCTRL    :
	case SDLK_CAPSLOCK :
		break;

	case SDLK_KP_ENTER:
	case SDLK_RETURN :
		if (callback_object)
			callback_object->callback(TEXTINPUT_CB_TEXT_READY, this, text);
	case SDLK_ESCAPE :
		release_focus();
		break;

	case SDLK_HOME :
		pos = 0;
		break;
	case SDLK_END  :
		pos = length;
		break;

	case SDLK_KP_4  :
	case SDLK_LEFT :
		if (pos > 0)
			pos--;
		break;

	case SDLK_KP_6   :
	case SDLK_RIGHT :
		if (pos < length)
			pos++;
		break;

	case SDLK_DELETE    :
		if (pos < length) { //delete the character to the right of the cursor
			pos++;
			remove_char();
			break;
		}
		break;

	case SDLK_BACKSPACE :
		remove_char();
		break; //delete the character to the left of the cursor

	case SDLK_UP :
	case SDLK_KP_8 :
		if (pos == length) {
			if (length + 1 > max_width * max_height)
				break;
			length++;
			if (pos == 0 || text[pos - 1] == ' ')
				text[pos] = 'A';
			else
				text[pos] = 'a';
			break;
		}
		text[pos]++;
		// We want alphanumeric characters or space
		if (text[pos] < ' ' || text[pos] > 'z') {
			text[pos] = ' ';
			break;
		}
		while (!Common::isAlnum(text[pos]))
			text[pos]++;
		break;

	case SDLK_KP_2 :
	case SDLK_DOWN :
		if (pos == length) {
			if (length + 1 > max_width * max_height)
				break;
			length++;
			if (pos == 0 || text[pos - 1] == ' ')
				text[pos] = 'Z';
			else
				text[pos] = 'z';
			break;
		}
		text[pos]--;
		// We want alphanumeric characters or space
		if (text[pos] < ' ' || text[pos] > 'z') {
			text[pos] = 'z';
			break;
		} else if (text[pos] < '0') {
			text[pos] = ' ';
			break;
		}
		while (!Common::isAlnum(text[pos]))
			text[pos]--;
		break;

	default :
		if (Common::isPrint(ascii))
			add_char(ascii);
		break;
	}



	return (GUI_YUM);
}

void GUI_TextInput::add_char(char c) {
	uint16 i;

	if (length + 1 > max_width * max_height)
		return;

	if (pos < length) { //shuffle chars to the right if required.
		for (i = length; i > pos; i--)
			text[i] = text[i - 1];
	}

	length++;

	text[pos] = c;
	pos++;

	text[length] = '\0';

	return;
}

void GUI_TextInput::remove_char() {
	uint16 i;

	if (pos == 0)
		return;

	for (i = pos - 1; i < length; i++)
		text[i] = text[i + 1];

	pos--;
	length--;

	return;
}

void GUI_TextInput::set_text(const char *new_text) {
	if (new_text) {
		strncpy(text, new_text, max_width * max_height);

		pos = strlen(text);
		length = pos;
	}
}

/* Map the color to the display */
void GUI_TextInput::SetDisplay(Screen *s) {
	GUI_Widget::SetDisplay(s);
	cursor_color = SDL_MapRGB(surface->format, 0xff, 0, 0);
	selected_bgcolor = SDL_MapRGB(surface->format, 0x5a, 0x6e, 0x91);
}


/* Show the widget  */
void GUI_TextInput:: Display(bool full_redraw) {
	Common::Rect r;

	if (full_redraw && focused) {
		r = area;
		SDL_FillRect(surface, &r, selected_bgcolor);
	}

	GUI_Text::Display(full_redraw);

	if (focused)
		display_cursor();

}

void GUI_TextInput::display_cursor() {
	Common::Rect r;
	uint16 x, y;
	uint16 cw, ch;

	x = pos % max_width;
	y = pos / max_width;

	cw = font->CharWidth();
	ch = font->CharHeight();

	r.x = area.x + x * cw;
	r.y = area.y + y * ch;
	r.w = 1;
	r.h = ch;

	SDL_FillRect(surface, &r, cursor_color);

	return;
}

} // End of namespace Ultima6
} // End of namespace Ultima