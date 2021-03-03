/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_VAR = 258,                   /* T_VAR  */
    T_DEF = 259,                   /* T_DEF  */
    T_KEY = 260,                   /* T_KEY  */
    T_ID = 261,                    /* T_ID  */
    T_NUM = 262,                   /* T_NUM  */
    T_LBR = 263,                   /* T_LBR  */
    T_RBR = 264,                   /* T_RBR  */
    T_STR = 265,                   /* T_STR  */
    T_SHA = 266,                   /* T_SHA  */
    T_LCG = 267,                   /* T_LCG  */
    T_LOP = 268,                   /* T_LOP  */
    T_OP1 = 269,                   /* T_OP1  */
    T_OP2 = 270,                   /* T_OP2  */
    T_OP3 = 271,                   /* T_OP3  */
    T_OP4 = 272,                   /* T_OP4  */
    T_IF = 273,                    /* T_IF  */
    T_ELSE = 274,                  /* T_ELSE  */
    T_IN = 275,                    /* T_IN  */
    T_LET = 276,                   /* T_LET  */
    T_CONSOLE = 277,               /* T_CONSOLE  */
    T_DOCUMENT = 278,              /* T_DOCUMENT  */
    T_FOR = 279,                   /* T_FOR  */
    T_DO = 280,                    /* T_DO  */
    T_WHILE = 281                  /* T_WHILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_VAR 258
#define T_DEF 259
#define T_KEY 260
#define T_ID 261
#define T_NUM 262
#define T_LBR 263
#define T_RBR 264
#define T_STR 265
#define T_SHA 266
#define T_LCG 267
#define T_LOP 268
#define T_OP1 269
#define T_OP2 270
#define T_OP3 271
#define T_OP4 272
#define T_IF 273
#define T_ELSE 274
#define T_IN 275
#define T_LET 276
#define T_CONSOLE 277
#define T_DOCUMENT 278
#define T_FOR 279
#define T_DO 280
#define T_WHILE 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
