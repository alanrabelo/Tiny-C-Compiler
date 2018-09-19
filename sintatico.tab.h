/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison interface for Yacc-like parsers in C

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
