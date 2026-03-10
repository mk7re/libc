#ifndef WCHAR_H
#define WCHAR_H

#include <stddef.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

int __c89vsnprintf (char * s, size_t n, const char * format, va_list arg );

int __c89vswprintf (wchar_t * ws, size_t len, const wchar_t * format, va_list arg );

#ifdef __cplusplus
}
#endif

#endif /* WCHAR_H */
