/* A Bison parser, made by GNU Bison 3.5.1.  */

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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <assert.h>
    #include <stddef.h>
    #include <string.h>
    #include "parser.h"
    #include "symbol_table.h"
    #include "intermediate.h"
    #include "tools.h"
    #include "stack.h"

    int yylex (void);
    int yyerror (char* yaccProvidedMessage);

    Quad*           quads;
    unsigned        total;
    unsigned int    currQuad;

    char *typeToString[] = {
        "LOCAL_VAR",
        "GLOBAL_VAR",
        "ARGUMENT",

        "USER_FUNC",
        "LIB_FUNC"
    };

    char *opcodeToString[] =  {
        "ASSIGN",  "ADD",    "SUB",
        "MUL",    "DIV",    "MOD",
        "UMINUS", "AND",    "OR",
        "NOT",    "IF_EQ",  "IF_NOTEQ",
        "IF_LESSEQ",  "IF_GREATEREQ",   "IF_LESS",
        "IF_GREATER",    "CALL", "PARAM",
        "RET",   "GETRETVAL",  "FUNCSTART",
        "FUNCEND",    "TABLECREATE", 
        "TABLEGETELEM",   "TABLESETELEM", "JUMP"
    };

    char *_func_name;
    int _func_count = 0;
    int _anon_func_counter = 0;
    int _further_checks = 0;
    int _func_lvalue_check = 0;
    int _in_control = 0;
    long _temp_counter = 0;

    int _valid_comp = 1;

    int scope;
    extern int yylineno;
    extern char *yytext;
    extern FILE *yyin;
    SymTable *symTable;
    Stack *_call_stack;
    OffsetStack *scopeoffsetstack;



#line 131 "parser.c"

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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    NUM = 258,
    ID = 259,
    STRING = 260,
    IF = 261,
    ELSE = 262,
    WHILE = 263,
    FOR = 264,
    FUNCTION = 265,
    RETURN = 266,
    BREAK = 267,
    CONTINUE = 268,
    AND = 269,
    NOT = 270,
    OR = 271,
    LOCAL = 272,
    TRUE = 273,
    FALSE = 274,
    NIL = 275,
    LEFT_BRACE = 276,
    RIGHT_BRACE = 277,
    LEFT_BRACKET = 278,
    RIGHT_BRACKET = 279,
    LEFT_PARENTHESIS = 280,
    RIGHT_PARENTHESIS = 281,
    SEMICOLON = 282,
    COMMA = 283,
    COLON = 284,
    DOUBLE_COLON = 285,
    DOT = 286,
    DOUBLE_DOT = 287,
    EQUALS = 288,
    PLUS = 289,
    MINUS = 290,
    MULT = 291,
    DIV = 292,
    MOD = 293,
    EQUALS_EQUALS = 294,
    NOT_EQUALS = 295,
    PLUS_PLUS = 296,
    MINUS_MINUS = 297,
    GREATER_THAN = 298,
    LESS_THAN = 299,
    GREATER_OR_EQUAL = 300,
    LESS_OR_EQUAL = 301,
    UMINUS = 302
  };
#endif
/* Tokens.  */
#define NUM 258
#define ID 259
#define STRING 260
#define IF 261
#define ELSE 262
#define WHILE 263
#define FOR 264
#define FUNCTION 265
#define RETURN 266
#define BREAK 267
#define CONTINUE 268
#define AND 269
#define NOT 270
#define OR 271
#define LOCAL 272
#define TRUE 273
#define FALSE 274
#define NIL 275
#define LEFT_BRACE 276
#define RIGHT_BRACE 277
#define LEFT_BRACKET 278
#define RIGHT_BRACKET 279
#define LEFT_PARENTHESIS 280
#define RIGHT_PARENTHESIS 281
#define SEMICOLON 282
#define COMMA 283
#define COLON 284
#define DOUBLE_COLON 285
#define DOT 286
#define DOUBLE_DOT 287
#define EQUALS 288
#define PLUS 289
#define MINUS 290
#define MULT 291
#define DIV 292
#define MOD 293
#define EQUALS_EQUALS 294
#define NOT_EQUALS 295
#define PLUS_PLUS 296
#define MINUS_MINUS 297
#define GREATER_THAN 298
#define LESS_THAN 299
#define GREATER_OR_EQUAL 300
#define LESS_OR_EQUAL 301
#define UMINUS 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 64 "parser.y"

    char*   strValue;
    double  numValue;

    struct SymTableEntry    *symValue;
    struct Expression       *exprValue;
    struct Stmt             *stmtValue;

    struct Call             *functionCall;

#line 288 "parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   104,   104,   105,   108,   113,   117,   121,
     125,   147,   159,   172,   176,   180,   186,   189,   193,   197,
     201,   205,   209,   218,   227,   236,   245,   245,   257,   257,
     269,   269,   288,   288,   307,   313,   315,   319,   325,   345,
     395,   445,   495,   548,   555,   554,   611,   642,   646,   650,
     654,   660,   682,   708,   724,   730,   734,   744,   748,   760,
     764,   812,   818,   819,   822,   826,   830,   834,   842,   847,
     860,   874,   878,   889,   898,   902,   908,   913,   919,   923,
     931,   931,   932,   931,   959,   996,  1014,  1017,  1020,  1023,
    1026,  1030,  1031,  1032,  1035,  1057,  1064,  1074,  1080,  1080,
    1089,  1094,  1094,  1102,  1114,  1123,  1125,  1140,  1145,  1149
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "STRING", "IF", "ELSE",
  "WHILE", "FOR", "FUNCTION", "RETURN", "BREAK", "CONTINUE", "AND", "NOT",
  "OR", "LOCAL", "TRUE", "FALSE", "NIL", "LEFT_BRACE", "RIGHT_BRACE",
  "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "SEMICOLON", "COMMA", "COLON", "DOUBLE_COLON", "DOT", "DOUBLE_DOT",
  "EQUALS", "PLUS", "MINUS", "MULT", "DIV", "MOD", "EQUALS_EQUALS",
  "NOT_EQUALS", "PLUS_PLUS", "MINUS_MINUS", "GREATER_THAN", "LESS_THAN",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "UMINUS", "$accept", "program",
  "statements", "$@1", "statement", "expression", "$@2", "$@3", "$@4",
  "$@5", "M", "term", "assignexpr", "$@6", "primary", "lvalue", "member",
  "call", "callsuffix", "normcall", "methodcall", "elist", "objectdef",
  "indexed", "indexedelem", "block", "blockstart", "blockend", "blockstmt",
  "funcdef", "$@7", "$@8", "$@9", "funcstart", "const", "idlist", "arg",
  "ifstmt", "elseprefix", "ifprefix", "$@10", "whilestart", "whilecond",
  "$@11", "whilestmt", "forprefix", "forstart", "forstmt", "N",
  "returnstmt", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     208,  -167,  -167,  -167,   -21,  -167,   -15,     4,    97,     3,
      18,   255,    11,  -167,  -167,  -167,    17,  -167,   236,  -167,
      42,   255,   104,   104,    48,    50,  -167,   265,  -167,  -167,
    -167,   115,  -167,     8,  -167,  -167,   168,  -167,    26,  -167,
    -167,   208,    28,  -167,  -167,   255,  -167,  -167,  -167,  -167,
    -167,  -167,   279,  -167,  -167,  -167,  -167,   255,   312,    34,
      35,    32,   327,    36,  -167,  -167,    51,   -14,     8,   -14,
    -167,   208,  -167,  -167,  -167,   255,   255,   255,   255,   255,
    -167,  -167,   255,   255,   255,   255,   255,   255,    59,    61,
    -167,  -167,    33,  -167,  -167,  -167,   255,   255,    64,  -167,
     208,  -167,    46,  -167,    65,  -167,   208,   255,    52,   255,
    -167,   360,   255,  -167,  -167,    55,  -167,    78,    60,  -167,
    -167,  -167,   -12,   -12,  -167,  -167,  -167,   255,   255,   376,
     376,   376,   376,   393,    83,  -167,    79,   255,   426,    87,
    -167,  -167,  -167,   116,  -167,   208,   255,  -167,   102,  -167,
     441,   255,  -167,  -167,   255,    78,   255,   255,   347,   347,
    -167,  -167,   255,   538,  -167,  -167,  -167,  -167,    95,  -167,
     474,  -167,   255,  -167,   491,   105,   458,    53,   107,   111,
     116,  -167,   208,   524,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,   118,  -167,  -167
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    86,    51,    87,     0,   100,     0,    85,     0,     0,
       0,     0,     0,    89,    90,    88,    68,    76,     0,    15,
       0,     0,     0,     0,     0,     3,     5,     0,    34,    16,
      43,    46,    54,    47,    48,    13,     0,    14,     0,    50,
       7,     0,     0,     8,   107,    68,     9,    10,    98,   105,
      84,   108,     0,    11,    12,    38,    52,     0,    66,     0,
       0,    71,     0,     0,    53,    37,     0,    39,     0,    41,
       1,     0,    30,    32,     6,     0,     0,     0,     0,     0,
      26,    28,     0,     0,     0,     0,     0,    68,     0,     0,
      40,    42,     0,    60,    62,    63,     0,    68,     0,    77,
      78,    74,     0,    80,    95,   101,     0,    68,     0,     0,
     109,     0,    68,    69,    70,     0,    36,    49,     0,     4,
      35,    35,    17,    18,    19,    20,    21,     0,     0,    22,
      24,    23,    25,     0,     0,    55,     0,     0,     0,     0,
      57,    79,    75,    93,    97,     0,     0,   103,     0,    35,
       0,     0,    67,    72,    68,     0,     0,     0,    27,    29,
      56,    64,    68,    45,    58,    59,    94,    81,    91,    96,
       0,   107,     0,    99,     0,     0,    31,    33,     0,     0,
      93,   102,     0,     0,    73,    61,    65,    82,    92,   107,
     104,     0,   106,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,     0,    -2,  -167,  -167,  -167,  -167,
    -118,  -167,  -167,  -167,  -167,   -10,  -167,     5,  -167,  -167,
    -167,   -43,  -167,    15,  -167,   -49,  -167,    41,    58,   -17,
    -167,  -167,  -167,  -167,  -167,   -30,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -166,  -167
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    71,   100,    27,   127,   128,   120,   121,
     156,    28,    29,    92,    30,    31,    32,    33,    93,    94,
      95,    59,    34,    60,    61,    35,    36,   101,   102,    37,
     143,   179,   191,    38,    39,   167,   168,    40,   145,    41,
     109,    42,   106,   146,    43,    44,    45,    46,   107,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    63,   108,   157,    48,   182,    52,    86,    50,    55,
      49,    87,    67,    69,    58,    56,    62,    88,    89,    65,
       1,     2,     3,   192,    77,    78,    79,    68,    68,    96,
      53,   172,    11,    97,    12,    13,    14,    15,    16,    98,
      57,   104,    18,    58,   134,    54,    64,    20,    70,   118,
      -2,   103,    21,   105,   139,   111,   113,   114,    22,    23,
     115,     7,   117,   135,   148,   136,   137,    72,   140,   152,
      99,   119,   144,   122,   123,   124,   125,   126,    57,   149,
     129,   130,   131,   132,   133,    58,   155,    75,    76,    77,
      78,    79,    80,    81,   138,    58,    82,    83,    84,    85,
       1,     2,     3,   154,   162,    58,   147,   150,     2,   161,
      58,   175,    11,   165,    12,    13,    14,    15,    16,   178,
     166,    12,    18,   180,    51,   158,   159,    20,   171,    66,
     153,   185,    21,   186,    20,   163,    86,   187,    22,    23,
      87,    17,   193,   142,   170,   169,    88,    89,   -44,   174,
     188,     0,    58,     0,   176,   177,    90,    91,   141,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,     1,     2,     3,     4,     0,     5,     6,     7,     8,
       9,    10,   189,    11,     0,    12,    13,    14,    15,    16,
       0,    17,    99,    18,     0,    19,     0,     0,    20,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,    22,
      23,     1,     2,     3,     4,     0,     5,     6,     7,     8,
       9,    10,     0,    11,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,     0,    19,     0,     0,    20,     1,
       2,     3,     0,    21,     0,     0,     7,     0,     0,    22,
      23,    11,     0,    12,    13,    14,    15,    16,     1,     2,
       3,    18,     0,     0,     0,     0,    20,     0,     0,     0,
      11,    21,    12,    13,    14,    15,    16,    22,    23,    72,
      18,    73,     0,     0,     0,    20,     0,     0,     0,     0,
      21,     0,    74,    72,     0,    73,    22,    23,     0,    75,
      76,    77,    78,    79,    80,    81,   110,     0,    82,    83,
      84,    85,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,    82,    83,    84,    85,    72,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,    72,     0,    73,     0,     0,    75,    76,    77,    78,
      79,    80,    81,   116,     0,    82,    83,    84,    85,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
      82,    83,    84,    85,    72,     0,    73,     0,     0,     0,
       0,    75,    76,    77,    78,    79,   -45,   -45,     0,   151,
      82,    83,    84,    85,    75,    76,    77,    78,    79,    80,
      81,     0,     0,    82,    83,    84,    85,    72,     0,    73,
      75,    76,    77,    78,    79,   160,     0,     0,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,     0,    82,    83,    84,    85,
      72,     0,    73,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,    72,     0,    73,     0,     0,
      75,    76,    77,    78,    79,    80,    81,   173,     0,    82,
      83,    84,    85,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    72,     0,
      73,     0,    75,    76,    77,    78,    79,    80,    81,     0,
     181,    82,    83,    84,    85,    72,     0,    73,    75,    76,
      77,    78,    79,    80,    81,   184,     0,    82,    83,    84,
      85,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    72,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   190,    72,     0,    73,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,    82,    83,    84,
      85,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,    82,    83,    84,    85
};

static const yytype_int16 yycheck[] =
{
       0,    18,    45,   121,    25,   171,     8,    21,     4,    11,
      25,    25,    22,    23,    16,     4,    18,    31,    32,    21,
       3,     4,     5,   189,    36,    37,    38,    22,    23,    21,
      27,   149,    15,    25,    17,    18,    19,    20,    21,    31,
      23,    41,    25,    45,    87,    27,     4,    30,     0,    66,
       0,    25,    35,    25,    97,    57,    22,    22,    41,    42,
      28,    10,    26,     4,   107,     4,    33,    14,     4,   112,
      24,    71,     7,    75,    76,    77,    78,    79,    23,    27,
      82,    83,    84,    85,    86,    87,    26,    34,    35,    36,
      37,    38,    39,    40,    96,    97,    43,    44,    45,    46,
       3,     4,     5,    25,    25,   107,   106,   109,     4,    26,
     112,   154,    15,    26,    17,    18,    19,    20,    21,   162,
       4,    17,    25,    28,    27,   127,   128,    30,    26,    25,
     115,    26,    35,    26,    30,   137,    21,    26,    41,    42,
      25,    23,   191,   102,   146,   145,    31,    32,    33,   151,
     180,    -1,   154,    -1,   156,   157,    41,    42,   100,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,   182,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      42,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    30,     3,
       4,     5,    -1,    35,    -1,    -1,    10,    -1,    -1,    41,
      42,    15,    -1,    17,    18,    19,    20,    21,     3,     4,
       5,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      15,    35,    17,    18,    19,    20,    21,    41,    42,    14,
      25,    16,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      35,    -1,    27,    14,    -1,    16,    41,    42,    -1,    34,
      35,    36,    37,    38,    39,    40,    27,    -1,    43,    44,
      45,    46,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    14,    -1,    16,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    26,    -1,    43,    44,    45,    46,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      43,    44,    45,    46,    14,    -1,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    29,
      43,    44,    45,    46,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    44,    45,    46,    14,    -1,    16,
      34,    35,    36,    37,    38,    22,    -1,    -1,    -1,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    26,    -1,    43,
      44,    45,    46,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    14,    -1,
      16,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      26,    43,    44,    45,    46,    14,    -1,    16,    34,    35,
      36,    37,    38,    39,    40,    24,    -1,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    14,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    14,    -1,    16,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    11,    12,
      13,    15,    17,    18,    19,    20,    21,    23,    25,    27,
      30,    35,    41,    42,    49,    50,    52,    53,    59,    60,
      62,    63,    64,    65,    70,    73,    74,    77,    81,    82,
      85,    87,    89,    92,    93,    94,    95,    97,    25,    25,
       4,    27,    53,    27,    27,    53,     4,    23,    53,    69,
      71,    72,    53,    77,     4,    53,    25,    63,    65,    63,
       0,    51,    14,    16,    27,    34,    35,    36,    37,    38,
      39,    40,    43,    44,    45,    46,    21,    25,    31,    32,
      41,    42,    61,    66,    67,    68,    21,    25,    31,    24,
      52,    75,    76,    25,    52,    25,    90,    96,    69,    88,
      27,    53,    28,    22,    22,    28,    26,    26,    77,    52,
      56,    57,    53,    53,    53,    53,    53,    54,    55,    53,
      53,    53,    53,    53,    69,     4,     4,    33,    53,    69,
       4,    76,    75,    78,     7,    86,    91,    52,    69,    27,
      53,    29,    69,    71,    25,    26,    58,    58,    53,    53,
      22,    26,    25,    53,    22,    26,     4,    83,    84,    52,
      53,    26,    58,    26,    53,    69,    53,    53,    69,    79,
      28,    26,    96,    53,    24,    26,    26,    26,    83,    52,
      27,    80,    96,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    51,    50,    50,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    53,    55,    53,
      56,    53,    57,    53,    53,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    61,    60,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    64,    64,    64,    65,
      65,    65,    66,    66,    67,    68,    69,    69,    69,    70,
      70,    71,    71,    72,    73,    73,    74,    75,    76,    76,
      78,    79,    80,    77,    81,    81,    82,    82,    82,    82,
      82,    83,    83,    83,    84,    85,    85,    86,    88,    87,
      89,    91,    90,    92,    93,    94,    95,    96,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     3,     1,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     5,     0,     5,     1,     0,     3,     2,     2,     2,
       2,     2,     2,     1,     0,     4,     1,     1,     1,     3,
       1,     1,     2,     2,     1,     3,     4,     3,     4,     4,
       2,     6,     1,     1,     3,     5,     1,     3,     0,     3,
       3,     1,     3,     5,     2,     3,     1,     1,     1,     2,
       0,     0,     0,     8,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     2,     4,     1,     0,     5,
       1,     0,     4,     3,     6,     2,     7,     0,     2,     3
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
  case 3:
#line 104 "parser.y"
                           {reset_temp_counter();}
#line 1684 "parser.c"
    break;

  case 6:
#line 109 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                        mk_bool_vmasm((yyvsp[-1].exprValue));
                    }
#line 1693 "parser.c"
    break;

  case 7:
#line 114 "parser.y"
                    {
                        (yyval.stmtValue) = (yyvsp[0].stmtValue);
                    }
#line 1701 "parser.c"
    break;

  case 8:
#line 118 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                    }
#line 1709 "parser.c"
    break;

  case 9:
#line 122 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                    }
#line 1717 "parser.c"
    break;

  case 10:
#line 125 "parser.y"
                                        {
                                            SymTableEntry *curfunc = (SymTableEntry*)top(_call_stack);    

                                            if(!curfunc){
                                                printf("input:%d: error:  Return outside of scope \n", yylineno);
                                                _valid_comp = 0;
                                                YYABORT;
                                            }     

                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Return outside of scope \n", yylineno);

                                                _valid_comp = 0;
                                                YYABORT;
                                            }else{
                                                 //printf("Returns  %d %d\n", e->value.varValue->line, yylineno);
                                                if(_func_count>0 && _in_control >0) _in_control--;
                                                else _in_control=0;
                                            }
                                            (yyval.stmtValue) = (yyvsp[0].stmtValue); // might need new
                                        }
#line 1743 "parser.c"
    break;

  case 11:
#line 147 "parser.y"
                                        {
                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Break outside of scope \n", yylineno);
                                                _valid_comp = 0;
                                                YYABORT;
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                            (yyval.stmtValue) = stmt();
                                            (yyval.stmtValue)->breaklist = next_quad();
                                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                                        }
#line 1760 "parser.c"
    break;

  case 12:
#line 159 "parser.y"
                                        { 
                                            if(scope==0 && _in_control==0){

                                                printf("input:%d: error:  Continue outside of scope \n", yylineno);
                                                _valid_comp = 0;
                                                YYABORT;
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                            (yyval.stmtValue) = stmt();
                                            (yyval.stmtValue)->contlist = next_quad();
                                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                                        }
#line 1778 "parser.c"
    break;

  case 13:
#line 173 "parser.y"
                    {
                        (yyval.stmtValue) = (yyvsp[0].stmtValue);
                    }
#line 1786 "parser.c"
    break;

  case 14:
#line 177 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                    }
#line 1794 "parser.c"
    break;

  case 15:
#line 181 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                    }
#line 1802 "parser.c"
    break;

  case 16:
#line 186 "parser.y"
                                                {
                                                    (yyval.exprValue) = (yyvsp[0].exprValue);
                                                }
#line 1810 "parser.c"
    break;

  case 17:
#line 189 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(ADD_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1819 "parser.c"
    break;

  case 18:
#line 193 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(SUB_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1828 "parser.c"
    break;

  case 19:
#line 197 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(MUL_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1837 "parser.c"
    break;

  case 20:
#line 201 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(DIV_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1846 "parser.c"
    break;

  case 21:
#line 205 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(MOD_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1855 "parser.c"
    break;

  case 22:
#line 210 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_GREATER_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1868 "parser.c"
    break;

  case 23:
#line 219 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_GREATEREQ_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1881 "parser.c"
    break;

  case 24:
#line 228 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_LESS_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1894 "parser.c"
    break;

  case 25:
#line 237 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_LESSEQ_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1907 "parser.c"
    break;

  case 26:
#line 245 "parser.y"
                                           {mk_bool_vmasm((yyvsp[-1].exprValue));}
#line 1913 "parser.c"
    break;

  case 27:
#line 246 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                        mk_bool_vmasm((yyvsp[0].exprValue));

                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_EQ_I, NULL, (yyvsp[-3].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1929 "parser.c"
    break;

  case 28:
#line 257 "parser.y"
                                        {mk_bool_vmasm((yyvsp[-1].exprValue));}
#line 1935 "parser.c"
    break;

  case 29:
#line 258 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                        mk_bool_vmasm((yyvsp[0].exprValue));

                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_NOTEQ_I, NULL, (yyvsp[-3].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1951 "parser.c"
    break;

  case 30:
#line 269 "parser.y"
                                 {mk_nbe_vmasm(AND_I, (yyvsp[-1].exprValue));}
#line 1957 "parser.c"
    break;

  case 31:
#line 270 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                        // emit if_eq if second expression is not a boolexpr
                        if((yyvsp[0].exprValue)->type != BOOLEXPR_E){
                            (yyvsp[0].exprValue)->truelist = llist(next_quad());
                            (yyvsp[0].exprValue)->falselist = llist(next_quad() + 1);
                            emit(IF_EQ_I, NULL, (yyvsp[0].exprValue), bool_expr(1), 0, yylineno);
                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                        }

                        if((yyvsp[-4].exprValue)->type == BOOLEXPR_E)
                            llist_patch((yyvsp[-4].exprValue)->truelist, (yyvsp[-1].numValue));

                        (yyval.exprValue)->truelist = (yyvsp[0].exprValue)->truelist;
                        (yyval.exprValue)->falselist = llist_merge((yyvsp[-4].exprValue)->falselist, (yyvsp[0].exprValue)->falselist);
                    }
#line 1980 "parser.c"
    break;

  case 32:
#line 288 "parser.y"
                                {mk_nbe_vmasm(OR_I, (yyvsp[-1].exprValue));}
#line 1986 "parser.c"
    break;

  case 33:
#line 289 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                         // emit if_eq if second expression is not a boolexpr
                        if((yyvsp[0].exprValue)->type != BOOLEXPR_E){
                            (yyvsp[0].exprValue)->truelist = llist(next_quad());
                            (yyvsp[0].exprValue)->falselist = llist(next_quad() + 1);
                            emit(IF_EQ_I, NULL, (yyvsp[0].exprValue), bool_expr(1), 0, yylineno);
                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                        }

                        if((yyvsp[-4].exprValue)->type == BOOLEXPR_E)
                            llist_patch((yyvsp[-4].exprValue)->falselist, (yyvsp[-1].numValue));

                        (yyval.exprValue)->truelist = llist_merge((yyvsp[-4].exprValue)->truelist, (yyvsp[0].exprValue)->truelist);
                        (yyval.exprValue)->falselist = (yyvsp[0].exprValue)->falselist;
                    }
#line 2009 "parser.c"
    break;

  case 34:
#line 308 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 2017 "parser.c"
    break;

  case 35:
#line 313 "parser.y"
              {(yyval.numValue) = next_quad();}
#line 2023 "parser.c"
    break;

  case 36:
#line 316 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[-1].exprValue);
                    }
#line 2031 "parser.c"
    break;

  case 37:
#line 320 "parser.y"
                    {
                        (yyval.exprValue) = expr(ARITHEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        emit(UMINUS_I, (yyval.exprValue), (yyvsp[0].exprValue), NULL, next_quad(), yylineno);
                    }
#line 2041 "parser.c"
    break;

  case 38:
#line 326 "parser.y"
                    {
                        llist_t temp;
                        (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                        (yyval.exprValue)->type = BOOLEXPR_E;

                        if((yyvsp[0].exprValue)->type != BOOLEXPR_E){

                            // reverse
                            (yyval.exprValue)->falselist = llist(next_quad());
                            (yyval.exprValue)->truelist = llist(next_quad() + 1);
                            emit(IF_EQ_I, NULL, (yyvsp[0].exprValue), bool_expr(1), 0, yylineno);
                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                        }else{
                            temp = (yyvsp[0].exprValue)->truelist;
                            (yyval.exprValue)->truelist = (yyvsp[0].exprValue)->falselist;
                            (yyval.exprValue)->falselist = temp;
                        }

                    }
#line 2065 "parser.c"
    break;

  case 39:
#line 346 "parser.y"
                    {            
                        Expr *ex = (Expr*)0, *val = (Expr*)0;   
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                            e = (yyvsp[0].exprValue)->sym;
                            ex = (yyvsp[0].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            if(ex->type == TABLEITEM_E){
                                (yyval.exprValue) = emit_if_table_item(symTable, scope, ex);
                                emit(ADD_I, (yyval.exprValue), (yyval.exprValue), num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, (yyval.exprValue), ex, ex->index, 0, yylineno);
                            }else{
                                emit(ADD_I, ex, ex, num_expr(1), 0, yylineno);
                                (yyval.exprValue) = expr(ARITHEXPR_E);
                                (yyval.exprValue)->sym = new_temp(symTable, scope);
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                            }
                        }
                    }
#line 2119 "parser.c"
    break;

  case 40:
#line 396 "parser.y"
                    {
                        Expr *ex = (Expr*)0, *val = (Expr*)0;
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[-1].exprValue) && (yyvsp[-1].exprValue)->sym && _further_checks){
                            e = (yyvsp[-1].exprValue)->sym;
                            ex = (yyvsp[-1].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                            if(ex->type == TABLEITEM_E){
                                val = emit_if_table_item(symTable, scope, ex);
                                emit(ASSIGN_I, (yyval.exprValue), val, NULL, 0, yylineno);
                                emit(ADD_I, val, val, num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, val, ex, ex->index, 0, yylineno);
                            }else{
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                                emit(ADD_I, ex, ex, num_expr(1), 0, yylineno);
                            }
                        }
                    }
#line 2173 "parser.c"
    break;

  case 41:
#line 446 "parser.y"
                    {               
                        Expr *ex = (Expr*)0, *val = (Expr*)0;
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                            e = (yyvsp[0].exprValue)->sym;
                            ex = (yyvsp[0].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            if(ex->type == TABLEITEM_E){
                                (yyval.exprValue) = emit_if_table_item(symTable, scope, ex);
                                emit(SUB_I, (yyval.exprValue), (yyval.exprValue), num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, (yyval.exprValue), ex, ex->index, 0, yylineno);
                            }else{
                                emit(SUB_I, ex, ex, num_expr(1), 0, yylineno);
                                (yyval.exprValue) = expr(ARITHEXPR_E);
                                (yyval.exprValue)->sym = new_temp(symTable, scope);
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                            }
                        }
                    }
#line 2227 "parser.c"
    break;

  case 42:
#line 496 "parser.y"
                    {               
                        Expr *ex = (Expr*)0, *val = (Expr*)0;
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[-1].exprValue) && (yyvsp[-1].exprValue)->sym && _further_checks){
                            e = (yyvsp[-1].exprValue)->sym;
                            ex = (yyvsp[-1].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                            if(ex->type == TABLEITEM_E){
                                val = emit_if_table_item(symTable, scope, ex);
                                emit(ASSIGN_I, (yyval.exprValue), val, NULL, 0, yylineno);
                                emit(SUB_I, val, val, num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, val, ex, ex->index, 0, yylineno);
                            }else{
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                                emit(SUB_I, ex, ex, num_expr(1), 0, yylineno);
                            }
                        }



                    }
#line 2284 "parser.c"
    break;

  case 43:
#line 549 "parser.y"
                    {   
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 2292 "parser.c"
    break;

  case 44:
#line 555 "parser.y"
                        {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                                e = (yyvsp[0].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyvsp[0].exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyvsp[0].exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(_call_stack, e, scope)){
                                        if(e->value.varValue->scope != scope && e->type != GLOBAL_VAR){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                            _valid_comp = 0;
                                            YYABORT;
                                            (yyvsp[0].exprValue) = NULL;
                                        }
                                    }

                                }else{
                                    (yyvsp[0].exprValue) = NULL;
                                    // Functions can not be l-values
                                    if(_func_lvalue_check) {
                                        printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }
                            }
                        }
#line 2334 "parser.c"
    break;

  case 45:
#line 592 "parser.y"
                    {

                        mk_bool_vmasm((yyvsp[0].exprValue));

                        if((yyvsp[-3].exprValue)->type == TABLEITEM_E){
                            emit(TABLESETELEM_I, (yyvsp[-3].exprValue), (yyvsp[-3].exprValue)->index, (yyvsp[0].exprValue), 0, yylineno);
                            //emit(TABLESETELEM_I, $4, $1, $1->index, 0, yylineno);

                            (yyval.exprValue) = emit_if_table_item(symTable, scope, (yyvsp[-3].exprValue));
                            (yyval.exprValue)->type = ASSIGNEXPR_E;
                        }else{
                            emit(ASSIGN_I, (yyvsp[-3].exprValue), (yyvsp[0].exprValue), NULL, 0, yylineno);
                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));

                            // second emit
                            emit(ASSIGN_I, (yyval.exprValue), (yyvsp[-3].exprValue), NULL, 0, yylineno);
                        }
                    }
#line 2357 "parser.c"
    break;

  case 46:
#line 611 "parser.y"
                        {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                                (yyval.exprValue) = (yyvsp[0].exprValue);
                                e = (yyvsp[0].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(_call_stack, e, scope)){
                                        if(e->value.varValue->scope != scope && e->type != GLOBAL_VAR){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                            _valid_comp = 0;
                                            YYABORT;
                                        }
                                    }

                                }
                            }

                            (yyval.exprValue) = emit_if_table_item(symTable, scope, (yyvsp[0].exprValue));
                        }
#line 2393 "parser.c"
    break;

  case 47:
#line 643 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 2401 "parser.c"
    break;

  case 48:
#line 647 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 2409 "parser.c"
    break;

  case 49:
#line 651 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[-1].exprValue);
                    }
#line 2417 "parser.c"
    break;

  case 50:
#line 654 "parser.y"
                        {   
                            Expr *c = (yyvsp[0].exprValue);
                            (yyval.exprValue) = (yyvsp[0].exprValue);
                        }
#line 2426 "parser.c"
    break;

  case 51:
#line 660 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check if active variables exist in any scope from current and down
                                                if((e = lookup_variable(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                                    
                                                    // If not, insert the variable
                                                    if(scope == 0)
                                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, GLOBAL_VAR));
                                                    else
                                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, LOCAL_VAR));
                                                    (yyval.exprValue)->sym->scspace = currscopespace();
                                                    (yyval.exprValue)->sym->offset = currscopeoffset();
                                                }else{

                                                    // If exists, set value for further checks
                                                    //printf("Setting valuue for further checks on-> %s %s\n", e->value.varValue->name, typeToString[e->type]);
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 1;
                                                _func_lvalue_check = 1;
                                            }
#line 2453 "parser.c"
    break;

  case 52:
#line 682 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check current scope
                                                if((e = lookup_no_type(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                                    if((e = lookup(symTable, (yyvsp[0].strValue), 0, LIB_FUNC)) == NULL){
                                                        if(scope == 0){
                                                            (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, GLOBAL_VAR));
                                                        }else{
                                                            (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, LOCAL_VAR));
                                                        }
                                                        (yyval.exprValue)->sym->scspace = currscopespace();
                                                        (yyval.exprValue)->sym->offset = currscopeoffset();
                                                    }else{
                                                        printf("input:%d: error: local symbol %s is attempting to shadow a library function\n", yylineno, (yyvsp[0].strValue));
                                                        _valid_comp = 0;
                                                        YYABORT;
                                                        (yyval.exprValue) = NULL;
                                                    }
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 1;
                                                _func_lvalue_check = 1;
                                            }
#line 2484 "parser.c"
    break;

  case 53:
#line 708 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check globals
                                                if((e = lookup_no_type(symTable, (yyvsp[0].strValue), 0)) == NULL){
                                                    printf("input:%d: error: global reference %s in line %d not found\n", yylineno, (yyvsp[0].strValue), yylineno);
                                                    _valid_comp = 0;
                                                    YYABORT;
                                                    (yyval.exprValue) = NULL;
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 0;
                                                _func_lvalue_check = 1;
                                            }
#line 2505 "parser.c"
    break;

  case 54:
#line 724 "parser.y"
                                            {
                                                _func_lvalue_check = 0;
                                                (yyval.exprValue) = (yyvsp[0].strValue);
                                            }
#line 2514 "parser.c"
    break;

  case 55:
#line 731 "parser.y"
                    {   
                        (yyval.strValue) = member_expr(symTable, scope, (yyvsp[-2].exprValue), (yyvsp[0].strValue));
                    }
#line 2522 "parser.c"
    break;

  case 56:
#line 735 "parser.y"
                    {
                        Expr *res;

                        (yyvsp[-3].exprValue) = emit_if_table_item(symTable, scope, (yyvsp[-3].exprValue));
                        res = expr(TABLEITEM_E);
                        res->sym = (yyvsp[-3].exprValue)->sym;
                        res->index = (yyvsp[-1].exprValue);
                        (yyval.strValue) = res;
                    }
#line 2536 "parser.c"
    break;

  case 57:
#line 745 "parser.y"
                    {
                        (yyval.strValue) = member_expr(symTable, scope, (yyvsp[-2].exprValue), (yyvsp[0].strValue));
                    }
#line 2544 "parser.c"
    break;

  case 58:
#line 749 "parser.y"
                    {
                        Expr *res;

                        (yyvsp[-3].exprValue) = emit_if_table_item(symTable, scope, (yyvsp[-3].exprValue));
                        res = expr(TABLEITEM_E);
                        res->sym = (yyvsp[-3].exprValue)->sym;
                        res->index = (yyvsp[-1].exprValue);
                        (yyval.strValue) = res;
                    }
#line 2558 "parser.c"
    break;

  case 59:
#line 761 "parser.y"
                    {
                        (yyval.exprValue) = make_call(symTable, scope, (yyvsp[-3].exprValue), reverse_elist(&(yyvsp[-1].exprValue)));
                    }
#line 2566 "parser.c"
    break;

  case 60:
#line 764 "parser.y"
                                    {
                                        SymTableEntry* e;

                                        Call *c;
                                        SymTableEntry *e1;
                                        e1 = (yyvsp[-1].exprValue)->sym;
                                        c = (yyvsp[0].functionCall);
                                        char *orig_name = (yyvsp[0].functionCall)->name;
                                        c->name = strdup(e1->value.funcValue->name);

                                        //printf("Usage of %s as call in %d\n", e->value.funcValue->name, yylineno);

                                        // Check wether lvalue is a function

                                        if((yyvsp[-1].exprValue) && (yyvsp[-1].exprValue)->sym){
                                            e = (yyvsp[-1].exprValue)->sym;

                                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                                if(!e->isActive){
                                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                                    if(scope == 0){
                                                        insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR);
                                                    }else
                                                        insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR);
                                                }else if(!is_valid(_call_stack, e, scope)){
                                                    if(e->value.varValue->scope != scope){
                                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                                        _valid_comp = 0;
                                                        YYABORT;
                                                    }
                                                }

                                                
                                            }
                                        }

                                        if((yyvsp[0].functionCall)->isMethod){

                                            (yyvsp[-1].exprValue)->next = (yyvsp[0].functionCall)->elist;
                                            (yyvsp[0].functionCall)->elist = (yyvsp[-1].exprValue);

                                            (yyvsp[-1].exprValue) = emit_if_table_item(symTable, scope, member_expr(symTable, scope, (yyvsp[-1].exprValue), orig_name));
                                        }

                                        (yyval.exprValue) = make_call(symTable, scope, (yyvsp[-1].exprValue), reverse_elist(&(yyvsp[0].functionCall)->elist));
                                    }
#line 2619 "parser.c"
    break;

  case 61:
#line 812 "parser.y"
                                                                                                      {
                                                        Expr *g = (yyvsp[-4].exprValue);
                                                        (yyval.exprValue) = make_call(symTable, scope, g, reverse_elist(&(yyvsp[-1].exprValue)));
                                                                                                        }
#line 2628 "parser.c"
    break;

  case 62:
#line 818 "parser.y"
                                {(yyval.functionCall) = (yyvsp[0].functionCall);}
#line 2634 "parser.c"
    break;

  case 63:
#line 819 "parser.y"
                                {(yyval.functionCall) = (yyvsp[0].functionCall);}
#line 2640 "parser.c"
    break;

  case 64:
#line 822 "parser.y"
                                                            {
                                                                (yyval.functionCall) = function_call(0, NULL, scope, (yyvsp[-1].exprValue));
                                                            }
#line 2648 "parser.c"
    break;

  case 65:
#line 826 "parser.y"
                                                                        {
                                                                            (yyval.functionCall) = function_call(1, (yyvsp[-3].strValue), scope, (yyvsp[-1].exprValue));
                                                                        }
#line 2656 "parser.c"
    break;

  case 66:
#line 830 "parser.y"
                                            {
                                                mk_bool_vmasm((yyvsp[0].exprValue));
                                                (yyval.exprValue) = (yyvsp[0].exprValue);
                                            }
#line 2665 "parser.c"
    break;

  case 67:
#line 834 "parser.y"
                                            {
                                                Expr *head = (yyvsp[-2].exprValue);

                                                head->next = (yyvsp[0].exprValue);

                                                (yyval.exprValue) = head;
                                            }
#line 2677 "parser.c"
    break;

  case 68:
#line 842 "parser.y"
                    {
                        (yyval.exprValue) = nil_expr();
                    }
#line 2685 "parser.c"
    break;

  case 69:
#line 848 "parser.y"
                    {
                        int i = 0;
                        Expr* t = expr(NEWTABLE_E);
                        t->sym  = new_temp(symTable, scope);
                        emit(TABLECREATE_I,t,NULL,NULL,next_quad(),yylineno);
                        Expr* tmp = (yyvsp[-1].exprValue);
                        while(tmp != NULL){
                            emit(TABLESETELEM_I,t,num_expr(i++),tmp,next_quad(),yylineno);
                            tmp = tmp->next;
                        }
                        (yyval.exprValue) = t;
                    }
#line 2702 "parser.c"
    break;

  case 70:
#line 861 "parser.y"
                    {
                        Expr* t = expr(NEWTABLE_E);
                        t->sym  = new_temp(symTable, scope);
                        emit(TABLECREATE_I, t, NULL, NULL, next_quad(), yylineno);
                        Expr* tmp = (yyvsp[-1].exprValue);
                        while(tmp != NULL){
                            emit(TABLESETELEM_I, t, tmp->index, tmp->next_index, next_quad(), yylineno);
                            tmp = tmp->next;
                        }
                        (yyval.exprValue) = t;
                    }
#line 2718 "parser.c"
    break;

  case 71:
#line 875 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 2726 "parser.c"
    break;

  case 72:
#line 879 "parser.y"
                    {
                        Expr* tmp = (yyvsp[-2].exprValue);
                        while(tmp->next != NULL){
                            tmp = tmp->next;
                        }
                        tmp->next   = (yyvsp[0].exprValue);
                        (yyval.exprValue) = (yyvsp[-2].exprValue);
                    }
#line 2739 "parser.c"
    break;

  case 73:
#line 890 "parser.y"
                    {
                        mk_bool_vmasm((yyvsp[-1].exprValue));
                        (yyval.exprValue)=expr(NEWTABLE_E);
                        (yyval.exprValue)->index= (yyvsp[-3].exprValue);
                        (yyval.exprValue)->next_index  = (yyvsp[-1].exprValue);
                    }
#line 2750 "parser.c"
    break;

  case 74:
#line 899 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                    }
#line 2758 "parser.c"
    break;

  case 75:
#line 903 "parser.y"
                    {
                        (yyval.stmtValue) = (yyvsp[-1].stmtValue);
                    }
#line 2766 "parser.c"
    break;

  case 76:
#line 909 "parser.y"
                    {
                        scope++; // Up scope
                    }
#line 2774 "parser.c"
    break;

  case 77:
#line 914 "parser.y"
                    {
                        // Scope down and hide old symbols
                        scope_down(symTable);
                    }
#line 2783 "parser.c"
    break;

  case 78:
#line 920 "parser.y"
                    {
                        (yyval.stmtValue) = (yyvsp[0].stmtValue);
                    }
#line 2791 "parser.c"
    break;

  case 79:
#line 924 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->breaklist = llist_merge((yyvsp[-1].stmtValue)->breaklist, (yyvsp[0].stmtValue)->breaklist);
                        (yyval.stmtValue)->contlist = llist_merge((yyvsp[-1].stmtValue)->contlist, (yyvsp[0].stmtValue)->contlist);
                    }
#line 2801 "parser.c"
    break;

  case 80:
#line 931 "parser.y"
                                           {scope++;}
#line 2807 "parser.c"
    break;

  case 81:
#line 931 "parser.y"
                                                             {enterscopespace(); resetfunctionlocalsoffset();}
#line 2813 "parser.c"
    break;

  case 82:
#line 932 "parser.y"
                    {    
                        scope--; 
                        _func_count++;

                        // Push function to stack
                        if((yyvsp[-5].exprValue) && (yyvsp[-5].exprValue)->sym)
                            push(_call_stack, (void*)(yyvsp[-5].exprValue)->sym);
                        //printCallStack(stack, yylineno);
                    }
#line 2827 "parser.c"
    break;

  case 83:
#line 942 "parser.y"
                        {
                            _func_count--;
                            exitscopespace();
                            
                            restorecurrscopeoffset(pop_and_top_offset(scopeoffsetstack));

                            SymTableEntry *last = (SymTableEntry*)top(_call_stack);

                            // Removing function from stack
                            if((yyvsp[-7].exprValue) && (yyvsp[-7].exprValue)->sym)
                                pop(_call_stack);

                            emit(FUNCEND_I, sym_expr(last), 0, 0, 0, yylineno);
                            (yyval.exprValue) = (yyvsp[-7].exprValue);
                        }
#line 2847 "parser.c"
    break;

  case 84:
#line 959 "parser.y"
                            {
                                SymTableEntry *e;

                                _func_name = (yyvsp[0].strValue);

                                // Search for libfunc
                                if((e = function_lookup(symTable, (yyvsp[0].strValue), scope)) == NULL){

                                    // Check libfuncs
                                    if((e = lookup(symTable, (yyvsp[0].strValue), 0, LIB_FUNC)) != NULL){
                                        printf("input:%d: error: shadowing of library function %s is not permitted\n", yylineno, (yyvsp[0].strValue));
                                        _valid_comp = 0;
                                        YYABORT;
                                    }else{
                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, USER_FUNC));
                                    }
                                }else{
                                    if(e->type == USER_FUNC)
                                        printf("input:%d: error: duplicate user function %s, first defined in line %d\n", yylineno, (yyvsp[0].strValue), e->value.funcValue->line);
                                    else if(e->type == LIB_FUNC)
                                        printf("input:%d: error: shadowing of library function %s is not permitted\n", yylineno, (yyvsp[0].strValue));
                                    else
                                        printf("input:%d: error: function %s has conflicting type with variable %s first defined in line %d\n", yylineno, (yyvsp[0].strValue), e->value.varValue->name, e->value.varValue->line);
                                    _valid_comp = 0;
                                    YYABORT;
                                    (yyval.exprValue) = NULL;
                                }

                                if((yyval.exprValue))
                                    emit(FUNCSTART_I, (yyval.exprValue), 0, 0, 0, yylineno);


                                push_offset(scopeoffsetstack, currscopeoffset());
                                
                                enterscopespace(); 
                                resetformalargsoffset();
                            }
#line 2889 "parser.c"
    break;

  case 85:
#line 996 "parser.y"
                            {  
                                char *s;
                                s = (char *)malloc(8 * sizeof(char));
                                _func_name = s;
     
                                sprintf(s, "$%d", _anon_func_counter);

                                (yyval.exprValue) = sym_expr(insert(symTable, s, scope, yylineno, USER_FUNC));

                                _anon_func_counter++;

                                emit(FUNCSTART_I, (yyval.exprValue), 0, 0, 0, yylineno);
                                push_offset(scopeoffsetstack, currscopeoffset());

                                enterscopespace(); 
                                resetformalargsoffset();
                            }
#line 2911 "parser.c"
    break;

  case 86:
#line 1014 "parser.y"
                            {
                                (yyval.exprValue) = num_expr((yyvsp[0].numValue));
                            }
#line 2919 "parser.c"
    break;

  case 87:
#line 1017 "parser.y"
                            {   
                                (yyval.exprValue) = string_expr((yyvsp[0].strValue));
                            }
#line 2927 "parser.c"
    break;

  case 88:
#line 1020 "parser.y"
                            {
                                (yyval.exprValue) = nil_expr();
                            }
#line 2935 "parser.c"
    break;

  case 89:
#line 1023 "parser.y"
                            {
                                (yyval.exprValue) = bool_expr(1);
                            }
#line 2943 "parser.c"
    break;

  case 90:
#line 1026 "parser.y"
                            {
                                (yyval.exprValue) = bool_expr(0);
                            }
#line 2951 "parser.c"
    break;

  case 93:
#line 1032 "parser.y"
                  {}
#line 2957 "parser.c"
    break;

  case 94:
#line 1036 "parser.y"
                    {
                        SymTableEntry *e, *a;
                        (yyval.exprValue) = NULL;

                        if((e = lookup(symTable, (yyvsp[0].strValue), 0, LIB_FUNC)) != NULL){
                            printf("input:%d: error: argument %s in function %s attempting to shadow a library function\n", yylineno, (yyvsp[0].strValue), _func_name);
                            _valid_comp = 0;
                            YYABORT;
                        }else{
                            if((e = lookup(symTable, _func_name, scope - 1, USER_FUNC)) != NULL){
                                if((a = lookup_active(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                    (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, ARGUMENT_VAR));
                                }else{
                                    printf("input:%d: error: duplicate argument %s in function %s\n", yylineno, (yyvsp[0].strValue), e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            } 
                        }                         
                    }
#line 2982 "parser.c"
    break;

  case 95:
#line 1058 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = (yyvsp[0].stmtValue)->contlist;
                        (yyval.stmtValue)->breaklist = (yyvsp[0].stmtValue)->breaklist;
                        patch_label((yyvsp[-1].numValue), next_quad());
                    }
#line 2993 "parser.c"
    break;

  case 96:
#line 1065 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = (yyvsp[-2].stmtValue)->contlist;
                        (yyval.stmtValue)->breaklist = (yyvsp[-2].stmtValue)->breaklist;
                        patch_label((yyvsp[-3].numValue), (yyvsp[-1].numValue) + 1);
                        patch_label((yyvsp[-1].numValue), next_quad());
                    }
#line 3005 "parser.c"
    break;

  case 97:
#line 1075 "parser.y"
                    {
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 3014 "parser.c"
    break;

  case 98:
#line 1080 "parser.y"
                                    { _in_control++; }
#line 3020 "parser.c"
    break;

  case 99:
#line 1081 "parser.y"
                    {
                        mk_bool_vmasm((yyvsp[-1].exprValue));

                        emit(IF_EQ_I, NULL, (yyvsp[-1].exprValue), bool_expr(1), next_quad() + 2, yylineno);
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 3032 "parser.c"
    break;

  case 100:
#line 1090 "parser.y"
                    {
                        (yyval.numValue) = next_quad();
                    }
#line 3040 "parser.c"
    break;

  case 101:
#line 1094 "parser.y"
                                 { _in_control++;}
#line 3046 "parser.c"
    break;

  case 102:
#line 1095 "parser.y"
                    {
                        mk_bool_vmasm((yyvsp[-1].exprValue));
                        emit(IF_EQ_I, NULL, (yyvsp[-1].exprValue), bool_expr(1), next_quad() + 2, yylineno);
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 3057 "parser.c"
    break;

  case 103:
#line 1103 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = (yyvsp[0].stmtValue)->contlist;
                        (yyval.stmtValue)->breaklist = (yyvsp[0].stmtValue)->breaklist;

                        emit(JUMP_I, NULL, NULL, NULL, (yyvsp[-2].numValue), yylineno);
                        patch_label((yyvsp[-1].numValue), next_quad());
                        llist_patch((yyvsp[0].stmtValue)->breaklist, next_quad());
                        llist_patch((yyvsp[0].stmtValue)->contlist, (yyvsp[-2].numValue));
                    }
#line 3072 "parser.c"
    break;

  case 104:
#line 1115 "parser.y"
                    {
                        (yyval.exprValue) = bool_expr(1);
                        mk_bool_vmasm((yyvsp[-1].exprValue));
                        (yyval.exprValue)->test = (yyvsp[-2].numValue);
                        (yyval.exprValue)->enter = next_quad();
                        emit(IF_EQ_I, NULL, (yyvsp[-1].exprValue), bool_expr(1), next_quad(), yylineno);
                    }
#line 3084 "parser.c"
    break;

  case 105:
#line 1123 "parser.y"
                                     { ++_in_control;}
#line 3090 "parser.c"
    break;

  case 106:
#line 1126 "parser.y"
                    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = (yyvsp[-1].stmtValue)->contlist;
                        (yyval.stmtValue)->breaklist = (yyvsp[-1].stmtValue)->breaklist;

                        patch_label((yyvsp[-6].exprValue)->enter, (yyvsp[-2].numValue) + 1);
                        patch_label((yyvsp[-5].numValue), next_quad());
                        patch_label((yyvsp[-2].numValue), (yyvsp[-6].exprValue)->test);
                        patch_label((yyvsp[0].numValue), (yyvsp[-5].numValue) + 1);

                        llist_patch((yyvsp[-1].stmtValue)->breaklist,next_quad());
                        llist_patch((yyvsp[-1].stmtValue)->contlist,(yyvsp[-5].numValue)+1);
                    }
#line 3108 "parser.c"
    break;

  case 107:
#line 1140 "parser.y"
                    {
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 3117 "parser.c"
    break;

  case 108:
#line 1146 "parser.y"
                    {
                        emit(RET_I, NULL, NULL, NULL, next_quad(), yylineno);
                    }
#line 3125 "parser.c"
    break;

  case 109:
#line 1150 "parser.y"
                    {
                        mk_bool_vmasm((yyvsp[-1].exprValue));
                        emit(RET_I, (yyvsp[-1].exprValue), NULL, NULL, next_quad(), yylineno);
                        (yyval.stmtValue) = (yyvsp[-1].exprValue);
                    }
#line 3135 "parser.c"
    break;


#line 3139 "parser.c"

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
#line 1159 "parser.y"


int yyerror(char *yaccProvidedMessage){
    printf("alpha: %s\n", yaccProvidedMessage);
    return 1;
}

void printSymTable(SymTable *symTable){
    SymTableEntry *e;
    int i;

    printf("----------------------------------------------------------------\n");
    printf("Symbol Table  [Name                ] [Line] [Scope] [Type      ]\n");
    printf("----------------------------------------------------------------\n");
    for(i = 0; i < SIZE; i++){
        e = symTable->table[i];

        if(e == NULL) continue;

        while(e != NULL){
            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.varValue->name, e->value.varValue->line, e->value.varValue->scope, typeToString[e->type]);
            }else{
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.funcValue->name, e->value.funcValue->line, e->value.funcValue->scope, typeToString[e->type]);
            }

            e = e->nextEntry;
        }
    }
    printf("----------------------------------------------------------------\n");
}

void printByScope(SymTable *symTable){
    SymTableEntry *scopeIter, *e;
    int scope = 0;

    printf("----------------------------------------------------------------\n");
    printf("Symbol Table  [Name                ] [Line] [Scope] [Type      ]\n");
    printf("----------------------------------------------------------------\n");
    scopeIter = symTable->scopeChain;

    while(scopeIter != NULL){
        e = scopeIter;
        printf("|                          SCOPE %d                             |\n", scope);
        printf("----------------------------------------------------------------\n");

        while(e != NULL){

            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.varValue->name, e->value.varValue->line, e->value.varValue->scope, typeToString[e->type]);
            }else{
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.funcValue->name, e->value.funcValue->line, e->value.funcValue->scope, typeToString[e->type]);
            }
            
            e = e->nextInScope;
        }

        scopeIter = scopeIter->nextScope;
        if(scopeIter != NULL){
            if(scopeIter->type == LOCAL_VAR || scopeIter->type == GLOBAL_VAR || scopeIter->type == ARGUMENT_VAR){
                scope = scopeIter->value.varValue->scope;
            }else{
                scope = scopeIter->value.funcValue->scope;
            }
        }


        printf("----------------------------------------------------------------\n");
    }

    return;
}

int main(int argc, char **argv){
    if(argc > 1){
        if(!(yyin = fopen(argv[1], "r"))){
            printf("File not found\n");
            exit(0);
        }
    }else{
        yyin = stdin;

    }

    init_quads();
    symTable = init_sym_table();
    _call_stack = stack();
    scopeoffsetstack = init_offset_stack();
    yyparse();

    if(!_valid_comp){
        printf("alpha: compilation failed\n");
        return 0;
    }

    //printSymTable(symTable);
    printByScope(symTable);
    printQuads();

    return 0;
}
