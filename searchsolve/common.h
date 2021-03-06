/*
 *    Copyright 2009 Jared Hance
 *
 *    This file is part of Searchsolve.
 *
 *    Searchsolve is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    Searchsolve is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Searchsolve.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef COMMON_H
#define COMMON_H

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if HAVE_STDBOOL_H
# include <stdbool.h>
#else
# ifndef HAVE__BOOL
#  define _Bool signed char
# endif
# define bool _Bool
# define true 1
# define false 0
# define __bool_true_false_are_defined 1
#endif

#if HAVE_UNISTD_H
#include <unistd.h>
#endif

#if HAVE_GETOPT_H
#include <getopt.h>
#endif

#endif /* COMMON_H */
