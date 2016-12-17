%option noyywrap yylineno

%{
#include "pascal_simple_compiler_yacc.h"
%}

LETTER [A-Za-z_]
ALNUM  [A-Za-z0-9_]
DIGIT  [0-9]
SPACE  [\t\n ]

%%
[Bb][eE][Gg][iI][Nn]                  { ECHO; return STATEMENT_BEGIN; }
[Ee][Nn][Dd]                          { ECHO; return STATEMENT_END; }
[Pp][Rr][Oo][Gg][Rr][Aa][Mm]          { ECHO; return PROGRAM; }
[Aa][Nn][Dd]                          { ECHO; return AND; }
[Oo][Rr]                              { ECHO; return OR; }
[Nn][Oo][Tt]                          { ECHO; return NOT; }
[Ii][Ff]                              { ECHO; return IF; }
[Ee][Ll][Ss][Ee]                      { ECHO; return ELSE; }
[Tt][Hh][Ee][Nn]                      { ECHO; return THEN; }
[Ww][Hh][Ii][Ll][Ee]                  { ECHO; return WHILE; }
[Dd][Oo]                              { ECHO; return DO; }
[Vv][Aa][Rr]                          { ECHO; return VAR; }
[Ii][Nn][Tt][Ee][Gg][Ee][Rr]          { ECHO; return INTEGER; }
[Rr][Ee][Aa][Ll]                      { ECHO; return REAL; }
":="                                  { ECHO; return ASSIGN; }
"+"                                   { ECHO; return ADD; }
"-"                                   { ECHO; return SUB; }
"*"                                   { ECHO; return MUL; }
"/"                                   { ECHO; return DIV; }
"("                                   { ECHO; return LP; }
")"                                   { ECHO; return RP; }
"<"                                   { ECHO; return LT; }
"<="                                  { ECHO; return LE; }
">"                                   { ECHO; return GT; }
">="                                  { ECHO; return GE; }
"="                                   { ECHO; return EQ; }
"<>"                                  { ECHO; return NE; }
":"                                   { ECHO; return COLON; }
";"                                   { ECHO; return SEMICOLON; }
"\."                                  { ECHO; return DOT; }
","                                   { ECHO; return COMMA; }
{SPACE}+                              { ECHO; }
{DIGIT}+ {
    ECHO;
    yylval.string = yytext;
    return NUMBER_INTEGER;
}
{DIGIT}+\.{DIGIT}*|{DIGIT}*\.{DIGIT}+ {
    ECHO;
    yylval.string = yytext;
    return NUMBER_REAL;
}
{LETTER}{ALNUM}*                      {
    ECHO;
    yylval.string = yytext;
    return IDENTIFIER;
}
.                                     { ECHO; return ERROR_STRING; }

%%
