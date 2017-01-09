#ifndef SIMPLEAMQPCLIENT_UTIL_H
#define SIMPLEAMQPCLIENT_UTIL_H
/*
 * ***** BEGIN LICENSE BLOCK *****
 * Version: MIT
 *
 * Copyright (c) 2010-2013 Alan Antonuk
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * ***** END LICENSE BLOCK *****
 */

#if defined(_WIN32) || defined(__CYGWIN__)
# define SAC_EXPORT_SYMBOL __declspec(dllexport)
# define SAC_IMPORT_SYMBOL __declspec(dllimport)
#else
# if __GNUC__ >= 4
#  define SAC_EXPORT_SYMBOL __attribute__((visibility("default")))
#  define SAC_IMPORT_SYMBOL __attribute__((visibility("default")))
# else
#  define SAC_EXPORT_SYMBOL
#  define SAC_IMPORT_SYMBOL
# endif
#endif

#ifndef SIMPLEAMQPCLIENT_STATIC
# ifdef SimpleAmqpClient_EXPORTS
#  define SIMPLEAMQPCLIENT_EXPORT SAC_EXPORT_SYMBOL
# else
#  define SIMPLEAMQPCLIENT_EXPORT SAC_IMPORT_SYMBOL
# endif
#else
# define SIMPLEAMQPCLIENT_EXPORT
#endif

#endif  // SIMPLEAMQPCLIENT_UTIL_H
