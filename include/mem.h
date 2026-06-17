#ifndef MEM_H
#define MEM_H

#ifdef __cplusplus
extern "C" {
#endif

void __rt_memclr_w(void * ptr, unsigned int size);
void __rt_memcpy_w(void * dest, void * src, unsigned int size);

#ifdef __cplusplus
}
#endif

#endif /* MEM_H */
