/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_LITELOG_PARSER_TAB_H_INCLUDED
# define YY_LITELOG_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef LITELOGDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define LITELOGDEBUG 1
#  else
#   define LITELOGDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define LITELOGDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined LITELOGDEBUG */
#if LITELOGDEBUG
extern int litelogdebug;
#endif
/* "%code requires" blocks.  */
#line 7 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
   // #include "lex.litelog.h"

#line 63 "parser.tab.h"

/* Token kinds.  */
#ifndef LITELOGTOKENTYPE
# define LITELOGTOKENTYPE
  enum litelogtokentype
  {
    LITELOGEMPTY = -2,
    END = 0,                       /* "end of file"  */
    LITELOGerror = 256,            /* error  */
    LITELOGUNDEF = 257,            /* "invalid token"  */
    STRING = 258,                  /* "symbol"  */
    IDENT = 259,                   /* "identifier"  */
    NUMBER = 260,                  /* "number"  */
    UNSIGNED = 261,                /* "unsigned number"  */
    FLOAT = 262,                   /* "float"  */
    IF = 263,                      /* ":-"  */
    UNDERSCORE = 264,              /* "_"  */
    LPAREN = 265,                  /* "("  */
    RPAREN = 266,                  /* ")"  */
    COMMA = 267,                   /* ","  */
    DOT = 268                      /* "."  */
  };
  typedef enum litelogtokentype litelogtoken_kind_t;
#endif

/* Value type.  */
#if ! defined LITELOGSTYPE && ! defined LITELOGSTYPE_IS_DECLARED
union LITELOGSTYPE
{
#line 51 "parser.y"

	int num;
	char *str;
	struct sexpr *node;

#line 99 "parser.tab.h"

};
typedef union LITELOGSTYPE LITELOGSTYPE;
# define LITELOGSTYPE_IS_TRIVIAL 1
# define LITELOGSTYPE_IS_DECLARED 1
#endif




int litelogparse (void *scanner);


#endif /* !YY_LITELOG_PARSER_TAB_H_INCLUDED  */
