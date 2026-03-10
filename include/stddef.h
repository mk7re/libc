#ifndef STDDEF_H
#define STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long size_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

#define offsetof(type, member) ((size_t)&(((type *)0)->member))

#ifdef __cplusplus
}
#endif

#endif /* STDDEF_H */
