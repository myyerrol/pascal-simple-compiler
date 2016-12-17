/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2058 of yacc.c  */
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


/* Line 2058 of yacc.c  */
#line 109 "pascal_simple_compiler_yacc.h"
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
