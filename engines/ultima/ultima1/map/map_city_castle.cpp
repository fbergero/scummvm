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

#include "ultima/ultima1/map/map_city_castle.h"
#include "ultima/ultima1/core/transports.h"
#include "ultima/ultima1/core/people.h"
#include "ultima/ultima1/core/resources.h"
#include "ultima/ultima1/game.h"

namespace Ultima {
namespace Ultima1 {
namespace Map {

void MapCityCastle::load(Shared::MapId mapId) {
	Shared::Map::MapBase::load(mapId);

	setDimensions(Point(38, 18));
	_tilesPerOrigTile = Point(1, 1);
}

void MapCityCastle::loadWidgets() {
	// Set up widget for the player
	_currentTransport = new TransportOnFoot(_game, this);
	addWidget(_currentTransport);

	for (int idx = 0; idx < 15; ++idx) {
		const int *lp = _game->_res->LOCATION_PEOPLE[_mapStyle * 15 + idx];
		if (lp[0] == -1)
			break;

		Person *person = new Person(_game, this, lp[0], lp[3]);
		person->_position = Point(lp[1], lp[2]);
		addWidget(person);
	}
}

Point MapCityCastle::getViewportPosition(const Point &viewportSize) {
	Point &topLeft = _viewportPos._topLeft;

	if (!_viewportPos.isValid() || _viewportPos._size != viewportSize) {
		// Calculate the new position
		topLeft.x = _position.x - (viewportSize.x - 1) / 2;
		topLeft.y = _position.y - (viewportSize.y - 1) / 2;

		// Fixed maps, so constrain top left corner so the map fills the viewport. This will accomodate
		// future renderings with more tiles, or greater tile size
		topLeft.x = CLIP((int)topLeft.x, 0, (int)(width() - viewportSize.x));
		topLeft.y = CLIP((int)topLeft.y, 0, (int)(height() - viewportSize.y));

		_viewportPos._mapId = _mapId;
		_viewportPos._size = viewportSize;
	}

	return topLeft;
}

void MapCityCastle::loadTownCastleData() {
	// Load the contents of the map
	Shared::File f("tcd.bin");
	f.seek(_mapStyle * 684);
	for (int x = 0; x < _size.x; ++x) {
		for (int y = 0; y < _size.y; ++y)
			_data[y][x] = f.readByte();
	}
}

/*-------------------------------------------------------------------*/

void MapCity::load(Shared::MapId mapId) {
	MapCityCastle::load(mapId);

	_mapStyle = (_mapId % 8) + 2;
	_mapIndex = _mapId;
	_name = Common::String::format("%s %s", _game->_res->THE_CITY_OF, _game->_res->LOCATION_NAMES[_mapId - 1]);

	loadTownCastleData();

	// Load up the widgets for the given map
	loadWidgets();
	setPosition(Common::Point(width() / 2, height() - 1));		// Start at bottom center edge of map
}

/*-------------------------------------------------------------------*/

void MapCastle::load(Shared::MapId mapId) {
	MapCityCastle::load(mapId);

	_mapIndex = _mapId - 33;
	_mapStyle = _mapIndex % 2;
	_name = _game->_res->LOCATION_NAMES[_mapId - 1];
	_castleKey = _game->getRandomNumber(255) & 1 ? 61 : 60;

	loadTownCastleData();

	// Set up door locks
	_data[_mapStyle ? 4 : 14][35] = CTILE_GATE;
	_data[_mapStyle ? 4 : 14][31] = CTILE_GATE;

	// Load up the widgets for the given map
	loadWidgets();
	setPosition(Common::Point(0, height() / 2));		// Start at center left edge of map
}

} // End of namespace Map
} // End of namespace Ultima1
} // End of namespace Ultima