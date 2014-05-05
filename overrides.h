#ifndef DEFS_H
#define DEFS_H
/* for irix GL/gl.h */
#define _LANGUAGE_C
/* irix has a strange gettimeofday signature */
typedef struct timezone* __timezone_ptr_t;
/* IDA stuff */
#define __cdecl
#define __int8  uint8_t
#define __int16 uint16_t
#define __int32 uint32_t
#define __int64 uint64_t
/* override pycparser's fake headers */
typedef long* time_t;
typedef unsigned uintptr_t;
typedef unsigned char uint8_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed long long int64_t;
typedef unsigned int size_t;
#endif
