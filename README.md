# Convenient definitions you can easily type. 

Instead of `std::uint64_t`, you do `u64`. Inspired by conveniently short and descriptive [type names in Rust language](https://doc.rust-lang.org/book/ch03-02-data-types.html).

# Type aliases

## Integers

Length | Signed | Unsigned
------|----|---------------
8-bit | `i8` | `u8`
16-bit | `i16` | `u16`
32-bit | `i32` | `u32`
64-bit | `i64` | `u64`
arch | `isize` | `usize`

`i` and `u` prefixes denote the type's signedness. Additionally, `isize` and `usize` are 32 or 64 bits depending on architecture.

## Floating-Point Types

* `f32`: type aliase for `float`
* `f64`: type aliase for `double`

## Additional

* `wchar`: type aliase for `wchar_t`
* `u0`: type aliase for `void`
* For the C language, includes `stdbool.h`

# Macros

* None for now.