/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF = 258,
    INT = 259,
    CHAR = 260,
    FLOAT = 261,
    DOUBLE = 262,
    LONG = 263,
    SHORT = 264,
    SIGNED = 265,
    UNSIGNED = 266,
    STRUCT = 267,
    RETURN = 268,
    MAIN = 269,
    VOID = 270,
    WHILE = 271,
    FOR = 272,
    DO = 273,
    BREAK = 274,
    ENDIF = 275,
    identifier = 276,
    integer_constant = 277,
    string_constant = 278,
    float_constant = 279,
    character_constant = 280,
    ELSE = 281,
    leftshift_assignment_operator = 282,
    rightshift_assignment_operator = 283,
    XOR_assignment_operator = 284,
    OR_assignment_operator = 285,
    AND_assignment_operator = 286,
    modulo_assignment_operator = 287,
    multiplication_assignment_operator = 288,
    division_assignment_operator = 289,
    addition_assignment_operator = 290,
    subtraction_assignment_operator = 291,
    assignment_operator = 292,
    OR_operator = 293,
    AND_operator = 294,
    pipe_operator = 295,
    caret_operator = 296,
    amp_operator = 297,
    equality_operator = 298,
    inequality_operator = 299,
    lessthan_assignment_operator = 300,
    lessthan_operator = 301,
    greaterthan_assignment_operator = 302,
    greaterthan_operator = 303,
    leftshift_operator = 304,
    rightshift_operator = 305,
    add_operator = 306,
    subtract_operator = 307,
    multiplication_operator = 308,
    division_operator = 309,
    modulo_operator = 310,
    SIZEOF = 311,
    tilde_operator = 312,
    exclamation_operator = 313,
    increment_operator = 314,
    decrement_operator = 315
  };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define ENDIF 275
#define identifier 276
#define integer_constant 277
#define string_constant 278
#define float_constant 279
#define character_constant 280
#define ELSE 281
#define leftshift_assignment_operator 282
#define rightshift_assignment_operator 283
#define XOR_assignment_operator 284
#define OR_assignment_operator 285
#define AND_assignment_operator 286
#define modulo_assignment_operator 287
#define multiplication_assignment_operator 288
#define division_assignment_operator 289
#define addition_assignment_operator 290
#define subtraction_assignment_operator 291
#define assignment_operator 292
#define OR_operator 293
#define AND_operator 294
#define pipe_operator 295
#define caret_operator 296
#define amp_operator 297
#define equality_operator 298
#define inequality_operator 299
#define lessthan_assignment_operator 300
#define lessthan_operator 301
#define greaterthan_assignment_operator 302
#define greaterthan_operator 303
#define leftshift_operator 304
#define rightshift_operator 305
#define add_operator 306
#define subtract_operator 307
#define multiplication_operator 308
#define division_operator 309
#define modulo_operator 310
#define SIZEOF 311
#define tilde_operator 312
#define exclamation_operator 313
#define increment_operator 314
#define decrement_operator 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
