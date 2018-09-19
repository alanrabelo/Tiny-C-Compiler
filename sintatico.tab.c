/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintatico.y" /* yacc.c:339  */


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define tamanho 100000
extern int yylex();
extern char* yytext;
extern char AUX12[tamanho], AUX13[tamanho];
extern int ajuda_sint;
extern int ajuda_lex;
extern char vets[tamanho];
extern char vets2[tamanho];
extern int coluna;
extern int lines;
int tam;
int LIN = 0;
char str9[tamanho];



#line 88 "sintatico.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sintatico.tab.h".  */
#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VOID = 258,
    FLOAT = 259,
    INT = 260,
    CHAR = 261,
    RETURN = 262,
    BREAK = 263,
    SWITCH = 264,
    CASE = 265,
    DEFAULT = 266,
    DO = 267,
    WHILE = 268,
    FOR = 269,
    IF = 270,
    ELSE = 271,
    TYPEDEF = 272,
    STRUCT = 273,
    PLUS = 274,
    MINUS = 275,
    MULTIPLY = 276,
    DIV = 277,
    REMAINDER = 278,
    INC = 279,
    DEC = 280,
    BITWISE_AND = 281,
    BITWISE_OR = 282,
    BITWISE_NOT = 283,
    BITWISE_XOR = 284,
    NOT = 285,
    LOGICAL_AND = 286,
    LOGICAL_OR = 287,
    EQUAL = 288,
    NOT_EQUAL = 289,
    LESS_THAN = 290,
    GREATER_THAN = 291,
    LESS_EQUAL = 292,
    GREATER_EQUAL = 293,
    R_SHIFT = 294,
    L_SHIFT = 295,
    ASSIGN = 296,
    ADD_ASSIGN = 297,
    MINUS_ASSIGN = 298,
    SEMICOLON = 299,
    COMMA = 300,
    COLON = 301,
    L_PAREN = 302,
    R_PAREN = 303,
    L_CURLY_BRACKET = 304,
    R_CURLY_BRACKET = 305,
    L_SQUARE_BRACKET = 306,
    R_SQUARE_BRACKET = 307,
    TERNARY_CONDITIONAL = 308,
    NUMBER_SIGN = 309,
    POINTER = 310,
    PRINTF = 311,
    SCANF = 312,
    DEFINE = 313,
    EXIT = 314,
    NUM_OCTAL = 315,
    NUM_INTEGER = 316,
    NUM_DECIMAL = 317,
    NUM_HEXA = 318,
    CHARACTER = 319,
    STRING = 320,
    IDENTIFIER = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "sintatico.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   557

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  287

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    96,    97,   100,   100,   103,   104,   105,
     109,   112,   113,   116,   117,   121,   124,   125,   128,   129,
     130,   133,   134,   138,   141,   142,   146,   149,   150,   153,
     156,   157,   160,   161,   162,   166,   167,   168,   169,   173,
     176,   177,   181,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   198,   199,   202,   203,   206,   207,
     210,   211,   214,   217,   218,   221,   222,   226,   229,   230,
     234,   235,   238,   239,   240,   244,   247,   248,   252,   255,
     256,   260,   263,   264,   268,   271,   272,   276,   279,   280,
     284,   287,   288,   292,   295,   296,   297,   301,   304,   305,
     306,   307,   308,   312,   315,   316,   317,   321,   324,   325,
     326,   330,   333,   334,   335,   336,   340,   341,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   357,   358,   361,
     362,   363,   364,   367,   368,   371,   374,   375,   379,   380,
     381,   382,   383,   387,   388,   389,   390
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "FLOAT", "INT", "CHAR", "RETURN",
  "BREAK", "SWITCH", "CASE", "DEFAULT", "DO", "WHILE", "FOR", "IF", "ELSE",
  "TYPEDEF", "STRUCT", "PLUS", "MINUS", "MULTIPLY", "DIV", "REMAINDER",
  "INC", "DEC", "BITWISE_AND", "BITWISE_OR", "BITWISE_NOT", "BITWISE_XOR",
  "NOT", "LOGICAL_AND", "LOGICAL_OR", "EQUAL", "NOT_EQUAL", "LESS_THAN",
  "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL", "R_SHIFT", "L_SHIFT",
  "ASSIGN", "ADD_ASSIGN", "MINUS_ASSIGN", "SEMICOLON", "COMMA", "COLON",
  "L_PAREN", "R_PAREN", "L_CURLY_BRACKET", "R_CURLY_BRACKET",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "TERNARY_CONDITIONAL",
  "NUMBER_SIGN", "POINTER", "PRINTF", "SCANF", "DEFINE", "EXIT",
  "NUM_OCTAL", "NUM_INTEGER", "NUM_DECIMAL", "NUM_HEXA", "CHARACTER",
  "STRING", "IDENTIFIER", "$accept", "S", "programa", "prog1",
  "declaracoes", "funcao", "func1", "func2", "declaracao_de_variaveis",
  "ddv1", "ddv2", "ddv3", "declaracao_de_prototipos", "ddp1", "parametros",
  "par1", "par2", "par3", "par4", "tipo", "comandos", "com1", "bloco",
  "lista_de_comandos", "ldc1", "ldc2", "ldc3", "ldc4", "ldc5", "ldc6",
  "ldc7", "expressao", "exp1", "expressao_de_atribuicao", "eda1",
  "expressao_condicional", "x", "expressao_or_logico", "eol1",
  "expressao_and_logico", "eal1", "expressao_or", "eor1", "expressao_xor",
  "exor1", "expressao_and", "eand1", "expressao_de_igualdade", "edi1",
  "expressao_relacional", "erelac1", "expressao_shift", "eshi1",
  "expressao_aditiva", "ead1", "expressao_multiplicativa", "emul1",
  "expressao_cast", "expressao_unaria", "expressao_pos_fixa", "epf1",
  "epf2", "epf3", "epf4", "expressao_primaria", "numero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -124,  -124,  -124,  -124,   -55,     5,  -124,     9,     9,
    -124,  -124,    -2,   -36,  -124,  -124,  -124,  -124,    -2,   -10,
    -124,  -124,  -124,   467,  -124,  -124,  -124,   467,  -124,     1,
      22,   467,  -124,  -124,    25,   467,   467,   467,   491,   491,
     467,   467,   467,   281,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,    30,  -124,   -20,    50,    75,    83,    91,    86,
       6,    43,    57,    34,   111,   100,   -15,  -124,  -124,    94,
       1,    32,  -124,  -124,  -124,  -124,     2,    71,  -124,   233,
    -124,  -124,  -124,  -124,   467,  -124,  -124,  -124,  -124,  -124,
     109,   113,   467,  -124,   467,  -124,   467,  -124,   467,  -124,
     467,  -124,   467,  -124,   467,  -124,   467,   467,  -124,   467,
     467,   467,   467,  -124,   467,   467,  -124,   467,   467,  -124,
     467,   467,   467,  -124,   467,   467,   467,  -124,  -124,  -124,
     128,   467,  -124,  -124,     2,    14,  -124,    32,   353,   117,
     124,   130,   134,  -124,   305,   135,   136,   137,  -124,   233,
       1,   145,  -124,   305,   141,   467,  -124,    30,   140,    50,
      75,    83,    91,    86,     6,     6,    43,    43,    43,    43,
      57,    57,    34,    34,   111,   111,   111,  -124,  -124,  -124,
    -124,   -41,  -124,  -124,   144,  -124,    81,  -124,   467,  -124,
    -124,  -124,  -124,   143,   184,   467,   365,   467,   148,   138,
     139,   467,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   467,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   467,  -124,
    -124,  -124,  -124,   147,  -124,   153,   157,   413,  -124,   162,
     159,  -124,   -27,   156,   160,  -124,  -124,    14,   467,   117,
     442,  -124,   165,   413,   117,   467,   166,  -124,   185,   168,
    -124,   167,  -124,   117,  -124,  -124,   169,   442,  -124,   197,
     170,  -124,   154,  -124,   175,  -124,  -124,  -124,   117,  -124,
     177,   174,  -124,  -124,  -124,   179,  -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    38,    37,    35,    36,     0,     0,     2,     6,     6,
       8,     9,     0,     0,     1,     5,     3,     4,     0,     0,
      10,    15,    23,     0,    11,    16,    24,     0,    22,     0,
       0,     0,    17,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,   143,   146,   144,   140,   141,
     138,     7,    69,    70,    77,    80,    83,    86,    89,    92,
      96,   102,   106,   110,   115,   116,   118,   127,   139,     0,
       0,     0,    21,    27,    26,    28,     0,     0,    25,     0,
     123,   116,   124,   122,     0,   119,   120,   121,   125,   126,
       0,     0,     0,    67,     0,    75,     0,    78,     0,    81,
       0,    84,     0,    87,     0,    90,     0,     0,    93,     0,
       0,     0,     0,    97,     0,     0,   103,     0,     0,   107,
       0,     0,     0,   111,     0,     0,     0,    71,   130,   131,
       0,     0,   128,    19,     0,     0,    29,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,    12,     0,
       0,     0,    53,    41,     0,     0,   142,    69,     0,    80,
      83,    86,    89,    92,    96,    96,   102,   102,   102,   102,
     106,   106,   110,   110,   115,   115,   115,    72,    73,    74,
     133,     0,   132,   134,     0,    30,     0,    34,     0,    31,
      18,    66,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    14,    40,    39,    51,   117,    68,     0,
      79,    82,    85,    88,    91,    94,    95,    98,   100,    99,
     101,   105,   104,   109,   108,   112,   113,   114,     0,   137,
     135,   129,    33,     0,    65,     0,     0,     0,    46,     0,
       0,    42,     0,     0,     0,    76,   136,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,    47,     0,     0,
      32,     0,    45,     0,    59,    61,     0,     0,    56,    55,
       0,    64,     0,    49,     0,    62,    60,    58,     0,    44,
       0,     0,    43,    54,    63,     0,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   224,   217,  -124,  -124,   210,    80,   -77,   -12,
      96,   172,  -124,   213,  -124,  -124,    48,   101,    -5,   -19,
    -115,  -124,  -123,  -124,  -124,  -124,    -3,   -24,    -6,  -124,
    -124,   -23,    92,   -26,  -124,    42,  -124,  -124,    97,   171,
      95,   164,   103,   173,   104,   163,   105,   187,   -63,    44,
     -78,   -17,   -11,    49,    -4,    62,   -30,    15,     7,  -124,
    -124,  -124,    41,  -124,  -124,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    15,    16,     8,     9,    20,   148,    10,    21,
      32,    33,    11,    22,    34,    74,    75,   136,   189,    12,
     151,   205,   152,   153,   279,   238,   251,   264,   265,   257,
     192,   154,    93,    52,   127,    53,    95,    54,    97,    55,
      99,    56,   101,    57,   103,    58,   105,    59,   108,    60,
     113,    61,   116,    62,   119,    63,   123,    64,    65,    66,
     132,   182,   183,   230,    67,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      51,    69,   149,    13,   228,    14,    25,   229,    77,   128,
     129,    76,     1,     2,     3,     4,   194,    72,   255,    18,
      91,   256,    70,   134,    90,     1,     2,     3,     4,   198,
      23,    27,   130,    94,    28,    29,   131,    30,   204,   106,
     107,    31,    81,    81,    81,    85,    86,    81,    81,    81,
      80,    82,    83,   117,   118,    87,    88,    89,    25,   186,
     150,    91,   187,     5,    19,   188,   157,    71,   135,    78,
      73,   158,   149,    27,    79,    92,    28,    29,   109,   110,
     111,   112,    96,    31,     1,     2,     3,     4,   217,   218,
     219,   220,   166,   167,   168,   169,   114,   115,   177,   178,
     179,   215,   216,    81,   181,    81,    98,    81,   184,    81,
     100,    81,   104,    81,    81,   193,    81,    81,    81,    81,
     102,    81,    81,   137,    81,    81,   262,    81,    81,    81,
     150,   269,   120,   121,   122,   174,   175,   176,    28,    29,
     275,   124,   125,   126,   225,   226,   227,    35,    36,    37,
     164,   165,    38,    39,    40,   283,    41,   155,    42,   221,
     222,   156,    81,   170,   171,   233,   144,    76,   223,   224,
     207,   195,   236,   239,   240,    43,   180,   196,   244,   172,
     173,   197,   199,   200,   201,   206,   209,   234,    44,    45,
      46,    47,    48,    49,    50,   203,   231,   235,   241,   247,
     248,   258,   181,   242,   243,   249,   253,   254,   259,   267,
     271,   272,   273,   278,   252,   274,    81,   263,   280,   282,
     281,   284,   285,   286,     7,   261,    17,   266,    24,   202,
     252,    26,   270,   190,   232,   185,     1,     2,     3,     4,
     138,   133,   260,   277,   266,   139,   140,   141,   142,   208,
     268,   245,    35,    36,    37,   211,   210,    38,    39,    40,
     276,    41,   160,    42,   212,   162,   213,   159,   214,   246,
       0,     0,     0,   161,     0,     0,     0,   143,     0,     0,
      43,     0,   144,     0,     1,     2,     3,     4,     0,   145,
     146,   163,   147,    44,    45,    46,    47,    48,    49,    50,
      35,    36,    37,     0,     0,    38,    39,    40,     0,    41,
       0,    42,   138,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,    35,    36,    37,     0,    43,    38,
      39,    40,     0,    41,     0,    42,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,     0,   143,
       0,     0,    43,     0,   144,     0,     0,     0,     0,     0,
       0,   145,   146,     0,   147,    44,    45,    46,    47,    48,
      49,    50,    35,    36,    37,     0,     0,    38,    39,    40,
       0,    41,     0,    42,    35,    36,    37,     0,     0,    38,
      39,    40,     0,    41,     0,    42,     0,   191,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
      49,    50,    35,    36,    37,     0,     0,    38,    39,    40,
       0,    41,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,     0,
      43,    35,    36,    37,     0,     0,    38,    39,    40,     0,
      41,     0,    42,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,    35,    36,    37,    43,
     263,    38,    39,    40,     0,    41,     0,    42,     0,     0,
       0,     0,    44,    45,    46,    47,    48,    49,    50,     0,
      35,    36,    37,     0,    43,    38,    39,    40,     0,    41,
       0,    42,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
      23,    27,    79,    58,    45,     0,    18,    48,    31,    24,
      25,    30,     3,     4,     5,     6,   139,    29,    45,    21,
      43,    48,    21,    21,    43,     3,     4,     5,     6,   144,
      66,    41,    47,    53,    44,    45,    51,    47,   153,    33,
      34,    51,    35,    36,    37,    38,    39,    40,    41,    42,
      35,    36,    37,    19,    20,    40,    41,    42,    70,    45,
      79,    84,    48,    54,    66,    51,    92,    66,    66,    44,
      48,    94,   149,    41,    49,    45,    44,    45,    35,    36,
      37,    38,    32,    51,     3,     4,     5,     6,   166,   167,
     168,   169,   109,   110,   111,   112,    39,    40,   124,   125,
     126,   164,   165,    96,   130,    98,    31,   100,   131,   102,
      27,   104,    26,   106,   107,   138,   109,   110,   111,   112,
      29,   114,   115,    52,   117,   118,   249,   120,   121,   122,
     149,   254,    21,    22,    23,   120,   121,   122,    44,    45,
     263,    41,    42,    43,   174,   175,   176,    19,    20,    21,
     106,   107,    24,    25,    26,   278,    28,    48,    30,   170,
     171,    48,   155,   114,   115,   188,    49,   186,   172,   173,
     155,    47,   195,   196,   197,    47,    48,    47,   201,   117,
     118,    47,    47,    47,    47,    44,    46,    44,    60,    61,
      62,    63,    64,    65,    66,    50,    52,    13,    50,    52,
      47,    45,   228,    65,    65,    48,    44,    48,    48,    44,
      44,    26,    44,    16,   237,    48,   209,    48,    48,    44,
      66,    44,    48,    44,     0,   248,     9,   250,    18,   149,
     253,    18,   255,   137,   186,   134,     3,     4,     5,     6,
       7,    69,   247,   267,   267,    12,    13,    14,    15,   157,
     253,   209,    19,    20,    21,   160,   159,    24,    25,    26,
     266,    28,    98,    30,   161,   102,   162,    96,   163,   228,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    49,    -1,     3,     4,     5,     6,    -1,    56,
      57,   104,    59,    60,    61,    62,    63,    64,    65,    66,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      -1,    30,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    -1,    47,    24,
      25,    26,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    44,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    -1,    30,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    -1,    30,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    47,
      48,    24,    25,    26,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      19,    20,    21,    -1,    47,    24,    25,    26,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    54,    68,    69,    71,    72,
      75,    79,    86,    58,     0,    69,    70,    70,    21,    66,
      73,    76,    80,    66,    73,    76,    80,    41,    44,    45,
      47,    51,    77,    78,    81,    19,    20,    21,    24,    25,
      26,    28,    30,    47,    60,    61,    62,    63,    64,    65,
      66,    98,   100,   102,   104,   106,   108,   110,   112,   114,
     116,   118,   120,   122,   124,   125,   126,   131,   132,   100,
      21,    66,    76,    48,    82,    83,    86,    98,    44,    49,
     124,   125,   124,   124,    47,   125,   125,   124,   124,   124,
      86,    98,    45,    99,    53,   103,    32,   105,    31,   107,
      27,   109,    29,   111,    26,   113,    33,    34,   115,    35,
      36,    37,    38,   117,    39,    40,   119,    19,    20,   121,
      21,    22,    23,   123,    41,    42,    43,   101,    24,    25,
      47,    51,   127,    78,    21,    66,    84,    52,     7,    12,
      13,    14,    15,    44,    49,    56,    57,    59,    74,    75,
      86,    87,    89,    90,    98,    48,    48,   100,    98,   106,
     108,   110,   112,   114,   116,   116,   118,   118,   118,   118,
     120,   120,   122,   122,   124,   124,   124,   100,   100,   100,
      48,   100,   128,   129,    98,    84,    45,    48,    51,    85,
      77,    44,    97,    98,    89,    47,    47,    47,    87,    47,
      47,    47,    74,    50,    87,    88,    44,   124,    99,    46,
     105,   107,   109,   111,   113,   115,   115,   117,   117,   117,
     117,   119,   119,   121,   121,   123,   123,   123,    45,    48,
     130,    52,    83,    98,    44,    13,    98,    44,    92,    98,
      98,    50,    65,    65,    98,   102,   129,    52,    47,    48,
      44,    93,    98,    44,    48,    45,    48,    96,    45,    48,
      85,    98,    89,    48,    94,    95,    98,    44,    93,    89,
      98,    44,    26,    44,    48,    89,    95,    94,    16,    91,
      48,    66,    44,    89,    44,    48,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    71,
      72,    73,    73,    74,    74,    75,    76,    76,    77,    77,
      77,    78,    78,    79,    80,    80,    81,    82,    82,    83,
      84,    84,    85,    85,    85,    86,    86,    86,    86,    87,
      88,    88,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    96,    96,    97,    97,    98,    99,    99,
     100,   100,   101,   101,   101,   102,   103,   103,   104,   105,
     105,   106,   107,   107,   108,   109,   109,   110,   111,   111,
     112,   113,   113,   114,   115,   115,   115,   116,   117,   117,
     117,   117,   117,   118,   119,   119,   119,   120,   121,   121,
     121,   122,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   127,
     127,   127,   127,   128,   128,   129,   130,   130,   131,   131,
     131,   131,   131,   132,   132,   132,   132
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     0,     4,     1,     1,
       2,     2,     4,     2,     2,     2,     2,     2,     4,     3,
       1,     2,     1,     2,     2,     3,     2,     1,     1,     2,
       2,     2,     4,     2,     1,     1,     1,     1,     1,     2,
       1,     0,     3,     7,     6,     5,     3,     4,     8,     5,
       2,     2,     1,     1,     2,     0,     3,     2,     3,     2,
       2,     1,     2,     4,     2,     2,     1,     2,     3,     0,
       1,     2,     2,     2,     2,     2,     4,     0,     2,     3,
       0,     2,     3,     0,     2,     3,     0,     2,     3,     0,
       2,     3,     0,     2,     3,     3,     0,     2,     3,     3,
       3,     3,     0,     2,     3,     3,     0,     2,     3,     3,
       0,     2,     3,     3,     3,     0,     1,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     3,
       1,     1,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
  YYUSE (yytype);
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 93 "sintatico.y" /* yacc.c:1666  */
    { printf("SUCCESSFUL COMPILATION."); return 1;}
#line 1555 "sintatico.tab.c" /* yacc.c:1666  */
    break;


#line 1559 "sintatico.tab.c" /* yacc.c:1666  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 394 "sintatico.y" /* yacc.c:1910  */


yyerror(char *s)
{
	if(ajuda_sint == 0){

	    tam = coluna - (strlen(AUX12)-1);
		LIN = lines;
		strcpy(str9, AUX12);
		ajuda_sint = 1;
	}
	/*else{

		LIN++;
		ajuda_sint = 3;
	}*/
}

int main(int argc, char **argv)
{
	char str34[tamanho];
	int indice = 0;
	yyparse();
	while(yylex());
		//percorre o léxico
//printf("%s     %s\n\n\n", vets2,str);
	while(vets2[indice] != '\0'){

		if(vets2[indice] == '\n')
			break;

		str34[indice] = vets2[indice];
		indice++;
	}
	str34[indice] = '\0';

	if(ajuda_sint == 1){

		printf("error:syntax:%d:%d: %s\n%s\n%*s",LIN,tam,str9,str34,tam, "^");
	}
}
