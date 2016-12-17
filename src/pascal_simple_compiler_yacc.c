/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "pascal_simple_compiler.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pascal_simple_compiler_lex.h"
#include "pascal_simple_compiler_yacc.h"
#include "pascal_handle_semantics.h"
#include "pascal_handle_symbol_table.h"
#include "pascal_handle_quaternion.h"
#include "pascal_handle_syntax_tree.h"
#include "pascal_debug_program.h"

#define YYERROR_VERBOSE

extern int g_quaternion_index;
extern int g_temp_count;
extern int g_true_or_false;
extern int g_true_or_false_if;
extern int g_true_or_false_while;

int yyerror(const char *string);

/* Line 371 of yacc.c  */
#line 91 "pascal_simple_compiler_yacc.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "pascal_simple_compiler_yacc.h".  */
#ifndef YY_YY_PASCAL_SIMPLE_COMPILER_YACC_H_INCLUDED
# define YY_YY_PASCAL_SIMPLE_COMPILER_YACC_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     NUMBER_INTEGER = 259,
     NUMBER_REAL = 260,
     PROGRAM = 261,
     ERROR_STRING = 262,
     SEMICOLON = 263,
     COMMA = 264,
     COLON = 265,
     DOT = 266,
     VAR = 267,
     INTEGER = 268,
     REAL = 269,
     STATEMENT_BEGIN = 270,
     STATEMENT_END = 271,
     ASSIGN = 272,
     IF = 273,
     ELSE = 274,
     THEN = 275,
     WHILE = 276,
     DO = 277,
     ADD = 278,
     SUB = 279,
     MUL = 280,
     DIV = 281,
     LP = 282,
     RP = 283,
     AND = 284,
     OR = 285,
     NOT = 286,
     LT = 287,
     GT = 288,
     LE = 289,
     GE = 290,
     EQ = 291,
     NE = 292,
     UMINUS = 293
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 24 "pascal_simple_compiler.y"

    int                     type;
    char                    *string;
    struct Statement        *statement;
    struct WhileStatement   *while_statement;
    struct BoolExpression   *bool_expression;
    struct Expression       *expression;
    struct VariableList     *variable_list;
    struct Variable         *variable;
    struct Constant         *constant;
    struct RelationOperator *relation_operator;


/* Line 387 of yacc.c  */
#line 186 "pascal_simple_compiler_yacc.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PASCAL_SIMPLE_COMPILER_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 214 "pascal_simple_compiler_yacc.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   106

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  88

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    39,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    12,    16,    20,    22,    26,    28,
      30,    34,    36,    39,    41,    44,    46,    49,    52,    55,
      57,    58,    62,    66,    70,    74,    78,    80,    84,    88,
      92,    96,   100,   103,   105,   107,   111,   114,   117,   120,
     124,   127,   130,   132,   134,   136,   138,   140,   142,   144,
     146
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,     6,     3,     8,    42,    11,    -1,    43,
      51,    -1,    12,    44,     8,    -1,    44,     8,    45,    -1,
      45,    -1,    47,    10,    46,    -1,    13,    -1,    14,    -1,
      47,     9,    61,    -1,    61,    -1,    49,    50,    -1,    50,
      -1,    48,     8,    -1,    52,    -1,    53,    50,    -1,    54,
      50,    -1,    55,    50,    -1,    51,    -1,    -1,    15,    49,
      16,    -1,    61,    17,    57,    -1,    54,    50,    19,    -1,
      18,    58,    20,    -1,    56,    58,    22,    -1,    21,    -1,
      57,    23,    57,    -1,    57,    24,    57,    -1,    57,    25,
      57,    -1,    57,    26,    57,    -1,    27,    57,    28,    -1,
      39,    57,    -1,    61,    -1,    62,    -1,    57,    63,    57,
      -1,    59,    58,    -1,    60,    58,    -1,    31,    58,    -1,
      27,    58,    28,    -1,    58,    29,    -1,    58,    30,    -1,
       3,    -1,     4,    -1,     5,    -1,    32,    -1,    33,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   121,   131,   137,   146,   155,   181,   184,
     188,   209,   220,   226,   235,   243,   248,   256,   264,   274,
     279,   283,   289,   316,   328,   340,   353,   360,   364,   368,
     372,   376,   379,   411,   429,   439,   466,   475,   484,   494,
     502,   513,   524,   564,   575,   587,   593,   599,   605,   611,
     617
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NUMBER_INTEGER",
  "NUMBER_REAL", "PROGRAM", "ERROR_STRING", "SEMICOLON", "COMMA", "COLON",
  "DOT", "VAR", "INTEGER", "REAL", "STATEMENT_BEGIN", "STATEMENT_END",
  "ASSIGN", "IF", "ELSE", "THEN", "WHILE", "DO", "ADD", "SUB", "MUL",
  "DIV", "LP", "RP", "AND", "OR", "NOT", "LT", "GT", "LE", "GE", "EQ",
  "NE", "UMINUS", "'-'", "$accept", "ProgramDefinition", "SubProgram",
  "VariableDefinition", "VariableDefinitionList",
  "VariableDefinitionStatement", "Type", "VariableList", "StatementList",
  "StatementSemicoln", "Statement", "CompoundStatement",
  "AssignmentStatement", "IfStatementElse", "IfBoolExpressionThen",
  "WhileBoolExpressionDo", "While", "Expression", "BoolExpression",
  "BoolExpressionAnd", "BoolExpressionOR", "Variable", "Constant",
  "RelationOperator", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    43,    44,    44,    45,    46,    46,
      47,    47,    48,    48,    49,    50,    50,    50,    50,    50,
      50,    51,    52,    53,    54,    55,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    58,    58,    58,
      59,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     3,     3,     1,     3,     1,     1,
       3,     1,     2,     1,     2,     1,     2,     2,     2,     1,
       0,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     2,     2,     2,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,    42,
       0,     6,     0,    11,     2,    20,     3,     4,     0,     0,
       0,    26,     0,    20,    13,    19,    15,    20,    20,    20,
       0,     0,     5,    10,     8,     9,     7,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    14,    21,
      12,    16,    17,    18,     0,     0,     0,     0,    38,     0,
      32,     0,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    24,    40,    41,    36,    37,    23,    25,    22,
      31,    39,     0,    27,    28,    29,    30,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    10,    11,    36,    12,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    42,    43,    44,
      45,    46,    47,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -31
static const yytype_int8 yypact[] =
{
       1,     7,    19,    22,   -31,    34,    56,    45,    50,   -31,
      61,   -31,    13,   -31,   -31,    39,   -31,    56,    56,    31,
      -3,   -31,    86,    37,   -31,   -31,   -31,    39,    39,    39,
      -3,    78,   -31,   -31,   -31,   -31,   -31,   -31,   -31,    -3,
      -3,     0,    53,   -12,    -3,    -3,   -31,   -31,   -31,   -31,
     -31,   -31,    85,   -31,    62,     0,    38,   -16,   -31,     0,
     -31,     0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,    21,    21,   -31,   -31,    57,
     -31,   -31,    77,    42,    42,   -31,   -31,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -31,   -31,   -31,    79,   -31,   -31,   -31,   -31,
      70,    98,   -31,   -31,   -31,   -31,   -31,   -30,   -24,   -31,
     -31,    20,   -31,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       9,    37,    38,     9,    37,    38,    54,     1,    72,    56,
       3,    60,    81,    73,    74,    57,    58,    73,    74,     4,
      75,    76,    18,    19,    39,    79,    13,    59,    40,    82,
       5,    83,    84,    85,    86,    31,    41,    13,    33,    41,
       9,    87,     9,    31,    34,    35,     6,    31,    31,    31,
      73,    74,    15,    49,    15,    20,    14,    20,    21,     9,
      21,    61,    62,    63,    64,    15,    80,    63,    64,    17,
      65,    66,    67,    68,    69,    70,    61,    62,    63,    64,
      61,    62,    63,    64,    78,    65,    66,    67,    68,    69,
      70,    73,    74,    50,    48,    55,    32,    51,    52,    53,
      61,    62,    63,    64,    77,    80,    16
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-31)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
       3,     4,     5,     3,     4,     5,    30,     6,    20,    39,
       3,    41,    28,    29,    30,    39,    40,    29,    30,     0,
      44,    45,     9,    10,    27,    55,     6,    27,    31,    59,
       8,    61,    62,    63,    64,    15,    39,    17,    18,    39,
       3,    71,     3,    23,    13,    14,    12,    27,    28,    29,
      29,    30,    15,    16,    15,    18,    11,    18,    21,     3,
      21,    23,    24,    25,    26,    15,    28,    25,    26,     8,
      32,    33,    34,    35,    36,    37,    23,    24,    25,    26,
      23,    24,    25,    26,    22,    32,    33,    34,    35,    36,
      37,    29,    30,    23,     8,    17,    17,    27,    28,    29,
      23,    24,    25,    26,    19,    28,     8
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    41,     3,     0,     8,    12,    42,    43,     3,
      44,    45,    47,    61,    11,    15,    51,     8,     9,    10,
      18,    21,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    61,    45,    61,    13,    14,    46,     4,     5,    27,
      31,    39,    57,    58,    59,    60,    61,    62,     8,    16,
      50,    50,    50,    50,    58,    17,    57,    58,    58,    27,
      57,    23,    24,    25,    26,    32,    33,    34,    35,    36,
      37,    63,    20,    29,    30,    58,    58,    19,    22,    57,
      28,    28,    57,    57,    57,    57,    57,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 109 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(4) - (5)].statement)->chain;
        (yyval.statement)->ast_node = (yyvsp[(4) - (5)].statement)->ast_node;
        printInformation();
        printAbstractSyntaxTreeInformation(*((yyval.statement)->ast_node));
        printf("Pascal program is identified successfully!!!\n");
        deleteConstantNode();
        deleteVariableNode();
        deleteSyntaxTreeNode();
    }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 121 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = 0;
        (yyval.statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.statement)->ast_node);
        setSyntaxTreeNode(*((yyval.statement)->ast_node), NODE_PROGRAM, "program");
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(1) - (2)].statement)->ast_node));
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(2) - (2)].statement)->ast_node));
    }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 131 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(2) - (3)].statement)->chain;
        (yyval.statement)->ast_node = (yyvsp[(2) - (3)].statement)->ast_node;
    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 137 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = 0;
        (yyval.statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.statement)->ast_node);
        setSyntaxTreeNode(*((yyval.statement)->ast_node), NODE_DEFINITION, "definition");
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(1) - (3)].statement)->ast_node));
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(3) - (3)].statement)->ast_node));
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 146 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(1) - (1)].statement)->chain;
        (yyval.statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.statement)->ast_node);
        setSyntaxTreeNode(*((yyval.statement)->ast_node), NODE_DEFINITION, "definition");
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(1) - (1)].statement)->ast_node));
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 155 "pascal_simple_compiler.y"
    {
        char *type;
        struct SyntaxTreeNode **ast_type_node;
        ast_type_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode(ast_type_node);

        if ((yyvsp[(3) - (3)].type) == TYPE_INTEGER) {
            type = "integer";
        }
        else if ((yyvsp[(3) - (3)].type) ==  TYPE_REAL) {
            type = "real";
        }

        setSyntaxTreeNode(*ast_type_node, NODE_TYPE, type);

        backpatchVariableNodeChain((yyvsp[(1) - (3)].variable_list)->chain, (yyvsp[(3) - (3)].type));
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(1) - (3)].variable_list)->chain;
        (yyval.statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.statement)->ast_node);
        setSyntaxTreeNode(*((yyval.statement)->ast_node), NODE_COLON, ":");
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(1) - (3)].variable_list)->ast_node));
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *ast_type_node);
        printDebugVariableInformation();
    }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 181 "pascal_simple_compiler.y"
    {
        (yyval.type) = TYPE_INTEGER;
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 184 "pascal_simple_compiler.y"
    {
        (yyval.type) = TYPE_REAL;
    }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 188 "pascal_simple_compiler.y"
    {
        if (getVariableNodeDefine((yyvsp[(3) - (3)].variable)->index_symbol) == TRUE) {
            if (judgeVariableNodeExist((yyvsp[(3) - (3)].variable)->name)) {
                printf("\nError, variable is defined rpeatedly!\n");
                exit(EXIT_FAILURE);
            }
        }
        else if (getVariableNodeDefine((yyvsp[(3) - (3)].variable)->index_symbol) == ERROR) {
            printf("\nError, there is not the variable!\n");
            exit(EXIT_FAILURE);
        }

        modifyVariableNodeDefine((yyvsp[(3) - (3)].variable)->index_symbol);

        (yyval.variable_list) = ALLOCATE_STRUCT_MEMORY(VariableList);
        modifyVariableNodeChain((yyvsp[(1) - (3)].variable_list)->chain, (yyvsp[(3) - (3)].variable)->chain);
        (yyval.variable_list)->chain = (yyvsp[(1) - (3)].variable_list)->chain;
        addSyntaxTreeSonNode(*((yyvsp[(1) - (3)].variable_list)->ast_node), *((yyvsp[(3) - (3)].variable)->ast_node));
        (yyval.variable_list)->ast_node = (yyvsp[(1) - (3)].variable_list)->ast_node;
        printDebugVariableInformation();
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 209 "pascal_simple_compiler.y"
    {
        modifyVariableNodeDefine((yyvsp[(1) - (1)].variable)->index_symbol);
        (yyval.variable_list) = ALLOCATE_STRUCT_MEMORY(VariableList);
        (yyval.variable_list)->chain = (yyvsp[(1) - (1)].variable)->chain;
        (yyval.variable_list)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.variable_list)->ast_node);
        setSyntaxTreeNode(*((yyval.variable_list)->ast_node), NODE_VAR, "var");
        addSyntaxTreeSonNode(*((yyval.variable_list)->ast_node), *((yyvsp[(1) - (1)].variable)->ast_node));
        printDebugVariableInformation();
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 220 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(2) - (2)].statement)->chain;
        addSyntaxTreeSonNode(*((yyvsp[(1) - (2)].statement)->ast_node), *((yyvsp[(2) - (2)].statement)->ast_node));
        (yyval.statement)->ast_node = (yyvsp[(1) - (2)].statement)->ast_node;
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 226 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(1) - (1)].statement)->chain;
        (yyval.statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.statement)->ast_node);
        setSyntaxTreeNode(*((yyval.statement)->ast_node), NODE_STATEMENT, "statement");
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(1) - (1)].statement)->ast_node));
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 235 "pascal_simple_compiler.y"
    {
        backpatchQuaternionNodeChain((yyvsp[(1) - (2)].statement)->chain, g_quaternion_index);
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(1) - (2)].statement)->chain;
        (yyval.statement)->ast_node = (yyvsp[(1) - (2)].statement)->ast_node;
        printDebugQuaternionInformation();
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 243 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = 0;
        (yyval.statement)->ast_node = (yyvsp[(1) - (1)].statement)->ast_node;
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 248 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = mergeQuaternionNodeChain((yyvsp[(1) - (2)].statement)->chain, (yyvsp[(2) - (2)].statement)->chain);
        addSyntaxTreeSonNode(*((yyvsp[(1) - (2)].statement)->ast_node), *((yyvsp[(2) - (2)].statement)->ast_node));
        (yyval.statement)->ast_node = (yyvsp[(1) - (2)].statement)->ast_node;
        printDebugQuaternionInformation();
        g_true_or_false_if = TRUE;
    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 256 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = mergeQuaternionNodeChain((yyvsp[(1) - (2)].statement)->chain, (yyvsp[(2) - (2)].statement)->chain);
        addSyntaxTreeSonNode(*((yyvsp[(1) - (2)].statement)->ast_node), *((yyvsp[(2) - (2)].statement)->ast_node));
        (yyval.statement)->ast_node = (yyvsp[(1) - (2)].statement)->ast_node;
        printDebugQuaternionInformation();
        g_true_or_false_if = TRUE;
    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 264 "pascal_simple_compiler.y"
    {
        backpatchQuaternionNodeChain((yyvsp[(2) - (2)].statement)->chain, (yyvsp[(1) - (2)].while_statement)->loop_start);
        generateQuaternionNode(0, 0, (yyvsp[(1) - (2)].while_statement)->loop_start, OPCODE_JMP);
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(1) - (2)].while_statement)->chain;
        addSyntaxTreeSonNode(*((yyvsp[(1) - (2)].while_statement)->ast_node), *((yyvsp[(2) - (2)].statement)->ast_node));
        (yyval.statement)->ast_node = (yyvsp[(1) - (2)].while_statement)->ast_node;
        printDebugQuaternionInformation();
        g_true_or_false_while = TRUE;
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 274 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(1) - (1)].statement)->chain;
        (yyval.statement)->ast_node = (yyvsp[(1) - (1)].statement)->ast_node;
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 279 "pascal_simple_compiler.y"
    {
        printf("");
    }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 283 "pascal_simple_compiler.y"
    {
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(2) - (3)].statement)->chain;
        (yyval.statement)->ast_node = (yyvsp[(2) - (3)].statement)->ast_node;
    }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 289 "pascal_simple_compiler.y"
    {
        if (g_true_or_false_while && g_true_or_false_if) {
            modifyVariableNodeValue((yyvsp[(1) - (3)].variable)->index_symbol, (yyvsp[(3) - (3)].expression)->value);
            generateQuaternionNode((yyvsp[(3) - (3)].expression)->index_symbol, 0, (yyvsp[(1) - (3)].variable)->index_symbol,
                                   OPCODE_ASSIGN);
        }
        else {
            generateQuaternionNode((yyvsp[(3) - (3)].expression)->index_symbol, 0, 0, OPCODE_ASSIGN);
        }
        if (getVariableNodeDefine((yyvsp[(1) - (3)].variable)->index_symbol) == FALSE) {
            printf("\nError, variable is used but not defined!\n");
            exit(EXIT_FAILURE);
        }
        else if (getVariableNodeDefine((yyvsp[(1) - (3)].variable)->index_symbol) == ERROR) {
            printf("\nError, there is not the variable!\n");
            exit(EXIT_FAILURE);
        }

        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.statement)->ast_node);
        setSyntaxTreeNode(*((yyval.statement)->ast_node), NODE_ASSIGN, ":=");
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(1) - (3)].variable)->ast_node));
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(3) - (3)].expression)->ast_node));
        printDebugInformation();
    }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 316 "pascal_simple_compiler.y"
    {
        int temp = g_quaternion_index;
        generateQuaternionNode(0, 0, 0, OPCODE_JMP);
        backpatchQuaternionNodeChain((yyvsp[(1) - (3)].statement)->chain, g_quaternion_index);
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = mergeQuaternionNodeChain((yyvsp[(2) - (3)].statement)->chain, temp);
        addSyntaxTreeSonNode(*((yyvsp[(1) - (3)].statement)->ast_node), *((yyvsp[(2) - (3)].statement)->ast_node));
        (yyval.statement)->ast_node = (yyvsp[(1) - (3)].statement)->ast_node;
        printDebugQuaternionInformation();
        g_true_or_false_if = (g_true_or_false_if) ? FALSE : TRUE;
    }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 328 "pascal_simple_compiler.y"
    {
        backpatchQuaternionNodeChain((yyvsp[(2) - (3)].bool_expression)->chain_true, g_quaternion_index);
        (yyval.statement) = ALLOCATE_STRUCT_MEMORY(Statement);
        (yyval.statement)->chain = (yyvsp[(2) - (3)].bool_expression)->chain_false;
        (yyval.statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.statement)->ast_node);
        setSyntaxTreeNode(*((yyval.statement)->ast_node), NODE_IF, "if");
        addSyntaxTreeSonNode(*((yyval.statement)->ast_node), *((yyvsp[(2) - (3)].bool_expression)->ast_node));
        printDebugQuaternionInformation();
        g_true_or_false_if = g_true_or_false;
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 340 "pascal_simple_compiler.y"
    {
        backpatchQuaternionNodeChain((yyvsp[(2) - (3)].bool_expression)->chain_true, g_quaternion_index);
        (yyval.while_statement) = ALLOCATE_STRUCT_MEMORY(WhileStatement);
        (yyval.while_statement)->chain = (yyvsp[(2) - (3)].bool_expression)->chain_false;
        (yyval.while_statement)->loop_start = (yyvsp[(1) - (3)].while_statement)->loop_start;
        (yyval.while_statement)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.while_statement)->ast_node);
        setSyntaxTreeNode(*((yyval.while_statement)->ast_node), NODE_WHILE, "while");
        addSyntaxTreeSonNode(*((yyval.while_statement)->ast_node), *((yyvsp[(2) - (3)].bool_expression)->ast_node));
        printDebugQuaternionInformation();
        g_true_or_false_while = g_true_or_false;
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 353 "pascal_simple_compiler.y"
    {
        (yyval.while_statement) = ALLOCATE_STRUCT_MEMORY(WhileStatement);
        (yyval.while_statement)->chain = 0;
        (yyval.while_statement)->loop_start = g_quaternion_index;
        printDebugQuaternionInformation();
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 360 "pascal_simple_compiler.y"
    {
        (yyval.expression) = performArithmeticOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OPCODE_ADD, NODE_ADD, "+");
        printDebugInformation();
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 364 "pascal_simple_compiler.y"
    {
        (yyval.expression) = performArithmeticOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OPCODE_SUB, NODE_SUB, "-");
        printDebugInformation();
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 368 "pascal_simple_compiler.y"
    {
        (yyval.expression) = performArithmeticOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OPCODE_MUL, NODE_MUL, "*");
        printDebugInformation();
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 372 "pascal_simple_compiler.y"
    {
        (yyval.expression) = performArithmeticOperation((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), OPCODE_DIV, NODE_DIV, "/");
        printDebugInformation();
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 376 "pascal_simple_compiler.y"
    {
        (yyval.expression) = (yyvsp[(2) - (3)].expression);
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 379 "pascal_simple_compiler.y"
    {
        int  index_symbol;
        char **temp_name = (char **)malloc(sizeof(char));
        char result[STRING_WITH_MINUS_SIZE] = "-";

        strcat(result, (yyvsp[(2) - (2)].expression)->value);

        if ((yyvsp[(2) - (2)].expression)->index_symbol > 0) {
            index_symbol = generateConstantNode((yyvsp[(2) - (2)].expression)->type, result);
        }
        else {
           if (!generateTempVariableName(temp_name)) {
                *temp_name = "temp";
            }
            index_symbol = generateVariableNode((yyvsp[(2) - (2)].expression)->type, VARIABLE_TEMP, result,
                                                *temp_name);
            free(*temp_name);
            *temp_name = NULL;
            g_temp_count++;
        }

        (yyval.expression) = ALLOCATE_STRUCT_MEMORY(Expression);
        (yyval.expression)->index_symbol = index_symbol;
        (yyval.expression)->index_quaternion = generateQuaternionNode((yyvsp[(2) - (2)].expression)->index_symbol, 0,
                                                      (yyval.expression)->index_symbol,
                                                      OPCODE_MINUS);
        (yyval.expression)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.expression)->ast_node);
        setSyntaxTreeNode(*((yyval.expression)->ast_node), NODE_MINUS, "-");
        addSyntaxTreeSonNode(*((yyval.expression)->ast_node), *((yyvsp[(2) - (2)].expression)->ast_node));
        printDebugInformation();
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 411 "pascal_simple_compiler.y"
    {
        if (getVariableNodeDefine((yyvsp[(1) - (1)].variable)->index_symbol) == FALSE) {
            printf("\nError, variable is used but not defined!\n");
            exit(EXIT_FAILURE);
        }
        else if (getVariableNodeDefine((yyvsp[(1) - (1)].variable)->index_symbol) == ERROR) {
            printf("\nError, there is not the variable!\n");
            exit(EXIT_FAILURE);
        }

        (yyval.expression) = ALLOCATE_STRUCT_MEMORY(Expression);
        (yyval.expression)->index_symbol = (yyvsp[(1) - (1)].variable)->index_symbol;
        (yyval.expression)->type  = (yyvsp[(1) - (1)].variable)->type;
        (yyval.expression)->value = (yyvsp[(1) - (1)].variable)->value;
        (yyval.expression)->name  = (yyvsp[(1) - (1)].variable)->name;
        (yyval.expression)->index_quaternion = 0;
        (yyval.expression)->ast_node = (yyvsp[(1) - (1)].variable)->ast_node;
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 429 "pascal_simple_compiler.y"
    {
        (yyval.expression) = ALLOCATE_STRUCT_MEMORY(Expression);
        (yyval.expression)->index_symbol = (yyvsp[(1) - (1)].constant)->index_symbol;
        (yyval.expression)->type  = (yyvsp[(1) - (1)].constant)->type;
        (yyval.expression)->value = (yyvsp[(1) - (1)].constant)->value;
        (yyval.expression)->name  = NULL;
        (yyval.expression)->index_quaternion = 0;
        (yyval.expression)->ast_node = (yyvsp[(1) - (1)].constant)->ast_node;
    }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 439 "pascal_simple_compiler.y"
    {
        (yyval.bool_expression) = ALLOCATE_STRUCT_MEMORY(BoolExpression);

        if ((yyvsp[(1) - (3)].expression)->type == TYPE_INTEGER && (yyvsp[(3) - (3)].expression)->type == TYPE_INTEGER) {
            JUDGE_BOOL_EXPRESSION((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), (yyvsp[(2) - (3)].relation_operator), atoi);
        }
        else if ((yyvsp[(1) - (3)].expression)->type == TYPE_REAL && (yyvsp[(3) - (3)].expression)->type == TYPE_REAL) {
            JUDGE_BOOL_EXPRESSION((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), (yyvsp[(2) - (3)].relation_operator), atof);
        }
        else {
            printf("\nWarning, type [%s] mismatch type [%s]\n!", (yyvsp[(1) - (3)].expression)->value,
                (yyvsp[(3) - (3)].expression)->value);
            exit(EXIT_FAILURE);
        }

        (yyval.bool_expression)->chain_true  = g_quaternion_index;
        (yyval.bool_expression)->chain_false = g_quaternion_index + 1;
        generateQuaternionNode((yyvsp[(1) - (3)].expression)->index_symbol, (yyvsp[(3) - (3)].expression)->index_symbol, 0,
                               (yyvsp[(2) - (3)].relation_operator)->type_opcode);
        generateQuaternionNode(0, 0, 0, OPCODE_JMP);
        (yyval.bool_expression)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.bool_expression)->ast_node);
        setSyntaxTreeNode(*((yyval.bool_expression)->ast_node), (yyvsp[(2) - (3)].relation_operator)->type_ast, (yyvsp[(2) - (3)].relation_operator)->value);
        addSyntaxTreeSonNode(*((yyval.bool_expression)->ast_node), *((yyvsp[(1) - (3)].expression)->ast_node));
        addSyntaxTreeSonNode(*((yyval.bool_expression)->ast_node), *((yyvsp[(3) - (3)].expression)->ast_node));
        printDebugQuaternionInformation();
    }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 466 "pascal_simple_compiler.y"
    {
        (yyval.bool_expression) = ALLOCATE_STRUCT_MEMORY(BoolExpression);
        (yyval.bool_expression)->chain_true = (yyvsp[(2) - (2)].bool_expression)->chain_true;
        (yyval.bool_expression)->chain_false = mergeQuaternionNodeChain((yyvsp[(1) - (2)].bool_expression)->chain_false,
                                                   (yyvsp[(2) - (2)].bool_expression)->chain_false);
        addSyntaxTreeSonNode(*((yyvsp[(1) - (2)].bool_expression)->ast_node), *((yyvsp[(2) - (2)].bool_expression)->ast_node));
        (yyval.bool_expression)->ast_node = (yyvsp[(1) - (2)].bool_expression)->ast_node;
        printDebugQuaternionInformation();
    }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 475 "pascal_simple_compiler.y"
    {
        (yyval.bool_expression) = ALLOCATE_STRUCT_MEMORY(BoolExpression);
        (yyval.bool_expression)->chain_false = (yyvsp[(2) - (2)].bool_expression)->chain_false;
        (yyval.bool_expression)->chain_true = mergeQuaternionNodeChain((yyvsp[(1) - (2)].bool_expression)->chain_true,
                                                  (yyvsp[(2) - (2)].bool_expression)->chain_true);
        addSyntaxTreeSonNode(*((yyvsp[(1) - (2)].bool_expression)->ast_node), *((yyvsp[(2) - (2)].bool_expression)->ast_node));
        (yyval.bool_expression)->ast_node = (yyvsp[(1) - (2)].bool_expression)->ast_node;
        printDebugQuaternionInformation();
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 484 "pascal_simple_compiler.y"
    {
        (yyval.bool_expression) = ALLOCATE_STRUCT_MEMORY(BoolExpression);
        (yyval.bool_expression)->chain_true = (yyvsp[(2) - (2)].bool_expression)->chain_false;
        (yyval.bool_expression)->chain_false = (yyvsp[(2) - (2)].bool_expression)->chain_true;
        (yyval.bool_expression)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.bool_expression)->ast_node);
        setSyntaxTreeNode(*((yyval.bool_expression)->ast_node), NODE_NOT, "not");
        addSyntaxTreeSonNode(*((yyval.bool_expression)->ast_node), *((yyvsp[(2) - (2)].bool_expression)->ast_node));
        printDebugQuaternionInformation();
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 494 "pascal_simple_compiler.y"
    {
        (yyval.bool_expression) = ALLOCATE_STRUCT_MEMORY(BoolExpression);
        (yyval.bool_expression)->chain_true = (yyvsp[(2) - (3)].bool_expression)->chain_true;
        (yyval.bool_expression)->chain_false = (yyvsp[(2) - (3)].bool_expression)->chain_false;
        (yyval.bool_expression)->ast_node = (yyvsp[(2) - (3)].bool_expression)->ast_node;
        printDebugQuaternionInformation();
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 502 "pascal_simple_compiler.y"
    {
        backpatchQuaternionNodeChain((yyvsp[(1) - (2)].bool_expression)->chain_true, g_quaternion_index);
        (yyval.bool_expression) = ALLOCATE_STRUCT_MEMORY(BoolExpression);
        (yyval.bool_expression)->chain_false = (yyvsp[(1) - (2)].bool_expression)->chain_false;
        (yyval.bool_expression)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.bool_expression)->ast_node);
        setSyntaxTreeNode(*((yyval.bool_expression)->ast_node), NODE_AND, "and");
        addSyntaxTreeSonNode(*((yyval.bool_expression)->ast_node), *((yyvsp[(1) - (2)].bool_expression)->ast_node));
        printDebugQuaternionInformation();
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 513 "pascal_simple_compiler.y"
    {
        backpatchQuaternionNodeChain((yyvsp[(1) - (2)].bool_expression)->chain_true, g_quaternion_index);
        (yyval.bool_expression) = ALLOCATE_STRUCT_MEMORY(BoolExpression);
        (yyval.bool_expression)->chain_true = (yyvsp[(1) - (2)].bool_expression)->chain_true;
        (yyval.bool_expression)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.bool_expression)->ast_node);
        setSyntaxTreeNode(*((yyval.bool_expression)->ast_node), NODE_OR, "or");
        addSyntaxTreeSonNode(*((yyval.bool_expression)->ast_node), *((yyvsp[(1) - (2)].bool_expression)->ast_node));
        printDebugQuaternionInformation();
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 524 "pascal_simple_compiler.y"
    {
        (yyval.variable) = ALLOCATE_STRUCT_MEMORY(Variable);

        if (judgeVariableNodeExist((yyvsp[(1) - (1)].string))) {
            VariableTableNode *variable_temp_node =
                getVariableNode(getVariableNodeIndex((yyvsp[(1) - (1)].string)));
            (yyval.variable)->index_symbol = variable_temp_node->index;
            (yyval.variable)->chain = variable_temp_node->chain;
            (yyval.variable)->type = variable_temp_node->variable->type;

            if (variable_temp_node->variable->value == NULL) {
                (yyval.variable)->value = NULL;
            }
            else {
                (yyval.variable)->value =
                    (char *)malloc(
                    strlen(variable_temp_node->variable->value) + 1);
                strcpy((yyval.variable)->value, variable_temp_node->variable->value);
            }

            (yyval.variable)->name =
                (char *)malloc(strlen(variable_temp_node->variable->name) + 1);
            strcpy((yyval.variable)->name, variable_temp_node->variable->name);
        }
        else {
            (yyval.variable)->index_symbol = generateVariableNode(TYPE_NULL, VARIABLE_USER,
                                                    NULL, (yyvsp[(1) - (1)].string));
            (yyval.variable)->chain = (yyval.variable)->index_symbol;
            (yyval.variable)->type  = TYPE_NULL;
            (yyval.variable)->value = NULL;
            (yyval.variable)->name = (char *)malloc(strlen((yyvsp[(1) - (1)].string)) + 1);
            strcpy((yyval.variable)->name, (yyvsp[(1) - (1)].string));
        }

        (yyval.variable)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.variable)->ast_node);
        setSyntaxTreeNode(*((yyval.variable)->ast_node), NODE_VARIABLE, (yyvsp[(1) - (1)].string));
        printDebugVariableInformation();
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 564 "pascal_simple_compiler.y"
    {
        (yyval.constant) = ALLOCATE_STRUCT_MEMORY(Constant);
        (yyval.constant)->index_symbol = generateConstantNode(TYPE_INTEGER, (yyvsp[(1) - (1)].string));
        (yyval.constant)->type  = TYPE_INTEGER;
        (yyval.constant)->value = (char *)malloc(strlen((yyvsp[(1) - (1)].string)) + 1);
        strcpy((yyval.constant)->value, (yyvsp[(1) - (1)].string));
        (yyval.constant)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.constant)->ast_node);
        setSyntaxTreeNode(*((yyval.constant)->ast_node), NODE_INTEGER, (yyvsp[(1) - (1)].string));
        printDebugConstantInformation();
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 575 "pascal_simple_compiler.y"
    {
        (yyval.constant) = ALLOCATE_STRUCT_MEMORY(Constant);
        (yyval.constant)->index_symbol = generateConstantNode(TYPE_REAL, (yyvsp[(1) - (1)].string));
        (yyval.constant)->type  = TYPE_REAL;
        (yyval.constant)->value = (char *)malloc(strlen((yyvsp[(1) - (1)].string)) + 1);
        strcpy((yyval.constant)->value, (yyvsp[(1) - (1)].string));
        (yyval.constant)->ast_node = createSyntaxTreeNodePointer();
        createSyntaxTreeNode((yyval.constant)->ast_node);
        setSyntaxTreeNode(*((yyval.constant)->ast_node), NODE_REAL, (yyvsp[(1) - (1)].string));
        printDebugConstantInformation();
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 587 "pascal_simple_compiler.y"
    {
        (yyval.relation_operator) = ALLOCATE_STRUCT_MEMORY(RelationOperator);
        (yyval.relation_operator)->type_ast    = NODE_LT;
        (yyval.relation_operator)->type_opcode = OPCODE_JLT;
        (yyval.relation_operator)->value       = "<";
    }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 593 "pascal_simple_compiler.y"
    {
        (yyval.relation_operator) = ALLOCATE_STRUCT_MEMORY(RelationOperator);
        (yyval.relation_operator)->type_ast    = NODE_GT;
        (yyval.relation_operator)->type_opcode = OPCODE_JGT;
        (yyval.relation_operator)->value       = ">";
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 599 "pascal_simple_compiler.y"
    {
        (yyval.relation_operator) = ALLOCATE_STRUCT_MEMORY(RelationOperator);
        (yyval.relation_operator)->type_ast    = NODE_LE;
        (yyval.relation_operator)->type_opcode = OPCODE_JLE;
        (yyval.relation_operator)->value       = "<=";
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 605 "pascal_simple_compiler.y"
    {
        (yyval.relation_operator) = ALLOCATE_STRUCT_MEMORY(RelationOperator);
        (yyval.relation_operator)->type_ast    = NODE_GE;
        (yyval.relation_operator)->type_opcode = OPCODE_JGE;
        (yyval.relation_operator)->value       = ">=";
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 611 "pascal_simple_compiler.y"
    {
        (yyval.relation_operator) = ALLOCATE_STRUCT_MEMORY(RelationOperator);
        (yyval.relation_operator)->type_ast    = NODE_EQ;
        (yyval.relation_operator)->type_opcode = OPCODE_JEQ;
        (yyval.relation_operator)->value       = "=";
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 617 "pascal_simple_compiler.y"
    {
        (yyval.relation_operator) = ALLOCATE_STRUCT_MEMORY(RelationOperator);
        (yyval.relation_operator)->type_ast    = NODE_NE;
        (yyval.relation_operator)->type_opcode = OPCODE_JNE;
        (yyval.relation_operator)->value       = "<>";
    }
    break;


/* Line 1792 of yacc.c  */
#line 2226 "pascal_simple_compiler_yacc.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 624 "pascal_simple_compiler.y"

int yyerror(const char *string)
{
    printf("\n%d: %s at '%s'!\n", yylineno, string, yytext);
    return 0;
}
