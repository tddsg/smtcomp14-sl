/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         smtlib2_parser_parse
#define yylex           smtlib2_parser_lex
#define yyerror         smtlib2_parser_error
#define yydebug         smtlib2_parser_debug
#define yynerrs         smtlib2_parser_nerrs


/* Copy the first part of user declarations.  */
#line 28 "smtlib2bisonparser.y" /* yacc.c:339  */

#include "smtlib2parserinterface.h"
#include "smtlib2bisonparser.h"
#include "smtlib2flexlexer.h"
#include <limits.h>
#include <assert.h>

#define YYMAXDEPTH LONG_MAX
#define YYLTYPE_IS_TRIVIAL 1


void smtlib2_parser_error(YYLTYPE *yylloc, yyscan_t scanner,
                          smtlib2_parser_interface *parser,
                          const char *s);

/*
 * Stores information about an identifier. Used to handle type annotations and
 * indexed identifiers, without supporting such things in the core solver
 */
typedef struct smtlib2_indexed_identifier {
    char *name;
    smtlib2_vector *idx;
    smtlib2_sort tp;
} smtlib2_indexed_identifier;

smtlib2_indexed_identifier *smtlib2_indexed_identifier_new(
    const char *n, smtlib2_vector *i, smtlib2_sort t);
void smtlib2_indexed_identifier_delete(smtlib2_indexed_identifier *i);

smtlib2_term smtlib2_make_term_from_identifier(
    smtlib2_parser_interface *parser,
    smtlib2_indexed_identifier *ident, smtlib2_vector *args);


#line 107 "smtlib2bisonparser.c" /* yacc.c:339  */

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
   by #include "smtlib2bisonparser.h".  */
#ifndef YY_SMTLIB2_PARSER_SMTLIB2BISONPARSER_H_INCLUDED
# define YY_SMTLIB2_PARSER_SMTLIB2BISONPARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int smtlib2_parser_debug;
#endif
/* "%code requires" blocks.  */
#line 63 "smtlib2bisonparser.y" /* yacc.c:355  */


#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif


#line 146 "smtlib2bisonparser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BINCONSTANT = 258,
    HEXCONSTANT = 259,
    BVCONSTANT = 260,
    RATCONSTANT = 261,
    NUMERAL = 262,
    STRING = 263,
    SYMBOL = 264,
    KEYWORD = 265,
    TK_EOF = 266,
    TK_AS = 267,
    TK_UNDERSCORE = 268,
    TK_LET = 269,
    TK_BANG = 270,
    TK_FORALL = 271,
    TK_EXISTS = 272,
    TK_SET_LOGIC = 273,
    TK_DECLARE_SORT = 274,
    TK_DEFINE_SORT = 275,
    TK_DECLARE_FUN = 276,
    TK_DEFINE_FUN = 277,
    TK_PUSH = 278,
    TK_POP = 279,
    TK_ASSERT = 280,
    TK_CHECK_SAT = 281,
    TK_GET_ASSERTIONS = 282,
    TK_GET_UNSAT_CORE = 283,
    TK_GET_PROOF = 284,
    TK_SET_OPTION = 285,
    TK_GET_INFO = 286,
    TK_SET_INFO = 287,
    TK_GET_ASSIGNMENT = 288,
    TK_GET_MODEL = 289,
    TK_GET_VALUE = 290,
    TK_EXIT = 291,
    TK_INTERNAL_PARSE_TERMS = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 83 "smtlib2bisonparser.y" /* yacc.c:355  */

    char *string;
    smtlib2_vector *termlist;
    smtlib2_sort sort;
    smtlib2_vector *sortlist;
    smtlib2_vector *numlist;
    smtlib2_term term;
    void *identifier;
    smtlib2_charbuf *buf;
    char **attribute;
    smtlib2_vector *attributelist;
    smtlib2_vector *stringlist;
    smtlib2_vector *intlist;

#line 211 "smtlib2bisonparser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int smtlib2_parser_parse (yyscan_t scanner, smtlib2_parser_interface *parser);

#endif /* !YY_SMTLIB2_PARSER_SMTLIB2BISONPARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "smtlib2bisonparser.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   234

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   181,   181,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   211,   217,   225,   236,   241,   252,   258,
     271,   276,   286,   295,   305,   312,   319,   326,   333,   341,
     348,   355,   371,   385,   394,   404,   408,   412,   416,   423,
     430,   443,   450,   460,   464,   472,   489,   496,   506,   516,
     520,   526,   537,   539,   548,   553,   563,   568,   573,   579,
     585,   596,   601,   610,   620,   624,   628,   632,   667,   672,
     681,   688,   699,   707,   718,   723,   732,   742,   754,   762,
     763,   767,   776,   778,   789,   794,   803,   808,   814,   824,
     830,   838,   848,   853,   862,   866
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BINCONSTANT", "HEXCONSTANT",
  "BVCONSTANT", "RATCONSTANT", "NUMERAL", "STRING", "SYMBOL", "KEYWORD",
  "TK_EOF", "\"as\"", "\"_\"", "\"let\"", "\"!\"", "\"forall\"",
  "\"exists\"", "\"set-logic\"", "\"declare-sort\"", "\"define-sort\"",
  "\"declare-fun\"", "\"define-fun\"", "\"push\"", "\"pop\"", "\"assert\"",
  "\"check-sat\"", "\"get-assertions\"", "\"get-unsat-core\"",
  "\"get-proof\"", "\"set-option\"", "\"get-info\"", "\"set-info\"",
  "\"get-assignment\"", "\"get-model\"", "\"get-value\"", "\"exit\"",
  "\".internal-parse-terms\"", "'('", "')'", "'['", "']'", "$accept",
  "single_command", "command", "cmd_error", "cmd_set_logic",
  "cmd_declare_sort", "cmd_define_sort", "cmd_declare_fun",
  "cmd_define_fun", "cmd_push", "cmd_pop", "cmd_assert", "cmd_check_sat",
  "cmd_get_assertions", "cmd_get_unsat_core", "cmd_get_proof",
  "cmd_set_option", "cmd_get_info", "cmd_set_info", "info_argument",
  "cmd_get_assignment", "cmd_get_value", "cmd_exit",
  "cmd_internal_parse_terms", "a_term", "annotated_term", "plain_term",
  "term_symbol", "term_unqualified_symbol", "term_num_constant",
  "term_attribute_list", "term_attribute", "attribute_value",
  "attribute_value_list", "num_list", "int_list", "term_list",
  "quant_var_list", "begin_let_scope", "let_bindings", "let_binding",
  "logic_name", "sort_list", "a_sort", "sort_param_list", "a_sort_param",
  "verbatim_term_list", "verbatim_term", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    40,    41,
      91,    93
};
# endif

#define YYPACT_NINF -115

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-115)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,   150,    23,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,     2,    17,    49,    55,    70,    74,
     108,    25,    62,    86,   100,   101,   131,   132,   133,   105,
     109,   110,   112,  -115,   106,   113,   141,   115,   117,   119,
     120,   121,  -115,  -115,  -115,  -115,  -115,   107,   122,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,    83,   123,
     102,  -115,    88,  -115,    25,   144,  -115,   124,     3,     0,
      75,  -115,  -115,    -5,    56,  -115,    25,   146,   151,   116,
      25,   152,  -115,   149,   153,   154,   155,  -115,  -115,  -115,
    -115,  -115,   156,  -115,  -115,    45,  -115,  -115,    61,  -115,
    -115,    11,   157,  -115,  -115,     7,    21,  -115,  -115,    69,
       7,    35,  -115,   145,     7,    92,   178,     7,   189,   190,
     148,   161,   161,   191,    18,   163,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,    79,   164,  -115,   165,  -115,  -115,   166,
       7,  -115,     7,   193,   167,     7,  -115,     7,    25,   198,
       7,   169,   170,  -115,    -4,    98,     9,  -115,    94,    96,
    -115,   201,   172,   163,  -115,  -115,  -115,  -115,  -115,   173,
      38,   206,  -115,   175,   176,   177,     7,    25,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,    25,    25,    25,    25,  -115,
    -115,  -115,  -115,    -2,  -115,  -115,  -115,   179,   180,   181,
     182,   183,   184,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      23,     0,     0,     2,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    92,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    67,    66,    64,     0,     0,    53,
      54,    60,    62,    59,    35,    36,    37,    38,     0,     0,
       0,    49,     0,    51,     0,     0,    24,     0,     0,     0,
       0,    32,    33,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,    43,    46,    45,
      48,    47,     0,   105,    75,     0,    74,   104,     0,   102,
      84,     0,     0,    25,   101,     0,     0,    99,    96,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    39,    42,    41,
      44,    76,    78,     0,     0,   103,     0,    85,    93,     0,
       0,   100,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,    71,     0,     0,
      61,     0,     0,    89,    77,    79,    50,    52,    26,     0,
       0,     0,    28,     0,     0,     0,     0,     0,    63,    70,
      81,    65,    73,    55,    72,     0,     0,     0,     0,    90,
      27,    98,    82,     0,    29,    86,    30,     0,     0,     0,
       0,     0,     0,    83,    97,    87,    31,    57,    58,    91,
      56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,   147,
    -115,  -115,  -115,  -115,   -31,  -115,  -115,   168,   143,  -115,
    -115,    58,  -103,  -115,  -115,  -115,   137,     6,  -115,    57,
    -115,  -115,    76,  -114,  -115,   118,  -115,   125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   106,
      20,    21,    22,    23,   110,    59,    60,    61,    62,    63,
     166,   167,   107,   143,   164,   203,   111,   125,    91,   172,
     173,    45,   121,   122,   116,   117,   108,   109
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      58,   149,   142,   190,    56,   213,   154,   156,     1,   118,
     158,    44,   114,   161,    52,    53,   118,    54,    55,   165,
      56,    52,    53,    43,    54,    55,    46,    56,    52,    53,
     114,    54,    55,   126,    56,   191,   179,   214,   119,   120,
     175,   183,   115,   184,   118,   119,   187,   118,   193,    57,
     146,    98,    99,   100,   101,   130,    57,   170,    47,   104,
     150,   128,   192,    57,    48,   129,   156,    98,    99,   100,
     101,   103,   207,   119,   155,   104,   119,   201,   152,    49,
     147,    50,   153,   105,   141,    98,    99,   100,   101,    93,
      94,    95,    96,   104,    98,    99,   100,   101,   103,   105,
     144,    64,   104,   147,    98,    99,   100,   101,    98,    99,
     100,   101,   104,   123,   124,    51,    56,   105,   174,    83,
      84,    85,    86,    87,    88,    65,   105,   185,    83,   133,
     159,   160,   159,   195,   159,   196,   105,   168,   169,    66,
      67,    68,    69,    70,    71,    89,    75,    72,    77,    73,
      74,   112,    76,    78,   157,    79,   208,    80,   165,    81,
      82,    92,    97,   113,   209,   210,   211,   212,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   131,    40,    41,    42,   136,   132,
     135,   133,   137,   138,   139,   140,   162,   163,   148,   123,
     129,   171,   181,   176,   177,   178,   182,   186,   188,   189,
     197,   198,   200,   202,   204,   205,   206,   102,   215,   216,
     217,   218,   219,   220,   194,    90,   127,   134,   180,     0,
     199,     0,     0,   145,   151
};

static const yytype_int16 yycheck[] =
{
      31,   115,   105,     7,     9,     7,   120,   121,    38,     9,
     124,     9,     9,   127,     3,     4,     9,     6,     7,    10,
       9,     3,     4,     0,     6,     7,     9,     9,     3,     4,
       9,     6,     7,    38,     9,    39,   150,    39,    38,    39,
     143,   155,    39,   157,     9,    38,   160,     9,    39,    38,
      39,     6,     7,     8,     9,    86,    38,    39,     9,    14,
      39,     5,   165,    38,     9,     9,   180,     6,     7,     8,
       9,    10,   186,    38,    39,    14,    38,    39,     9,     9,
     111,     7,    13,    38,    39,     6,     7,     8,     9,     6,
       7,     8,     9,    14,     6,     7,     8,     9,    10,    38,
      39,    39,    14,   134,     6,     7,     8,     9,     6,     7,
       8,     9,    14,    38,    39,     7,     9,    38,    39,    12,
      13,    14,    15,    16,    17,    39,    38,   158,    12,    13,
      38,    39,    38,    39,    38,    39,    38,   131,   132,    39,
      39,    10,    10,    10,    39,    38,    40,    38,     7,    39,
      38,     7,    39,    38,     9,    38,   187,    38,    10,    39,
      39,    39,    39,    39,   195,   196,   197,   198,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    38,    35,    36,    37,    39,    38,
      38,    13,    39,    39,    39,    39,     7,     7,    41,    38,
       9,    38,     9,    39,    39,    39,    39,     9,    39,    39,
       9,    39,    39,     7,    39,    39,    39,    70,    39,    39,
      39,    39,    39,    39,   166,    57,    83,    90,   152,    -1,
     173,    -1,    -1,   108,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      62,    63,    64,    65,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      35,    36,    37,     0,     9,    83,     9,     9,     9,     9,
       7,     7,     3,     4,     6,     7,     9,    38,    66,    67,
      68,    69,    70,    71,    39,    39,    39,    39,    10,    10,
      10,    39,    38,    39,    38,    40,    39,     7,    38,    38,
      38,    39,    39,    12,    13,    14,    15,    16,    17,    38,
      69,    80,    39,     6,     7,     8,     9,    39,     6,     7,
       8,     9,    61,    10,    14,    38,    61,    74,    88,    89,
      66,    78,     7,    39,     9,    39,    86,    87,     9,    38,
      39,    84,    85,    38,    39,    79,    38,    70,     5,     9,
      66,    38,    38,    13,    78,    38,    39,    39,    39,    39,
      39,    39,    74,    75,    39,    89,    39,    66,    41,    85,
      39,    87,     9,    13,    85,    39,    85,     9,    85,    38,
      39,    85,     7,     7,    76,    10,    72,    73,    79,    79,
      39,    38,    81,    82,    39,    74,    39,    39,    39,    85,
      84,     9,    39,    85,    85,    66,     9,    85,    39,    39,
       7,    39,    74,    39,    73,    39,    39,     9,    39,    81,
      39,    39,     7,    77,    39,    39,    39,    85,    66,    66,
      66,    66,    66,     7,    39,    39,    39,    39,    39,    39,
      39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    45,    46,    47,    48,    48,    49,    49,
      50,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      58,    58,    58,    59,    60,    61,    61,    61,    61,    62,
      63,    64,    65,    66,    66,    67,    68,    68,    68,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      71,    72,    72,    73,    74,    74,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    81,
      81,    82,    83,    83,    84,    84,    85,    85,    85,    86,
      86,    87,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     5,     7,     8,     7,     8,
       8,     9,     4,     4,     4,     3,     3,     3,     3,     5,
       5,     5,     5,     4,     5,     1,     1,     1,     1,     3,
       6,     3,     6,     1,     1,     5,     7,     7,     7,     1,
       1,     4,     1,     5,     1,     5,     1,     1,     1,     1,
       5,     1,     2,     2,     1,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     4,     5,     1,     1,
       2,     4,     1,     4,     1,     2,     1,     5,     4,     1,
       2,     1,     1,     2,     1,     1
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
      yyerror (&yylloc, scanner, parser, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, smtlib2_parser_interface *parser)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (parser);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, smtlib2_parser_interface *parser)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, parser);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, smtlib2_parser_interface *parser)
{
  unsigned long int yylno = yyrline[yyrule];
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, parser); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, smtlib2_parser_interface *parser)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* BINCONSTANT  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1304 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 4: /* HEXCONSTANT  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1310 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 6: /* RATCONSTANT  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1316 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 7: /* NUMERAL  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1322 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 8: /* STRING  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1328 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 9: /* SYMBOL  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1334 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 10: /* KEYWORD  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1340 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 69: /* term_symbol  */
#line 172 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_indexed_identifier_delete((smtlib2_indexed_identifier *)((*yyvaluep).identifier)); }
#line 1346 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 70: /* term_unqualified_symbol  */
#line 173 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_indexed_identifier_delete((smtlib2_indexed_identifier *)((*yyvaluep).identifier)); }
#line 1352 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 72: /* term_attribute_list  */
#line 174 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_vector_delete(((*yyvaluep).attributelist)); }
#line 1358 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 73: /* term_attribute  */
#line 175 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).attribute)[0]); free(((*yyvaluep).attribute)[1]); free(((*yyvaluep).attribute)); }
#line 1364 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 76: /* num_list  */
#line 171 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_vector_delete(((*yyvaluep).numlist)); }
#line 1370 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 77: /* int_list  */
#line 171 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_vector_delete(((*yyvaluep).intlist)); }
#line 1376 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 78: /* term_list  */
#line 167 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_vector_delete(((*yyvaluep).termlist)); }
#line 1382 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 79: /* quant_var_list  */
#line 170 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_vector_delete(((*yyvaluep).termlist)); }
#line 1388 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 83: /* logic_name  */
#line 165 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1394 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 84: /* sort_list  */
#line 168 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_vector_delete(((*yyvaluep).sortlist)); }
#line 1400 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;

    case 86: /* sort_param_list  */
#line 169 "smtlib2bisonparser.y" /* yacc.c:1257  */
      { smtlib2_vector_delete(((*yyvaluep).sortlist)); }
#line 1406 "smtlib2bisonparser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, smtlib2_parser_interface *parser)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 182 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      YYACCEPT;
  }
#line 1702 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      YYERROR;
  }
#line 1710 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 218 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->set_logic(parser, (yyvsp[-1].string));
      free((yyvsp[-1].string));
  }
#line 1719 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 226 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      int n = atoi((yyvsp[-1].string));
      parser->declare_sort(parser, (yyvsp[-2].string), n);
      free((yyvsp[-1].string));
      free((yyvsp[-2].string));
  }
#line 1730 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 237 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->define_sort(parser, (yyvsp[-4].string), NULL, (yyvsp[-1].sort));
      free((yyvsp[-4].string));
  }
#line 1739 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 242 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->define_sort(parser, (yyvsp[-5].string), (yyvsp[-3].sortlist), (yyvsp[-1].sort));
      parser->pop_sort_param_scope(parser);
      smtlib2_vector_delete((yyvsp[-3].sortlist));
      free((yyvsp[-5].string));
  }
#line 1750 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 253 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      smtlib2_sort tp = (yyvsp[-1].sort);
      parser->declare_function(parser, (yyvsp[-4].string), tp);
      free((yyvsp[-4].string));
  }
#line 1760 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 259 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      smtlib2_sort tp = (yyvsp[-1].sort);
      assert(smtlib2_vector_size((yyvsp[-3].sortlist)) > 0);
      smtlib2_vector_push((yyvsp[-3].sortlist), (intptr_t)tp);
      tp = parser->make_function_sort(parser, (yyvsp[-3].sortlist));
      parser->declare_function(parser, (yyvsp[-5].string), tp);
      free((yyvsp[-5].string));
      smtlib2_vector_delete((yyvsp[-3].sortlist));
  }
#line 1774 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 272 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->define_function(parser, (yyvsp[-5].string), NULL, (yyvsp[-2].sort), (yyvsp[-1].term));
      free((yyvsp[-5].string));
  }
#line 1783 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 277 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->define_function(parser, (yyvsp[-6].string), (yyvsp[-4].termlist), (yyvsp[-2].sort), (yyvsp[-1].term));
      parser->pop_quantifier_scope(parser);
      free((yyvsp[-6].string));
      smtlib2_vector_delete((yyvsp[-4].termlist));
  }
#line 1794 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 287 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      int n = atoi((yyvsp[-1].string));
      free((yyvsp[-1].string));
      parser->push(parser, n);
  }
#line 1804 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 296 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      int n = atoi((yyvsp[-1].string));
      free((yyvsp[-1].string));
      parser->pop(parser, n);
  }
#line 1814 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 306 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->assert_formula(parser, (yyvsp[-1].term));
  }
#line 1822 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 313 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->check_sat(parser);
  }
#line 1830 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 320 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->get_assertions(parser);
  }
#line 1838 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 327 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->get_unsat_core(parser);
  }
#line 1846 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 334 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->get_proof(parser);
  }
#line 1854 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 342 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      int n = atoi((yyvsp[-1].string));
      parser->set_int_option(parser, (yyvsp[-2].string), n);
      free((yyvsp[-1].string));
      free((yyvsp[-2].string));
  }
#line 1865 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 349 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      double n = atof((yyvsp[-1].string));
      parser->set_rat_option(parser, (yyvsp[-2].string), n);
      free((yyvsp[-1].string));
      free((yyvsp[-2].string));
  }
#line 1876 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 356 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      if (strcmp((yyvsp[-1].string), "true") == 0) {
          parser->set_int_option(parser, (yyvsp[-2].string), 1);
      } else if (strcmp((yyvsp[-1].string), "false") == 0) {
          parser->set_int_option(parser, (yyvsp[-2].string), 0);
      } else if (strcmp((yyvsp[-1].string), "none") == 0) {
          parser->set_rat_option(parser, (yyvsp[-2].string), 0);
      } else {
          free((yyvsp[-1].string));
          free((yyvsp[-2].string));
          YYERROR;
      }
      free((yyvsp[-1].string));
      free((yyvsp[-2].string));
  }
#line 1896 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 372 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      /* remove the quoting from $4 */
      char *s = (yyvsp[-1].string);
      assert(strlen(s) >= 2);
      s[strlen(s)-1] = 0;
      parser->set_str_option(parser, (yyvsp[-2].string), s+1);
      // parser->set_str_option(parser, $3, $4);
      free((yyvsp[-1].string));
      free((yyvsp[-2].string));
  }
#line 1911 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 386 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->get_info(parser, (yyvsp[-1].string));
      free((yyvsp[-1].string));
  }
#line 1920 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 395 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->set_info(parser, (yyvsp[-2].string), (yyvsp[-1].string));
      free((yyvsp[-1].string));
      free((yyvsp[-2].string));
  }
#line 1930 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 405 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (yyvsp[0].string);
  }
#line 1938 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 409 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (yyvsp[0].string);
  }
#line 1946 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 413 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (yyvsp[0].string);
  }
#line 1954 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 417 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (yyvsp[0].string);
  }
#line 1962 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 424 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->get_assignment(parser);
  }
#line 1970 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 431 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      size_t i;
      parser->get_value(parser, (yyvsp[-2].stringlist));
      for (i = 0; i < smtlib2_vector_size((yyvsp[-2].stringlist)); ++i) {
          char *s = (char *)smtlib2_vector_at((yyvsp[-2].stringlist), i);
          free(s);
      }
      smtlib2_vector_delete((yyvsp[-2].stringlist));
  }
#line 1984 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 444 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->exit(parser);
  }
#line 1992 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 451 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->set_internal_parsed_terms(parser, (yyvsp[-2].termlist));
      smtlib2_vector_delete((yyvsp[-2].termlist));
  }
#line 2001 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 461 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.term) = (yyvsp[0].term);
  }
#line 2009 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 465 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.term) = (yyvsp[0].term);
  }
#line 2017 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 473 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      size_t i;
      (yyval.term) = (yyvsp[-2].term);
      parser->annotate_term(parser, (yyval.term), (yyvsp[-1].attributelist));
      for (i = 0; i < smtlib2_vector_size((yyvsp[-1].attributelist)); ++i) {
          char **pair = (char **)smtlib2_vector_at((yyvsp[-1].attributelist), i);
          free(pair[0]);
          free(pair[1]);
          free(pair);
      }
      smtlib2_vector_delete((yyvsp[-1].attributelist));
  }
#line 2034 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 490 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.term) = parser->pop_let_scope(parser);
      if (! (yyval.term)) {
          (yyval.term) = (yyvsp[-1].term);
      }
  }
#line 2045 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 497 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      smtlib2_term tmp;
      (yyval.term) = parser->make_forall_term(parser, (yyvsp[-1].term));
      tmp = parser->pop_quantifier_scope(parser);
      if (tmp) {
          (yyval.term) = tmp;
      }
      smtlib2_vector_delete((yyvsp[-3].termlist));
  }
#line 2059 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 507 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      smtlib2_term tmp;
      (yyval.term) = parser->make_exists_term(parser, (yyvsp[-1].term));
      tmp = parser->pop_quantifier_scope(parser);
      if (tmp) {
          (yyval.term) = tmp;
      }
      smtlib2_vector_delete((yyvsp[-3].termlist));
  }
#line 2073 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 517 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.term) = (yyvsp[0].term);
  }
#line 2081 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 521 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      smtlib2_indexed_identifier *id = (smtlib2_indexed_identifier *)(yyvsp[0].identifier);
      (yyval.term) = smtlib2_make_term_from_identifier(parser, id, NULL);
      smtlib2_indexed_identifier_delete(id);
  }
#line 2091 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 527 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      smtlib2_indexed_identifier *id = (smtlib2_indexed_identifier *)(yyvsp[-2].identifier);
      (yyval.term) = smtlib2_make_term_from_identifier(parser, id, (yyvsp[-1].termlist));
      smtlib2_indexed_identifier_delete(id);
      smtlib2_vector_delete((yyvsp[-1].termlist));
  }
#line 2102 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 538 "smtlib2bisonparser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 2108 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 540 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.identifier) = (yyvsp[-2].identifier);
      ((smtlib2_indexed_identifier *)(yyval.identifier))->tp = (yyvsp[-1].sort);
  }
#line 2117 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 549 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.identifier) = smtlib2_indexed_identifier_new((yyvsp[0].string), NULL, NULL);
      free((yyvsp[0].string));
  }
#line 2126 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 554 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.identifier) = smtlib2_indexed_identifier_new((yyvsp[-2].string), (yyvsp[-1].numlist), NULL);
      free((yyvsp[-2].string));
      /* $$ takes ownership of $4, so we don't delete it here */
  }
#line 2136 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 564 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.term) = parser->make_number_term(parser, (yyvsp[0].string), 0, 10);
      free((yyvsp[0].string));
  }
#line 2145 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 569 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.term) = parser->make_number_term(parser, (yyvsp[0].string), 0, 10);
      free((yyvsp[0].string));
  }
#line 2154 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 574 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      const char *s = (yyvsp[0].string) + 2; /* skip the "#b" prefix */
      (yyval.term) = parser->make_number_term(parser, s, strlen(s), 2);
      free((yyvsp[0].string));
  }
#line 2164 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 580 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      const char *s = (yyvsp[0].string) + 2; /* skip the "#x" prefix */
      (yyval.term) = parser->make_number_term(parser, s, 4 * strlen(s), 16);
      free((yyvsp[0].string));
  }
#line 2174 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 586 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      const char *s = (yyvsp[-2].string) + 2; /* skip the "bv" prefix */
      (yyval.term) = parser->make_number_term(parser, s, atoi((yyvsp[-1].string)), 10);
      free((yyvsp[-1].string));
      free((yyvsp[-2].string));
  }
#line 2185 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 597 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.attributelist) = smtlib2_vector_new();
      smtlib2_vector_push((yyval.attributelist), (intptr_t)(yyvsp[0].attribute));
  }
#line 2194 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 602 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.attributelist) = (yyvsp[-1].attributelist);
      smtlib2_vector_push((yyval.attributelist), (intptr_t)(yyvsp[0].attribute));
  }
#line 2203 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 611 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.attribute) = (char **)malloc(sizeof(char *) * 2);
      (yyval.attribute)[0] = (yyvsp[-1].string);
      (yyval.attribute)[1] = (yyvsp[0].string);
  }
#line 2213 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 621 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (yyvsp[0].string);
  }
#line 2221 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 625 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = smtlib2_strdup("let");
  }
#line 2229 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 629 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = smtlib2_strdup("()");
  }
#line 2237 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 633 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      size_t howmany = 0;
      size_t i;
      char *s;
      
      for (i = 0; i < smtlib2_vector_size((yyvsp[-1].stringlist)); ++i) {
          howmany += strlen((char *)smtlib2_vector_at((yyvsp[-1].stringlist), i));
      }
      howmany += 2 /* '(' and ')' */ +
          (smtlib2_vector_size((yyvsp[-1].stringlist))-1) /* ' 's */ + 1; /* '\0' */
      (yyval.string) = (char *)malloc(sizeof(char) * howmany);

      /* concatenate everything together */
      s = (yyval.string);
      s[0] = '(';
      ++s;
      for (i = 0; i < smtlib2_vector_size((yyvsp[-1].stringlist)); ++i) {
          char *s2 = (char *)smtlib2_vector_at((yyvsp[-1].stringlist), i);
          char *s3 = s2;
          while (*s2) {
              *s++ = *s2++;
          }
          *s++ = ' ';
          free(s3);
      }
      *(s-1) = ')';
      *s = '\0';
      
      smtlib2_vector_delete((yyvsp[-1].stringlist));
  }
#line 2272 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 668 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.stringlist) = smtlib2_vector_new();
      smtlib2_vector_push((yyval.stringlist), (intptr_t)(yyvsp[0].string));
  }
#line 2281 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 673 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.stringlist) = (yyvsp[-1].stringlist);
      smtlib2_vector_push((yyval.stringlist), (intptr_t)(yyvsp[0].string));
  }
#line 2290 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 682 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.numlist) = smtlib2_vector_new();
      int n = atoi((yyvsp[0].string));
      smtlib2_vector_push((yyval.numlist), n);
      free((yyvsp[0].string));
  }
#line 2301 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 689 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      int n = atoi((yyvsp[0].string));
      smtlib2_vector_push((yyvsp[-1].numlist), n);
      (yyval.numlist) = (yyvsp[-1].numlist);
      free((yyvsp[0].string));
  }
#line 2312 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 700 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      int n;
      (yyval.intlist) = smtlib2_vector_new();
      n = atoi((yyvsp[0].string));
      smtlib2_vector_push((yyval.intlist), n);
      free((yyvsp[0].string));
  }
#line 2324 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 708 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      int n = atoi((yyvsp[0].string));
      smtlib2_vector_push((yyvsp[-1].intlist), n);
      (yyval.intlist) = (yyvsp[-1].intlist);
      free((yyvsp[0].string));
  }
#line 2335 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 719 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.termlist) = smtlib2_vector_new();
      smtlib2_vector_push((yyval.termlist), (intptr_t)(yyvsp[0].term));
  }
#line 2344 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 724 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      smtlib2_vector_push((yyvsp[-1].termlist), (intptr_t)(yyvsp[0].term));
      (yyval.termlist) = (yyvsp[-1].termlist);
  }
#line 2353 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 733 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      intptr_t t;
      parser->push_quantifier_scope(parser);
      (yyval.termlist) = smtlib2_vector_new();
      parser->declare_variable(parser, (yyvsp[-2].string), (yyvsp[-1].sort));
      t = (intptr_t)parser->make_term(parser, (yyvsp[-2].string), (yyvsp[-1].sort), NULL, NULL);
      smtlib2_vector_push((yyval.termlist), t);
      free((yyvsp[-2].string));
  }
#line 2367 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 743 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      intptr_t t;
      parser->declare_variable(parser, (yyvsp[-2].string), (yyvsp[-1].sort));
      t = (intptr_t)parser->make_term(parser, (yyvsp[-2].string), (yyvsp[-1].sort), NULL, NULL);
      smtlib2_vector_push((yyvsp[-4].termlist), t);
      free((yyvsp[-2].string));
      (yyval.termlist) = (yyvsp[-4].termlist);
  }
#line 2380 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 755 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->push_let_scope(parser);
  }
#line 2388 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 762 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {}
#line 2394 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 763 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {}
#line 2400 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 768 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->define_let_binding(parser, (yyvsp[-2].string), (yyvsp[-1].term));
      free((yyvsp[-2].string));
  }
#line 2409 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 777 "smtlib2bisonparser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2415 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 779 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (char *)(malloc(strlen((yyvsp[-3].string)) + strlen((yyvsp[-1].string)) + 2 + 1));
      sprintf((yyval.string), "%s[%s]", (yyvsp[-3].string), (yyvsp[-1].string));
      free((yyvsp[-3].string));
      free((yyvsp[-1].string));
  }
#line 2426 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 790 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.sortlist) = smtlib2_vector_new();
      smtlib2_vector_push((yyval.sortlist), (intptr_t)(yyvsp[0].sort));
  }
#line 2435 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 795 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.sortlist) = (yyvsp[-1].sortlist);
      smtlib2_vector_push((yyval.sortlist), (intptr_t)(yyvsp[0].sort));
  }
#line 2444 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 804 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.sort) = parser->make_sort(parser, (yyvsp[0].string), NULL);
      free((yyvsp[0].string));
  }
#line 2453 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 809 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.sort) = parser->make_sort(parser, (yyvsp[-2].string), (yyvsp[-1].intlist));
      smtlib2_vector_delete((yyvsp[-1].intlist));
      free((yyvsp[-2].string));
  }
#line 2463 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 815 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.sort) = parser->make_parametric_sort(parser, (yyvsp[-2].string), (yyvsp[-1].sortlist));
      smtlib2_vector_delete((yyvsp[-1].sortlist));
      free((yyvsp[-2].string));
  }
#line 2473 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 825 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->push_sort_param_scope(parser);
      (yyval.sortlist) = smtlib2_vector_new();
      smtlib2_vector_push((yyval.sortlist), (intptr_t)(yyvsp[0].sort));
  }
#line 2483 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 831 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.sortlist) = (yyvsp[-1].sortlist);
      smtlib2_vector_push((yyval.sortlist), (intptr_t)(yyvsp[0].sort));
  }
#line 2492 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 839 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      parser->declare_sort(parser, (yyvsp[0].string), 0);
      (yyval.sort) = parser->make_sort(parser, (yyvsp[0].string), NULL);
      free((yyvsp[0].string));
  }
#line 2502 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 849 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.stringlist) = smtlib2_vector_new();
      smtlib2_vector_push((yyval.stringlist), (intptr_t)(yyvsp[0].string));
  }
#line 2511 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 854 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.stringlist) = (yyvsp[-1].stringlist);
      smtlib2_vector_push((yyval.stringlist), (intptr_t)(yyvsp[0].string));
  }
#line 2520 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 863 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (yyvsp[0].string);
  }
#line 2528 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 867 "smtlib2bisonparser.y" /* yacc.c:1646  */
    {
      (yyval.string) = (yyvsp[0].string);
  }
#line 2536 "smtlib2bisonparser.c" /* yacc.c:1646  */
    break;


#line 2540 "smtlib2bisonparser.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, scanner, parser, YY_("syntax error"));
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
        yyerror (&yylloc, scanner, parser, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, scanner, parser);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, scanner, parser, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, parser);
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
#line 873 "smtlib2bisonparser.y" /* yacc.c:1906  */



smtlib2_indexed_identifier *smtlib2_indexed_identifier_new(
    const char *n, smtlib2_vector *i, smtlib2_sort t)
{
    smtlib2_indexed_identifier *ret = (smtlib2_indexed_identifier *)malloc(
        sizeof(smtlib2_indexed_identifier));
    ret->name = smtlib2_strdup(n);
    ret->idx = i;
    ret->tp = t;

    return ret;
}


void smtlib2_indexed_identifier_delete(smtlib2_indexed_identifier *i)
{
    free(i->name);
    free(i);
}


smtlib2_term smtlib2_make_term_from_identifier(
    smtlib2_parser_interface *parser,
    smtlib2_indexed_identifier *ident, smtlib2_vector *args)
{
    return parser->make_term(parser, ident->name, ident->tp, ident->idx, args);
}


void smtlib2_parser_error(YYLTYPE *yylloc, yyscan_t scanner,
                          smtlib2_parser_interface *parser,
                          const char *s)
{
    parser->handle_error(parser, s);
}
