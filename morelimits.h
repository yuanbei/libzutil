/**
 * copyright 2002, 2003 Bryce "Zooko" Wilcox-O'Hearn
 * mailto:zooko@zooko.com
 *
 * See the end of this file for the free software, open source license (BSD-style).
 */
#ifndef __INCL_morelimits_h
#define __INCL_morelimits_h

#include "morelimitsimp.h" /* implementation stuff that you needn't see in order to use the library */

#include <stddef.h>
#include <limits.h>

#include "zutil.h"

static char const* const morelimits_h_cvsid = "$Id: morelimits.h,v 1.5 2003/12/14 17:48:59 zooko Exp $";

static int const morelimits_vermaj = 0;
static int const morelimits_vermin = 9;
static int const morelimits_vermicro = 0;
static char const* const morelimits_vernum = "0.9.0";

/*
 * The following are not defined in the standard C library's "limits.h", but they should be!
 */
#define SIZE_T_MAX Z_MAX(size_t)
#define SIZE_T_MIN Z_MIN(size_t)

#define TIME_T_MAX Z_MAX(time_t)
#define TIME_T_MIN Z_MIN(time_t)

/*
 * The following are not defined in the standard C library's "limits.h", 
 * presumably because you could just write "0" instead.
 */
#define ULONG_MIN Z_MIN(unsigned long)
#define UINT_MIN Z_MIN(unsigned int)
#define USHRT_MIN Z_MIN(unsigned short)
#define UCHAR_MIN Z_MIN(unsigned char)
#define ULLONG_MIN Z_MIN(unsigned long long)

/*
 * All of the following should be defined in the standard C library's "limits.h" 
 * header.  They are included here because some limits.h's lack some of them 
 * (the long long ones), and in order to check that my Z_MAX and Z_MIN macros 
 * and your system's <limits.h> agree!  (test.c tests this.)
 */
#define Z_ULLONG_MAX Z_MAX(unsigned long long)
#define Z_ULONG_MAX Z_MAX(unsigned long)
#define Z_UINT_MAX Z_MAX(unsigned int)
#define Z_USHRT_MAX Z_MAX(unsigned short)
#define Z_UCHAR_MAX Z_MAX(unsigned char)

#define Z_LLONG_MAX Z_MAX(long long)
#define Z_LONG_MAX Z_MAX(long)
#define Z_INT_MAX Z_MAX(int)
#define Z_SHRT_MAX Z_MAX(short)
#define Z_CHAR_MAX Z_MAX(char)

#define Z_LLONG_MIN Z_MIN(long long)
#define Z_LONG_MIN Z_MIN(long)
#define Z_INT_MIN Z_MIN(int)
#define Z_SHRT_MIN Z_MIN(short)
#define Z_CHAR_MIN Z_MIN(char)

#define Z_SCHAR_MAX Z_MAX(signed char)
#define Z_SCHAR_MIN Z_MIN(signed char)

#ifndef ULLONG_MAX
#define ULLONG_MAX Z_ULLONG_MAX
#endif

#ifndef ULONG_MAX
#define ULONG_MAX Z_ULONG_MAX
#endif

#ifndef UINT_MAX
#define UINT_MAX Z_UINT_MAX
#endif

#ifndef USHRT_MAX
#define USHRT_MAX Z_USHRT_MAX
#endif

#ifndef USHRT_MAX
#define USHRT_MAX Z_USHRT_MAX
#endif

#ifndef UCHAR_MAX
#define UCHAR_MAX Z_UCHAR_MAX
#endif

#ifndef LLONG_MAX
#define LLONG_MAX Z_LLONG_MAX
#endif

#ifndef LONG_MAX
#define LONG_MAX Z_LONG_MAX
#endif

#ifndef INT_MAX
#define INT_MAX Z_INT_MAX
#endif

#ifndef SHRT_MAX
#define SHRT_MAX Z_SHRT_MAX
#endif

#ifndef CHAR_MAX
#define CHAR_MAX Z_CHAR_MAX
#endif

#ifndef LLONG_MIN
#define LLONG_MIN Z_LLONG_MIN
#endif

#ifndef LONG_MIN
#define LONG_MIN Z_LONG_MIN
#endif

#ifndef INT_MIN
#define INT_MIN Z_INT_MIN
#endif

#ifndef SHRT_MIN
#define SHRT_MIN Z_SHRT_MIN
#endif

#ifndef CHAR_MIN
#define CHAR_MIN Z_CHAR_MIN
#endif

#ifndef SCHAR_MAX
#define SCHAR_MAX Z_SCHAR_MAX
#endif

#ifndef SCHAR_MIN
#define SCHAR_MIN Z_SCHAR_MIN
#endif

#endif /* #ifndef __INCL_morelimits_h */

/**
 * Copyright (c) 2002, 2003 Bryce "Zooko" Wilcox-O'Hearn
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software to deal in this software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of this software, and to permit
 * persons to whom this software is furnished to do so, subject to the following
 * conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of this software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
