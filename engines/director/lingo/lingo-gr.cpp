/* A Bison parser, made by GNU Bison 3.5.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 54 "engines/director/lingo/lingo-gr.y"

#define FORBIDDEN_SYMBOL_ALLOW_ALL

#include "common/endian.h"
#include "common/hash-str.h"
#include "common/rect.h"

#include "director/lingo/lingo.h"
#include "director/lingo/lingo-code.h"
#include "director/lingo/lingo-gr.h"

extern int yylex();
extern int yyparse();

using namespace Director;
void yyerror(const char *s) {
	g_lingo->_hadError = true;
	warning("######################  LINGO: %s at line %d col %d", s, g_lingo->_linenumber, g_lingo->_colnumber);
}

void checkEnd(Common::String *token, const char *expect, bool required) {
	if (required) {
		if (token->compareToIgnoreCase(expect)) {
			Common::String err = Common::String::format("end mismatch. Expected %s but got %s", expect, token->c_str());
			yyerror(err.c_str());
		}
	}
}


#line 101 "engines/director/lingo/lingo-gr.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED
# define YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNARY = 258,
    CASTREF = 259,
    VOID = 260,
    VAR = 261,
    POINT = 262,
    RECT = 263,
    ARRAY = 264,
    OBJECT = 265,
    REFERENCE = 266,
    LEXERROR = 267,
    PARRAY = 268,
    INT = 269,
    ARGC = 270,
    ARGCNORET = 271,
    THEENTITY = 272,
    THEENTITYWITHID = 273,
    THEMENUITEMENTITY = 274,
    THEMENUITEMSENTITY = 275,
    FLOAT = 276,
    BLTIN = 277,
    FBLTIN = 278,
    RBLTIN = 279,
    ID = 280,
    STRING = 281,
    HANDLER = 282,
    SYMBOL = 283,
    ENDCLAUSE = 284,
    tPLAYACCEL = 285,
    tMETHOD = 286,
    THEOBJECTFIELD = 287,
    THEOBJECTREF = 288,
    tDOWN = 289,
    tELSE = 290,
    tELSIF = 291,
    tEXIT = 292,
    tGLOBAL = 293,
    tGO = 294,
    tIF = 295,
    tIN = 296,
    tINTO = 297,
    tLOOP = 298,
    tMACRO = 299,
    tMOVIE = 300,
    tNEXT = 301,
    tOF = 302,
    tPREVIOUS = 303,
    tPUT = 304,
    tREPEAT = 305,
    tSET = 306,
    tTHEN = 307,
    tTO = 308,
    tWHEN = 309,
    tWITH = 310,
    tWHILE = 311,
    tNLELSE = 312,
    tFACTORY = 313,
    tOPEN = 314,
    tPLAY = 315,
    tINSTANCE = 316,
    tGE = 317,
    tLE = 318,
    tEQ = 319,
    tNEQ = 320,
    tAND = 321,
    tOR = 322,
    tNOT = 323,
    tMOD = 324,
    tAFTER = 325,
    tBEFORE = 326,
    tCONCAT = 327,
    tCONTAINS = 328,
    tSTARTS = 329,
    tCHAR = 330,
    tITEM = 331,
    tLINE = 332,
    tWORD = 333,
    tSPRITE = 334,
    tINTERSECTS = 335,
    tWITHIN = 336,
    tTELL = 337,
    tPROPERTY = 338,
    tON = 339,
    tENDIF = 340,
    tENDREPEAT = 341,
    tENDTELL = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 85 "engines/director/lingo/lingo-gr.y"

	Common::String *s;
	int i;
	double f;
	int e[2];	// Entity + field
	int code;
	int narg;	/* number of arguments */
	Director::DatumArray *arr;

	struct {
		Common::String *os;
		int oe;
	} objectfield;

	struct {
		Common::String *obj;
		Common::String *field;
	} objectref;

#line 261 "engines/director/lingo/lingo-gr.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  127
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1768

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  376

#define YYUNDEFTOK  2
#define YYMAXUTOK   342


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      96,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    95,    90,     2,
      97,    98,    93,    91,    99,    92,     2,    94,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,     2,
      88,     2,    89,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   100,     2,   101,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   142,   144,   145,   146,   148,   154,
     158,   169,   170,   171,   177,   184,   190,   197,   203,   210,
     221,   228,   229,   230,   232,   233,   234,   235,   237,   238,
     243,   254,   271,   283,   294,   296,   301,   305,   310,   314,
     324,   335,   336,   338,   345,   355,   366,   368,   374,   380,
     387,   389,   391,   392,   393,   395,   401,   404,   407,   411,
     415,   419,   421,   422,   423,   426,   429,   432,   440,   446,
     451,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   482,   483,   484,   485,   486,
     487,   488,   489,   491,   494,   496,   497,   498,   499,   500,
     501,   501,   502,   502,   503,   504,   507,   510,   511,   513,
     517,   522,   526,   531,   535,   547,   548,   549,   550,   554,
     558,   563,   564,   566,   570,   574,   578,   578,   608,   608,
     608,   615,   616,   616,   623,   633,   641,   641,   643,   644,
     645,   646,   648,   649,   650,   652,   654,   662,   663,   664,
     666,   667,   669,   671,   672,   673,   674,   676,   677,   679,
     680,   682,   686
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNARY", "CASTREF", "VOID", "VAR",
  "POINT", "RECT", "ARRAY", "OBJECT", "REFERENCE", "LEXERROR", "PARRAY",
  "INT", "ARGC", "ARGCNORET", "THEENTITY", "THEENTITYWITHID",
  "THEMENUITEMENTITY", "THEMENUITEMSENTITY", "FLOAT", "BLTIN", "FBLTIN",
  "RBLTIN", "ID", "STRING", "HANDLER", "SYMBOL", "ENDCLAUSE", "tPLAYACCEL",
  "tMETHOD", "THEOBJECTFIELD", "THEOBJECTREF", "tDOWN", "tELSE", "tELSIF",
  "tEXIT", "tGLOBAL", "tGO", "tIF", "tIN", "tINTO", "tLOOP", "tMACRO",
  "tMOVIE", "tNEXT", "tOF", "tPREVIOUS", "tPUT", "tREPEAT", "tSET",
  "tTHEN", "tTO", "tWHEN", "tWITH", "tWHILE", "tNLELSE", "tFACTORY",
  "tOPEN", "tPLAY", "tINSTANCE", "tGE", "tLE", "tEQ", "tNEQ", "tAND",
  "tOR", "tNOT", "tMOD", "tAFTER", "tBEFORE", "tCONCAT", "tCONTAINS",
  "tSTARTS", "tCHAR", "tITEM", "tLINE", "tWORD", "tSPRITE", "tINTERSECTS",
  "tWITHIN", "tTELL", "tPROPERTY", "tON", "tENDIF", "tENDREPEAT",
  "tENDTELL", "'<'", "'>'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'\\n'", "'('", "')'", "','", "'['", "']'", "':'", "$accept", "program",
  "programline", "asgn", "stmtoneliner", "stmtonelinerwithif", "stmt",
  "tellstart", "ifstmt", "elseifstmtlist", "elseifstmt", "ifoneliner",
  "repeatwhile", "repeatwith", "if", "elseif", "begin", "end", "stmtlist",
  "when", "simpleexpr", "expr", "chunkexpr", "reference", "proc", "$@1",
  "$@2", "globallist", "propertylist", "instancelist", "gotofunc",
  "gotomovie", "playfunc", "$@3", "defn", "$@4", "$@5", "$@6", "on", "$@7",
  "argdef", "endargdef", "argstore", "macro", "arglist", "nonemptyarglist",
  "list", "valuelist", "linearlist", "proplist", "proppair", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    60,    62,
      38,    43,    45,    42,    47,    37,    10,    40,    41,    44,
      91,    93,    58
};
# endif

#define YYPACT_NINF (-274)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-6)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     311,   -85,  -274,  -274,    23,  -274,  1041,  1122,    23,  1160,
    -274,  -274,  -274,  -274,  -274,  -274,   -31,  -274,   884,  -274,
    -274,   -18,  1003,    45,    96,    22,    34,  1241,   922,    40,
    1241,  1241,  1241,  1241,  1241,  1241,  1241,  -274,  -274,  1241,
    1241,  1241,   392,     8,  -274,  -274,  -274,  -274,  -274,  1241,
     -26,  1241,   722,  -274,  1661,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,  -274,   -27,  1003,  1241,
    1661,   -17,  1241,   -17,  -274,  1241,  1661,   -13,  1241,  -274,
    -274,    48,  -274,  1241,  -274,    50,  -274,  1233,  -274,    80,
    -274,    91,   384,    97,  -274,   -12,    23,    23,     7,    73,
      98,  -274,  1558,  1233,  -274,  -274,    54,  -274,  1281,  1314,
    1347,  1380,  1628,  1545,   127,   129,  -274,  -274,  1591,    55,
      58,  -274,  1661,    60,    57,    63,  -274,  -274,   479,  1661,
    -274,  -274,  1661,  -274,  -274,  1241,  1661,  -274,  -274,  1241,
    1241,  1241,  1241,  1241,  1241,  1241,  1241,  1241,  1241,  1241,
    1241,  1241,  1241,  1241,  1241,  1241,   138,  1241,   384,  1591,
      19,  1241,    21,    26,  1241,   -17,   138,  -274,    66,  1661,
    1241,  -274,  -274,    23,    15,  1241,  1241,  -274,  1241,  1241,
      14,   119,  1241,  1241,  1241,  -274,  1241,  -274,   143,  1241,
    1241,  1241,  1241,  1241,  1241,  1241,  1241,  1241,  1241,  -274,
    -274,  -274,    75,  -274,  -274,    23,    23,  -274,  1241,    53,
    -274,  -274,  1241,  1241,   123,  -274,  1661,    16,    16,    16,
      16,  1674,  1674,  -274,     5,    16,    16,    16,    16,     5,
      18,    18,  -274,  -274,  -274,   -76,  -274,  1661,  -274,  -274,
    1661,   -41,   156,  1661,  -274,   151,  -274,  -274,  1661,  1661,
    1661,    16,  1241,  1241,   169,  1661,    16,  1661,  1661,  -274,
    1661,  1413,  1661,  1446,  1661,  1479,  1661,  1512,  1661,  1661,
     803,  -274,   170,  -274,  -274,  1661,    55,    58,  -274,   641,
    1661,  1661,  -274,   144,    99,   172,    99,  -274,   138,  1241,
    1661,    16,    23,  1241,  1241,  1241,  1241,  -274,   641,  -274,
    -274,  -274,   113,  -274,    -3,   641,   803,   175,  -274,  -274,
    -274,   -35,  1661,   148,  1661,  1661,  1661,  1661,  -274,   117,
    -274,   641,   152,  1241,  -274,  -274,  -274,   560,   641,    99,
    1241,  -274,   128,  1241,  1661,    95,   -28,   184,  -274,  1661,
    -274,  1661,  -274,  -274,  -274,  -274,  1241,   130,  -274,  -274,
    -274,   114,   641,  -274,   641,  -274,  1661,  -274,   803,   191,
     641,   131,   641,   166,  -274,  -274,   133,  -274,   135,  -274,
     136,  -274,  -274,   641,  -274,  -274
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    56,    67,     0,    57,   157,   157,     0,    60,
      59,    58,   136,   142,    69,    70,   109,   110,     0,    48,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   146,     0,
       0,     0,   163,     0,     3,    71,    28,     7,    29,     0,
       0,     0,     0,    62,    22,   104,    63,    23,   106,   107,
       6,    50,    21,    61,     4,    60,    68,    60,     0,   157,
     158,   116,   157,    65,   103,   157,   160,   156,   157,    50,
     108,     0,   125,     0,   126,     0,   127,   128,   130,     0,
      34,     0,   105,     0,    46,     0,     0,     0,     0,     0,
       0,   141,   118,   133,   135,   123,   114,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,    59,
      58,   164,   167,     0,   165,   166,   169,     1,     5,    51,
      50,    50,    51,    51,    27,     0,    25,    26,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,   157,     0,   158,
       0,     0,     0,     0,     0,   137,   148,   119,   111,   132,
       0,   129,   139,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,    55,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      38,   121,   113,   147,    92,     0,     0,   162,     0,     0,
       2,    52,     0,     0,     0,    35,    51,    81,    82,    79,
      80,    83,    84,    76,    87,    88,    89,    78,    77,    86,
      72,    73,    74,    75,   149,     0,   115,   159,    64,    66,
     161,     0,     0,   131,    50,     0,     8,     9,    11,    12,
      16,    14,     0,     0,     0,    15,    13,    20,   117,   124,
      95,     0,    97,     0,    99,     0,   101,     0,    93,    94,
       0,    52,     0,   172,   171,   168,     0,     0,   170,    51,
      51,    51,    52,     0,   155,     0,   155,   120,   148,     0,
      17,    18,     0,     0,     0,     0,     0,    51,    51,   122,
      53,    54,     0,    52,     0,    51,     0,     0,    52,   150,
      52,     0,    10,     0,    96,    98,   100,   102,    37,     0,
      30,    51,     0,     0,    41,    51,   151,   145,   143,   155,
       0,    36,     0,     0,    51,    51,     0,   152,    52,    19,
      33,    51,    52,    50,    49,    42,     0,     0,    50,    45,
     153,   144,   140,    52,    51,    52,    51,    39,     0,     0,
      51,     0,    51,     0,    51,   154,     0,    31,     0,    52,
       0,    32,    40,    51,    44,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,  -274,   100,  -274,  -264,  -274,     4,    25,  -274,  -274,
    -274,  -274,  -274,  -274,   174,  -274,   -77,   -57,  -100,  -274,
       6,    -6,  -274,    56,   177,  -274,  -274,  -274,  -274,  -274,
    -274,   -19,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -161,  -274,  -273,   179,    11,  -274,  -274,  -274,  -274,  -274,
      24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    43,    44,    45,    46,   133,   301,   270,    48,   335,
     345,   134,    49,    50,    51,   346,   156,   211,   279,    52,
      53,    54,    55,    56,    57,    81,   114,   168,   202,   106,
      58,    88,    59,    78,    60,    89,   244,    79,    61,   115,
     235,   351,   308,    62,   163,    77,    63,   123,   124,   125,
     126
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    70,   166,    76,    47,   241,   297,   348,   127,   104,
      66,    64,    87,   310,    74,   130,    92,    71,    73,    80,
     284,   102,   103,   285,   107,   108,   109,   110,   111,   112,
     113,   322,    90,   116,   117,   118,   122,     2,   131,     8,
     246,   178,   325,   129,     5,   132,   136,   100,    65,    10,
     323,    11,   179,   212,   213,   286,   338,   349,   285,   101,
     182,   329,   158,   159,   285,   105,   159,   252,   171,   159,
     157,   183,    70,   167,   145,   214,   215,   169,   253,   276,
     160,   277,   161,   162,   187,   145,   164,   145,   146,   165,
      31,    32,    33,    34,   364,   170,   152,   153,   154,   155,
      93,    94,   180,   181,   128,   172,   151,   152,   153,   154,
     155,   154,   155,    95,    96,    97,   173,   236,   161,   238,
     161,    98,   177,    42,   239,   161,   184,   311,    99,   216,
     343,   344,    47,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     185,    70,   201,   188,   203,   237,   208,   205,   240,   283,
     206,   207,   209,   234,   243,   242,   254,   288,   259,   248,
     249,   298,   250,   251,   272,   282,   255,   256,   257,   245,
     258,   287,   305,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   289,   292,   299,   306,   309,   307,   320,
     326,   330,   275,   321,   331,   333,   280,   281,   327,   350,
     328,   273,   274,   359,   340,   357,   365,   367,   369,   371,
     372,   374,   302,   303,   304,   271,   135,     0,   210,   137,
     247,   138,     0,   278,     0,     0,     0,     0,   352,     0,
     318,   319,   354,     0,     0,     0,   290,   291,   324,     0,
       0,     0,     0,   360,     0,   362,     0,     0,     0,     0,
       0,     0,     0,     0,   332,     0,   355,     0,   336,   373,
       0,   358,     0,     0,     0,     0,     0,   342,   347,     0,
       0,     0,     0,   312,   353,     0,     0,   314,   315,   316,
     317,     0,     0,     0,     0,     0,     0,   361,   313,   363,
       0,     0,     0,   366,     0,   368,     0,   370,     0,     0,
       0,    -5,     1,     0,     0,     0,   375,   334,     0,     0,
       0,     0,     0,     0,   339,     2,     0,   341,     3,     4,
       0,     0,     5,     6,     7,     8,     9,    10,     0,    11,
     356,    12,    13,    14,    15,     0,     0,     0,    16,    17,
      18,    19,     0,     0,     0,    20,     0,    21,     0,     0,
      22,    23,    24,     0,     0,    25,     0,     0,     0,    26,
      27,    28,    29,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
      35,     0,     0,    36,    37,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     2,    -5,    41,     3,
       4,    42,     0,     5,     0,     7,     8,    67,   119,     0,
     120,     0,     0,     0,    14,    15,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,    24,     0,     0,   139,   140,   141,   142,
     143,   144,     0,   145,   175,   176,   146,   147,   148,     0,
      30,     0,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,   149,   150,   151,   152,   153,   154,   155,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,    41,
       0,     0,    42,     2,   121,     0,     3,     4,     0,     0,
       5,     6,     7,     8,     9,    10,     0,    11,     0,    12,
      13,    14,    15,     0,     0,     0,    16,    17,    18,    19,
       0,     0,     0,    20,     0,    21,     0,     0,    22,    23,
      24,     0,     0,    25,     0,     0,     0,    26,    27,    28,
      29,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,    35,     0,
       0,    36,    37,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     2,     0,    41,     3,     4,    42,
       0,     5,     6,     7,     8,     9,    10,     0,    11,   337,
      12,     0,    14,    15,     0,     0,     0,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    21,     0,     0,    22,
      23,    24,     0,     0,    25,     0,     0,     0,     0,    27,
      28,    29,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
       0,     0,    36,    37,     0,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     2,   300,    41,     3,     4,
      42,     0,     5,     6,     7,     8,     9,    10,     0,    11,
       0,    12,     0,    14,    15,     0,     0,     0,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    21,     0,     0,
      22,    23,    24,     0,     0,    25,     0,     0,     0,     0,
      27,    28,    29,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
      35,     0,     0,    36,    37,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     2,   300,    41,     3,
       4,    42,     0,     5,     6,     7,     8,     9,    10,     0,
      11,     0,    12,     0,    14,    15,     0,     0,     0,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     2,     0,    41,
       3,     4,    42,     0,     5,     6,     7,     8,     9,    10,
       0,    11,     0,    12,     0,    14,    15,     0,     0,     0,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,    31,    32,
      33,    34,    35,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     2,     0,
      41,     3,     4,    42,     0,     5,     0,     7,     8,    67,
      10,     0,    11,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,    83,
      84,    85,    86,    68,     0,    24,     2,     0,     0,     3,
       4,     0,     0,     5,     0,     7,     8,    67,    10,     0,
      11,     0,    30,     0,    14,    15,     0,     0,     0,    31,
      32,    33,    34,    35,     0,     0,     0,    83,     0,    85,
       0,    68,     0,    24,     0,    39,    40,     0,     0,     0,
       0,    41,     0,     0,    42,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     2,     0,    41,
       3,     4,    42,    91,     5,     0,     7,     8,    67,    10,
       0,    11,     0,     0,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    24,     2,     0,     0,     3,     4,
       0,     0,     5,     0,     7,     8,    67,    10,     0,    11,
       0,    30,     0,    14,    15,     0,     0,     0,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
      68,     0,    24,     0,    39,    40,     0,     0,     0,     0,
      41,     0,     0,    42,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     2,     0,    69,     3,
       4,    42,     0,     5,     0,     7,     8,    67,    10,     0,
      11,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,    24,     2,     0,     0,     3,     4,     0,
       0,     5,     0,     7,     8,    67,    10,     0,    11,     0,
      30,     0,    14,    15,     0,     0,     0,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,    68,
       0,    24,     0,    39,    40,     0,     0,     0,     0,    72,
       0,     0,    42,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     2,     0,    75,     3,     4,
      42,     0,     5,     0,     7,     8,    67,    10,     0,    11,
       0,     0,     0,    14,    15,     0,     0,     0,    83,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,    24,     0,     0,   139,   140,   141,   142,   143,
     144,     0,   145,     0,     0,   146,   147,   148,     0,    30,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
      35,   149,   150,   151,   152,   153,   154,   155,   189,     0,
       0,     0,    39,    40,   190,     0,     0,     0,    41,     0,
       0,    42,     0,   139,   140,   141,   142,   143,   144,     0,
     145,     0,     0,   146,   147,   148,     0,     0,     0,     0,
       0,   191,     0,     0,     0,     0,     0,   192,     0,   149,
     150,   151,   152,   153,   154,   155,   139,   140,   141,   142,
     143,   144,     0,   145,     0,     0,   146,   147,   148,     0,
       0,     0,     0,     0,   193,     0,     0,     0,     0,     0,
     194,     0,   149,   150,   151,   152,   153,   154,   155,   139,
     140,   141,   142,   143,   144,     0,   145,     0,     0,   146,
     147,   148,     0,     0,     0,     0,     0,   195,     0,     0,
       0,     0,     0,   196,     0,   149,   150,   151,   152,   153,
     154,   155,   139,   140,   141,   142,   143,   144,     0,   145,
       0,     0,   146,   147,   148,     0,     0,     0,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   139,   140,   141,   142,   143,
     144,     0,   145,     0,     0,   146,   147,   148,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   139,   140,
     141,   142,   143,   144,     0,   145,     0,     0,   146,   147,
     148,     0,     0,     0,     0,     0,   295,     0,     0,     0,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   139,   140,   141,   142,   143,   144,     0,   145,     0,
       0,   146,   147,   148,     0,     0,     0,     0,     0,   296,
       0,     0,     0,     0,     0,     0,     0,   149,   150,   151,
     152,   153,   154,   155,   139,   140,   141,   142,   143,   144,
       0,   145,     0,     0,   146,   147,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
     149,   150,   151,   152,   153,   154,   155,   139,   140,   141,
     142,   143,   144,   186,   145,     0,     0,   146,   147,   148,
     139,   140,   141,   142,   143,   144,     0,   145,     0,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
       0,   200,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   139,   140,   141,   142,   143,   144,     0,
     145,     0,     0,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,   204,
     139,   140,   141,   142,   143,   144,     0,   145,     0,     0,
     146,   147,   148,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   139,   140,   141,   142,   143,   144,     0,
     145,     0,     0,   146,   147,   148,   139,   140,   141,   142,
       0,     0,     0,   145,     0,     0,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
       0,     0,   149,   150,   151,   152,   153,   154,   155
};

static const yytype_int16 yycheck[] =
{
       6,     7,    79,     9,     0,   166,   270,    35,     0,    28,
       4,    96,    18,   286,     8,    41,    22,     6,     7,    50,
      96,    27,    28,    99,    30,    31,    32,    33,    34,    35,
      36,    34,    50,    39,    40,    41,    42,    14,    64,    24,
      25,    53,   306,    49,    21,    51,    52,    25,    25,    26,
      53,    28,    64,   130,   131,    96,   329,    85,    99,    25,
      53,    96,    68,    69,    99,    25,    72,    53,    87,    75,
      97,    64,    78,    25,    69,   132,   133,    83,    64,    26,
      69,    28,    99,    72,   103,    69,    99,    69,    72,    78,
      75,    76,    77,    78,   358,    45,    91,    92,    93,    94,
      55,    56,    96,    97,    96,    25,    90,    91,    92,    93,
      94,    93,    94,    17,    18,    19,    25,    98,    99,    98,
      99,    25,    25,   100,    98,    99,    53,   288,    32,   135,
      35,    36,   128,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      52,   157,    25,    99,    25,   161,    99,   102,   164,   216,
     102,   101,    99,    25,   170,    99,    47,   244,    25,   175,
     176,   271,   178,   179,    99,    52,   182,   183,   184,   173,
     186,    25,   282,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    42,    25,    25,    52,    25,    99,    86,
      25,    53,   208,   303,    87,    53,   212,   213,   308,    25,
     310,   205,   206,    99,    86,    85,    25,    86,    52,    86,
      85,    85,   279,   280,   281,   200,    52,    -1,   128,    52,
     174,    52,    -1,   209,    -1,    -1,    -1,    -1,   338,    -1,
     297,   298,   342,    -1,    -1,    -1,   252,   253,   305,    -1,
      -1,    -1,    -1,   353,    -1,   355,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   321,    -1,   343,    -1,   325,   369,
      -1,   348,    -1,    -1,    -1,    -1,    -1,   334,   335,    -1,
      -1,    -1,    -1,   289,   341,    -1,    -1,   293,   294,   295,
     296,    -1,    -1,    -1,    -1,    -1,    -1,   354,   292,   356,
      -1,    -1,    -1,   360,    -1,   362,    -1,   364,    -1,    -1,
      -1,     0,     1,    -1,    -1,    -1,   373,   323,    -1,    -1,
      -1,    -1,    -1,    -1,   330,    14,    -1,   333,    17,    18,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    28,
     346,    30,    31,    32,    33,    -1,    -1,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,
      49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    14,    96,    97,    17,
      18,   100,    -1,    21,    -1,    23,    24,    25,    26,    -1,
      28,    -1,    -1,    -1,    32,    33,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    97,
      -1,    -1,   100,    14,   102,    -1,    17,    18,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    -1,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    14,    -1,    97,    17,    18,   100,
      -1,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    -1,    32,    33,    -1,    -1,    -1,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    14,    96,    97,    17,    18,
     100,    -1,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    30,    -1,    32,    33,    -1,    -1,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    14,    96,    97,    17,
      18,   100,    -1,    21,    22,    23,    24,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    33,    -1,    -1,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    14,    -1,    97,
      17,    18,   100,    -1,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    30,    -1,    32,    33,    -1,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    14,    -1,
      97,    17,    18,   100,    -1,    21,    -1,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    51,    14,    -1,    -1,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    25,    26,    -1,
      28,    -1,    68,    -1,    32,    33,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    91,    92,    -1,    -1,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    14,    -1,    97,
      17,    18,   100,    20,    21,    -1,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    14,    -1,    -1,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    68,    -1,    32,    33,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    91,    92,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    14,    -1,    97,    17,
      18,   100,    -1,    21,    -1,    23,    24,    25,    26,    -1,
      28,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    14,    -1,    -1,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    -1,    28,    -1,
      68,    -1,    32,    33,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    91,    92,    -1,    -1,    -1,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    14,    -1,    97,    17,    18,
     100,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    62,    63,    64,    65,    66,
      67,    -1,    69,    -1,    -1,    72,    73,    74,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    88,    89,    90,    91,    92,    93,    94,    47,    -1,
      -1,    -1,    91,    92,    53,    -1,    -1,    -1,    97,    -1,
      -1,   100,    -1,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    88,
      89,    90,    91,    92,    93,    94,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    88,    89,    90,    91,    92,    93,    94,    62,
      63,    64,    65,    66,    67,    -1,    69,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    88,    89,    90,    91,    92,
      93,    94,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    62,    63,    64,    65,    66,
      67,    -1,    69,    -1,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    62,    63,    64,    65,    66,    67,    -1,    69,    -1,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    94,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      88,    89,    90,    91,    92,    93,    94,    62,    63,    64,
      65,    66,    67,    55,    69,    -1,    -1,    72,    73,    74,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    -1,
      72,    73,    74,    88,    89,    90,    91,    92,    93,    94,
      -1,    96,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    -1,    98,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    -1,    72,    73,    74,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    74,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    14,    17,    18,    21,    22,    23,    24,    25,
      26,    28,    30,    31,    32,    33,    37,    38,    39,    40,
      44,    46,    49,    50,    51,    54,    58,    59,    60,    61,
      68,    75,    76,    77,    78,    79,    82,    83,    84,    91,
      92,    97,   100,   104,   105,   106,   107,   109,   111,   115,
     116,   117,   122,   123,   124,   125,   126,   127,   133,   135,
     137,   141,   146,   149,    96,    25,   123,    25,    49,    97,
     124,   147,    97,   147,   123,    97,   124,   148,   136,   140,
      50,   128,    43,    45,    46,    47,    48,   124,   134,   138,
      50,    20,   124,    55,    56,    17,    18,    19,    25,    32,
      25,    25,   124,   124,   134,    25,   132,   124,   124,   124,
     124,   124,   124,   124,   129,   142,   124,   124,   124,    26,
      28,   102,   124,   150,   151,   152,   153,     0,    96,   124,
      41,    64,   124,   108,   114,   117,   124,   127,   146,    62,
      63,    64,    65,    66,    67,    69,    72,    73,    74,    88,
      89,    90,    91,    92,    93,    94,   119,    97,   124,   124,
     147,    99,   147,   147,    99,   147,   119,    25,   130,   124,
      45,   134,    25,    25,    42,    70,    71,    25,    53,    64,
     123,   123,    53,    64,    53,    52,    55,   134,    99,    47,
      53,    47,    53,    47,    53,    47,    53,    80,    81,    53,
      96,    25,   131,    25,    98,   102,   102,   101,    99,    99,
     105,   120,   119,   119,   120,   120,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,    25,   143,    98,   124,    98,    98,
     124,   143,    99,   124,   139,   123,    25,   126,   124,   124,
     124,   124,    53,    64,    47,   124,   124,   124,   124,    25,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     110,   110,    99,   123,   123,   124,    26,    28,   153,   121,
     124,   124,    52,   120,    96,    99,    96,    25,   119,    42,
     124,   124,    25,    47,    47,    47,    47,   107,   121,    25,
      96,   109,   120,   120,   120,   121,    52,    99,   145,    25,
     145,   143,   124,   123,   124,   124,   124,   124,   120,   120,
      86,   121,    34,    53,   120,   107,    25,   121,   121,    96,
      53,    87,   120,    53,   124,   112,   120,    29,   145,   124,
      86,   124,   120,    35,    36,   113,   118,   120,    35,    85,
      25,   144,   121,   120,   121,   119,   124,    85,   119,    99,
     121,   120,   121,   120,   107,    25,   120,    86,   120,    52,
     120,    86,    85,   121,    85,   120
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   107,   108,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   111,
     111,   112,   112,   113,   114,   114,   115,   116,   117,   118,
     119,   120,   121,   121,   121,   122,   123,   123,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   126,   126,   127,   127,   127,   127,   127,
     128,   127,   129,   127,   127,   127,   127,   127,   127,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   136,   135,   138,   139,
     137,   137,   140,   137,   137,   137,   142,   141,   143,   143,
     143,   143,   144,   144,   144,   145,   146,   147,   147,   147,
     148,   148,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     0,     1,     1,     4,     4,
       6,     4,     4,     4,     4,     4,     4,     5,     5,     8,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,    11,    12,     8,     2,     3,     7,     6,     0,     9,
      12,     0,     2,     6,    11,     7,     2,     3,     1,     1,
       0,     0,     0,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     4,     1,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       2,     2,     3,     4,     4,     4,     6,     4,     6,     4,
       6,     4,     6,     2,     1,     2,     1,     1,     2,     1,
       0,     3,     0,     3,     2,     4,     2,     4,     2,     1,
       3,     1,     3,     1,     3,     2,     2,     2,     2,     3,
       2,     3,     2,     2,     3,     2,     0,     3,     0,     0,
       9,     2,     0,     7,     8,     6,     0,     3,     0,     1,
       3,     4,     0,     1,     3,     0,     2,     0,     1,     3,
       1,     3,     3,     0,     1,     1,     1,     1,     3,     1,
       3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 22: /* BLTIN  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1727 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 23: /* FBLTIN  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1733 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 24: /* RBLTIN  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1739 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 25: /* ID  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1745 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 26: /* STRING  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1751 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 27: /* HANDLER  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1757 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 28: /* SYMBOL  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1763 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 29: /* ENDCLAUSE  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1769 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 30: /* tPLAYACCEL  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1775 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 31: /* tMETHOD  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1781 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 32: /* THEOBJECTFIELD  */
#line 136 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).objectfield).os; }
#line 1787 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 141: /* on  */
#line 135 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1793 "engines/director/lingo/lingo-gr.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4:
#line 142 "engines/director/lingo/lingo-gr.y"
                                { yyerrok; }
#line 2063 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 8:
#line 148 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_varpush);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[-2].code);
		delete (yyvsp[0].s); }
#line 2074 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 9:
#line 154 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[-2].code); }
#line 2082 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 10:
#line 158 "engines/director/lingo/lingo-gr.y"
                                                                {
		if (!(yyvsp[-3].s)->equalsIgnoreCase("menu")) {
			warning("LEXER: keyword 'menu' expected");
			YYERROR;
		}

		g_lingo->code1(LC::c_themenuentitypush);
		g_lingo->codeInt((yyvsp[-4].e)[0]);
		g_lingo->codeInt((yyvsp[-4].e)[1]);
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[0].code); }
#line 2098 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 11:
#line 169 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->code1(LC::c_after); }
#line 2104 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 12:
#line 170 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->code1(LC::c_before); }
#line 2110 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 13:
#line 171 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_varpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[0].code);
		delete (yyvsp[-2].s); }
#line 2121 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 14:
#line 177 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(0); // Put dummy id
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-2].e)[0]);
		g_lingo->codeInt((yyvsp[-2].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2133 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 15:
#line 184 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_varpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[0].code);
		delete (yyvsp[-2].s); }
#line 2144 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 16:
#line 190 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(0); // Put dummy id
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-2].e)[0]);
		g_lingo->codeInt((yyvsp[-2].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2156 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 17:
#line 197 "engines/director/lingo/lingo-gr.y"
                                                        {
		g_lingo->code1(LC::c_swap);
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-3].e)[0]);
		g_lingo->codeInt((yyvsp[-3].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2167 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 18:
#line 203 "engines/director/lingo/lingo-gr.y"
                                                        {
		g_lingo->code1(LC::c_swap);
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-3].e)[0]);
		g_lingo->codeInt((yyvsp[-3].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2178 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 19:
#line 210 "engines/director/lingo/lingo-gr.y"
                                                                        {
		if (!(yyvsp[-3].s)->equalsIgnoreCase("menu")) {
			warning("LEXER: keyword 'menu' expected");
			YYERROR;
		}

		warning("STUB: menuItem entity");
		g_lingo->code1(LC::c_themenuitementityassign);
		g_lingo->codeInt((yyvsp[-6].e)[0]);
		g_lingo->codeInt((yyvsp[-6].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2194 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 20:
#line 221 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_objectfieldassign);
		g_lingo->codeString((yyvsp[-2].objectfield).os->c_str());
		g_lingo->codeInt((yyvsp[-2].objectfield).oe);
		delete (yyvsp[-2].objectfield).os;
		(yyval.code) = (yyvsp[0].code); }
#line 2205 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 30:
#line 243 "engines/director/lingo/lingo-gr.y"
                                                                        {
		inst body = 0, end = 0;
		WRITE_UINT32(&body, (yyvsp[-3].code) - (yyvsp[-5].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-5].code));
		(*g_lingo->_currentScript)[(yyvsp[-5].code) + 1] = body;	/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[-5].code) + 2] = end; }
#line 2216 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 31:
#line 254 "engines/director/lingo/lingo-gr.y"
                                                                                                 {
		inst init = 0, finish = 0, body = 0, end = 0, inc = 0;
		WRITE_UINT32(&init, (yyvsp[-8].code) - (yyvsp[-10].code));
		WRITE_UINT32(&finish, (yyvsp[-4].code) - (yyvsp[-10].code));
		WRITE_UINT32(&body, (yyvsp[-2].code) - (yyvsp[-10].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-10].code));
		WRITE_UINT32(&inc, 1);
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 1] = init;		/* initial count value */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 2] = finish;	/* final count value */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 3] = body;		/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 4] = inc;		/* increment */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 5] = end; }
#line 2233 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 32:
#line 271 "engines/director/lingo/lingo-gr.y"
                                                                                                       {
		inst init = 0, finish = 0, body = 0, end = 0, inc = 0;
		WRITE_UINT32(&init, (yyvsp[-9].code) - (yyvsp[-11].code));
		WRITE_UINT32(&finish, (yyvsp[-4].code) - (yyvsp[-11].code));
		WRITE_UINT32(&body, (yyvsp[-2].code) - (yyvsp[-11].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-11].code));
		WRITE_UINT32(&inc, (uint32)-1);
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 1] = init;		/* initial count value */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 2] = finish;	/* final count value */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 3] = body;		/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 4] = inc;		/* increment */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 5] = end; }
#line 2250 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 33:
#line 283 "engines/director/lingo/lingo-gr.y"
                                                                            {
		inst list = 0, body = 0, end = 0;
		WRITE_UINT32(&list, (yyvsp[-5].code) - (yyvsp[-7].code));
		WRITE_UINT32(&body, (yyvsp[-2].code) - (yyvsp[-7].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-7].code));
		(*g_lingo->_currentScript)[(yyvsp[-7].code) + 1] = list;		/* initial count value */
		(*g_lingo->_currentScript)[(yyvsp[-7].code) + 2] = 0;		/* final count value */
		(*g_lingo->_currentScript)[(yyvsp[-7].code) + 3] = body;		/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[-7].code) + 4] = 0;		/* increment */
		(*g_lingo->_currentScript)[(yyvsp[-7].code) + 5] = end; }
#line 2265 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 34:
#line 294 "engines/director/lingo/lingo-gr.y"
                        {
		g_lingo->code1(LC::c_nextRepeat); }
#line 2272 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 35:
#line 296 "engines/director/lingo/lingo-gr.y"
                                      {
		inst end = 0;
		WRITE_UINT32(&end, (yyvsp[0].code) - (yyvsp[-2].code));
		g_lingo->code1(STOP);
		(*g_lingo->_currentScript)[(yyvsp[-2].code) + 1] = end; }
#line 2282 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 36:
#line 301 "engines/director/lingo/lingo-gr.y"
                                                          {
		inst end;
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-3].code));
		(*g_lingo->_currentScript)[(yyvsp[-3].code) + 1] = end; }
#line 2291 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 37:
#line 305 "engines/director/lingo/lingo-gr.y"
                                                    {
		inst end;
		WRITE_UINT32(&end, (yyvsp[0].code) - (yyvsp[-2].code));
		(*g_lingo->_currentScript)[(yyvsp[-2].code) + 1] = end; }
#line 2300 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 38:
#line 310 "engines/director/lingo/lingo-gr.y"
                                                        {
		(yyval.code) = g_lingo->code1(LC::c_tellcode);
		g_lingo->code1(STOP); }
#line 2308 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 39:
#line 314 "engines/director/lingo/lingo-gr.y"
                                                                                       {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-6].code) - (yyvsp[-8].code));
		WRITE_UINT32(&else1, (yyvsp[-3].code) - (yyvsp[-8].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-8].code));
		(*g_lingo->_currentScript)[(yyvsp[-8].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-8].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-8].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-8].code), (yyvsp[-1].code) - (yyvsp[-8].code), 0); }
#line 2323 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 40:
#line 324 "engines/director/lingo/lingo-gr.y"
                                                                                                              {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-9].code) - (yyvsp[-11].code));
		WRITE_UINT32(&else1, (yyvsp[-6].code) - (yyvsp[-11].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-11].code));
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-11].code), (yyvsp[-1].code) - (yyvsp[-11].code), (yyvsp[-3].code) - (yyvsp[-11].code)); }
#line 2338 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 43:
#line 338 "engines/director/lingo/lingo-gr.y"
                                                        {
		inst then = 0;
		WRITE_UINT32(&then, (yyvsp[-3].code) - (yyvsp[-5].code));
		(*g_lingo->_currentScript)[(yyvsp[-5].code) + 1] = then;	/* thenpart */

		g_lingo->codeLabel((yyvsp[-5].code)); }
#line 2349 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 44:
#line 345 "engines/director/lingo/lingo-gr.y"
                                                                                                         {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-8].code) - (yyvsp[-10].code));
		WRITE_UINT32(&else1, (yyvsp[-5].code) - (yyvsp[-10].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-10].code));
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-10].code), (yyvsp[-1].code) - (yyvsp[-10].code), (yyvsp[-3].code) - (yyvsp[-10].code)); }
#line 2364 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 45:
#line 355 "engines/director/lingo/lingo-gr.y"
                                                                   {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-4].code) - (yyvsp[-6].code));
		WRITE_UINT32(&else1, 0);
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-6].code));
		(*g_lingo->_currentScript)[(yyvsp[-6].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-6].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-6].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-6].code), (yyvsp[-1].code) - (yyvsp[-6].code), (yyvsp[-1].code) - (yyvsp[-6].code)); }
#line 2379 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 46:
#line 366 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.code) = g_lingo->code3(LC::c_repeatwhilecode, STOP, STOP); }
#line 2385 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 47:
#line 368 "engines/director/lingo/lingo-gr.y"
                                                {
		(yyval.code) = g_lingo->code3(LC::c_repeatwithcode, STOP, STOP);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2395 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 48:
#line 374 "engines/director/lingo/lingo-gr.y"
                                                {
		(yyval.code) = g_lingo->code1(LC::c_ifcode);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->code1(0);  // Do not skip end
		g_lingo->codeLabel(0); }
#line 2405 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 49:
#line 380 "engines/director/lingo/lingo-gr.y"
                                        {
		inst skipEnd;
		WRITE_UINT32(&skipEnd, 1); // We have to skip end to avoid multiple executions
		(yyval.code) = g_lingo->code1(LC::c_ifcode);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->code1(skipEnd); }
#line 2416 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 50:
#line 387 "engines/director/lingo/lingo-gr.y"
                                { (yyval.code) = g_lingo->_currentScript->size(); }
#line 2422 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 51:
#line 389 "engines/director/lingo/lingo-gr.y"
                                { g_lingo->code1(STOP); (yyval.code) = g_lingo->_currentScript->size(); }
#line 2428 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 52:
#line 391 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->_currentScript->size(); }
#line 2434 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 55:
#line 395 "engines/director/lingo/lingo-gr.y"
                                {
		(yyval.code) = g_lingo->code1(LC::c_whencode);
		g_lingo->code1(STOP);
		g_lingo->codeString((yyvsp[-1].s)->c_str());
		delete (yyvsp[-1].s); }
#line 2444 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 56:
#line 401 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt((yyvsp[0].i)); }
#line 2452 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 57:
#line 404 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_floatpush);
		g_lingo->codeFloat((yyvsp[0].f)); }
#line 2460 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 58:
#line 407 "engines/director/lingo/lingo-gr.y"
                        {											// D3
		(yyval.code) = g_lingo->code1(LC::c_symbolpush);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2469 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 59:
#line 411 "engines/director/lingo/lingo-gr.y"
                                {
		(yyval.code) = g_lingo->code1(LC::c_stringpush);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2478 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 60:
#line 415 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_eval);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2487 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 62:
#line 421 "engines/director/lingo/lingo-gr.y"
                 { (yyval.code) = (yyvsp[0].code); }
#line 2493 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 64:
#line 423 "engines/director/lingo/lingo-gr.y"
                                 {
		g_lingo->codeFunc((yyvsp[-3].s), (yyvsp[-1].narg));
		delete (yyvsp[-3].s); }
#line 2501 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 65:
#line 426 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->codeFunc((yyvsp[-1].s), (yyvsp[0].narg));
		delete (yyvsp[-1].s); }
#line 2509 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 66:
#line 429 "engines/director/lingo/lingo-gr.y"
                                {
		(yyval.code) = g_lingo->codeFunc((yyvsp[-3].s), (yyvsp[-1].narg));
		delete (yyvsp[-3].s); }
#line 2517 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 67:
#line 432 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(0); // Put dummy id
		g_lingo->code1(LC::c_theentitypush);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[0].e)[0]);
		WRITE_UINT32(&f, (yyvsp[0].e)[1]);
		g_lingo->code2(e, f); }
#line 2530 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 68:
#line 440 "engines/director/lingo/lingo-gr.y"
                                     {
		(yyval.code) = g_lingo->code1(LC::c_theentitypush);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[-1].e)[0]);
		WRITE_UINT32(&f, (yyvsp[-1].e)[1]);
		g_lingo->code2(e, f); }
#line 2541 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 69:
#line 446 "engines/director/lingo/lingo-gr.y"
                         {
		g_lingo->code1(LC::c_objectfieldpush);
		g_lingo->codeString((yyvsp[0].objectfield).os->c_str());
		g_lingo->codeInt((yyvsp[0].objectfield).oe);
		delete (yyvsp[0].objectfield).os; }
#line 2551 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 70:
#line 451 "engines/director/lingo/lingo-gr.y"
                       {
		g_lingo->code1(LC::c_objectrefpush);
		g_lingo->codeString((yyvsp[0].objectref).obj->c_str());
		g_lingo->codeString((yyvsp[0].objectref).field->c_str());
		delete (yyvsp[0].objectref).obj;
		delete (yyvsp[0].objectref).field; }
#line 2562 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 72:
#line 458 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_add); }
#line 2568 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 73:
#line 459 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_sub); }
#line 2574 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 74:
#line 460 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_mul); }
#line 2580 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 75:
#line 461 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_div); }
#line 2586 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 76:
#line 462 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_mod); }
#line 2592 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 77:
#line 463 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_gt); }
#line 2598 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 78:
#line 464 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_lt); }
#line 2604 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 79:
#line 465 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_eq); }
#line 2610 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 80:
#line 466 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_neq); }
#line 2616 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 81:
#line 467 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_ge); }
#line 2622 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 82:
#line 468 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_le); }
#line 2628 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 83:
#line 469 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_and); }
#line 2634 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 84:
#line 470 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_or); }
#line 2640 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 85:
#line 471 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_not); }
#line 2646 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 86:
#line 472 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_ampersand); }
#line 2652 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 87:
#line 473 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_concat); }
#line 2658 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 88:
#line 474 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_contains); }
#line 2664 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 89:
#line 475 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_starts); }
#line 2670 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 90:
#line 476 "engines/director/lingo/lingo-gr.y"
                                    { (yyval.code) = (yyvsp[0].code); }
#line 2676 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 91:
#line 477 "engines/director/lingo/lingo-gr.y"
                                    { (yyval.code) = (yyvsp[0].code); g_lingo->code1(LC::c_negate); }
#line 2682 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 92:
#line 478 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = (yyvsp[-1].code); }
#line 2688 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 93:
#line 479 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_intersects); }
#line 2694 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 94:
#line 480 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_within); }
#line 2700 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 95:
#line 482 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_charOf); }
#line 2706 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 96:
#line 483 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_charToOf); }
#line 2712 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 97:
#line 484 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_itemOf); }
#line 2718 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 98:
#line 485 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_itemToOf); }
#line 2724 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 99:
#line 486 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_lineOf); }
#line 2730 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 100:
#line 487 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_lineToOf); }
#line 2736 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 101:
#line 488 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_wordOf); }
#line 2742 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 102:
#line 489 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_wordToOf); }
#line 2748 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 103:
#line 491 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->codeFunc((yyvsp[-1].s), 1);
		delete (yyvsp[-1].s); }
#line 2756 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 105:
#line 496 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_printtop); }
#line 2762 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 108:
#line 499 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_exitRepeat); }
#line 2768 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 109:
#line 500 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_procret); }
#line 2774 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 110:
#line 501 "engines/director/lingo/lingo-gr.y"
                  { g_lingo->_indef = kStateInArgs; }
#line 2780 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 111:
#line 501 "engines/director/lingo/lingo-gr.y"
                                                                 { g_lingo->_indef = kStateNone; }
#line 2786 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 112:
#line 502 "engines/director/lingo/lingo-gr.y"
                    { g_lingo->_indef = kStateInArgs; }
#line 2792 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 113:
#line 502 "engines/director/lingo/lingo-gr.y"
                                                                     { g_lingo->_indef = kStateNone; }
#line 2798 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 115:
#line 504 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->codeFunc((yyvsp[-3].s), (yyvsp[-1].narg));
		delete (yyvsp[-3].s); }
#line 2806 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 116:
#line 507 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->codeFunc((yyvsp[-1].s), (yyvsp[0].narg));
		delete (yyvsp[-1].s); }
#line 2814 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 117:
#line 510 "engines/director/lingo/lingo-gr.y"
                                { g_lingo->code1(LC::c_open); }
#line 2820 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 118:
#line 511 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code2(LC::c_voidpush, LC::c_open); }
#line 2826 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 119:
#line 513 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_global);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2835 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 120:
#line 517 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_global);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2844 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 121:
#line 522 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_property);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2853 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 122:
#line 526 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_property);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2862 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 123:
#line 531 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_instance);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2871 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 124:
#line 535 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_instance);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2880 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 125:
#line 547 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_gotoloop); }
#line 2886 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 126:
#line 548 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_gotonext); }
#line 2892 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 127:
#line 549 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_gotoprevious); }
#line 2898 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 128:
#line 550 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(1);
		g_lingo->code1(LC::c_goto); }
#line 2907 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 129:
#line 554 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(3);
		g_lingo->code1(LC::c_goto); }
#line 2916 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 130:
#line 558 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(2);
		g_lingo->code1(LC::c_goto); }
#line 2925 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 133:
#line 566 "engines/director/lingo/lingo-gr.y"
                                        { // "play #done" is also caught by this
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(1);
		g_lingo->code1(LC::c_play); }
#line 2934 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 134:
#line 570 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(3);
		g_lingo->code1(LC::c_play); }
#line 2943 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 135:
#line 574 "engines/director/lingo/lingo-gr.y"
                                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(2);
		g_lingo->code1(LC::c_play); }
#line 2952 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 136:
#line 578 "engines/director/lingo/lingo-gr.y"
                     { g_lingo->codeSetImmediate(true); }
#line 2958 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 137:
#line 578 "engines/director/lingo/lingo-gr.y"
                                                                        {
		g_lingo->codeSetImmediate(false);
		g_lingo->codeFunc((yyvsp[-2].s), (yyvsp[0].narg));
		delete (yyvsp[-2].s); }
#line 2967 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 138:
#line 608 "engines/director/lingo/lingo-gr.y"
             { g_lingo->_indef = kStateInArgs; }
#line 2973 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 139:
#line 608 "engines/director/lingo/lingo-gr.y"
                                                    { g_lingo->_currentFactory.clear(); }
#line 2979 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 140:
#line 609 "engines/director/lingo/lingo-gr.y"
                                                                        {
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-6].s), (yyvsp[-4].code), (yyvsp[-3].narg));
		g_lingo->clearArgStack();
		g_lingo->_indef = kStateNone;
		delete (yyvsp[-6].s); }
#line 2990 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 141:
#line 615 "engines/director/lingo/lingo-gr.y"
                        { g_lingo->codeFactory(*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 2996 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 142:
#line 616 "engines/director/lingo/lingo-gr.y"
                  { g_lingo->_indef = kStateInArgs; }
#line 3002 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 143:
#line 617 "engines/director/lingo/lingo-gr.y"
                                                                        {
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-6].s), (yyvsp[-4].code), (yyvsp[-3].narg) + 1, &g_lingo->_currentFactory);
		g_lingo->clearArgStack();
		g_lingo->_indef = kStateNone;
		delete (yyvsp[-6].s); }
#line 3013 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 144:
#line 623 "engines/director/lingo/lingo-gr.y"
                                                                     {	// D3
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-7].s), (yyvsp[-6].code), (yyvsp[-5].narg));
		g_lingo->clearArgStack();
		g_lingo->_indef = kStateNone;
		g_lingo->_ignoreMe = false;

		checkEnd((yyvsp[-1].s), (yyvsp[-7].s)->c_str(), false);
		delete (yyvsp[-7].s);
		delete (yyvsp[-1].s); }
#line 3028 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 145:
#line 633 "engines/director/lingo/lingo-gr.y"
                                                 {	// D4. No 'end' clause
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-5].s), (yyvsp[-4].code), (yyvsp[-3].narg));
		g_lingo->_indef = kStateNone;
		g_lingo->clearArgStack();
		g_lingo->_ignoreMe = false;
		delete (yyvsp[-5].s); }
#line 3040 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 146:
#line 641 "engines/director/lingo/lingo-gr.y"
         { g_lingo->_indef = kStateInArgs; }
#line 3046 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 147:
#line 641 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.s) = (yyvsp[0].s); g_lingo->_currentFactory.clear(); g_lingo->_ignoreMe = true; }
#line 3052 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 148:
#line 643 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = 0; }
#line 3058 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 149:
#line 644 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->codeArg((yyvsp[0].s)); (yyval.narg) = 1; delete (yyvsp[0].s); }
#line 3064 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 150:
#line 645 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->codeArg((yyvsp[0].s)); (yyval.narg) = (yyvsp[-2].narg) + 1; delete (yyvsp[0].s); }
#line 3070 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 151:
#line 646 "engines/director/lingo/lingo-gr.y"
                                { g_lingo->codeArg((yyvsp[0].s)); (yyval.narg) = (yyvsp[-3].narg) + 1; delete (yyvsp[0].s); }
#line 3076 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 153:
#line 649 "engines/director/lingo/lingo-gr.y"
                                                { delete (yyvsp[0].s); }
#line 3082 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 154:
#line 650 "engines/director/lingo/lingo-gr.y"
                                        { delete (yyvsp[0].s); }
#line 3088 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 155:
#line 652 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->codeArgStore(); g_lingo->_indef = kStateInDef; }
#line 3094 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 156:
#line 654 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_call);
		g_lingo->codeString((yyvsp[-1].s)->c_str());
		inst numpar = 0;
		WRITE_UINT32(&numpar, (yyvsp[0].narg));
		g_lingo->code1(numpar);
		delete (yyvsp[-1].s); }
#line 3106 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 157:
#line 662 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = 0; }
#line 3112 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 158:
#line 663 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.narg) = 1; }
#line 3118 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 159:
#line 664 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3124 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 160:
#line 666 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = 1; }
#line 3130 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 161:
#line 667 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3136 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 162:
#line 669 "engines/director/lingo/lingo-gr.y"
                                { (yyval.code) = (yyvsp[-1].code); }
#line 3142 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 163:
#line 671 "engines/director/lingo/lingo-gr.y"
                                { (yyval.code) = g_lingo->code2(LC::c_arraypush, 0); }
#line 3148 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 164:
#line 672 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->code2(LC::c_proparraypush, 0); }
#line 3154 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 165:
#line 673 "engines/director/lingo/lingo-gr.y"
                     { (yyval.code) = g_lingo->code1(LC::c_arraypush); (yyval.code) = g_lingo->codeInt((yyvsp[0].narg)); }
#line 3160 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 166:
#line 674 "engines/director/lingo/lingo-gr.y"
                         { (yyval.code) = g_lingo->code1(LC::c_proparraypush); (yyval.code) = g_lingo->codeInt((yyvsp[0].narg)); }
#line 3166 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 167:
#line 676 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = 1; }
#line 3172 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 168:
#line 677 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3178 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 169:
#line 679 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = 1; }
#line 3184 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 170:
#line 680 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3190 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 171:
#line 682 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_symbolpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		delete (yyvsp[-2].s); }
#line 3199 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 172:
#line 686 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_stringpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		delete (yyvsp[-2].s); }
#line 3208 "engines/director/lingo/lingo-gr.cpp"
    break;


#line 3212 "engines/director/lingo/lingo-gr.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 692 "engines/director/lingo/lingo-gr.y"

