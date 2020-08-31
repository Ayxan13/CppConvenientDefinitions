/* Ayxan Haqverdili - 2020 August 29 */
#pragma once

/*************************************************************
 * Convenient definitions that are easy to type and you can  *
 *   just rely on existence and forget about the details.    *
 *************************************************************/

#ifdef __cplusplus
#include <cstdint>
#define STD ::std:: /* later undef'ed */
#else 
#include <stdint.h>
#include <stdbool.h> /* bool/true/false */
#define STD /* later undef'ed */
#endif /* __cplusplus */

/* Fixed size integers */
typedef STD int64_t   i64;
typedef STD uint64_t  u64;
typedef STD int32_t   i32;
typedef STD uint32_t  u32;
typedef STD uint16_t  u16;
typedef STD int16_t   i16;
typedef STD int8_t    i8;
typedef STD uint8_t   u8;
typedef     void      u0; /* Void is kind of an integer that doesn't exist */

/* Abstract integers */
typedef STD intptr_t  isize; /* Signed size type for object size / array indexing */
typedef STD uintptr_t usize; /* Unsigned size type for object size / array indexing */
typedef     wchar_t   wchar;

/* Floating-point */
typedef     float     f32;
typedef     double    f64;

#undef STD
