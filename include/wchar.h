#ifndef WCHAR_H
#define WCHAR_H

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

int __c89vsnprintf (char * s, unsigned int n, const char * format, va_list arg );

int __c89vswprintf (wchar_t * ws, unsigned int len, const wchar_t * format, va_list arg );

#ifdef __cplusplus
}
#endif

#endif /* WCHAR_H */
