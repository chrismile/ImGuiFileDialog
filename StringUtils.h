#pragma once

// https://stackoverflow.com/questions/56833000/c20-with-u8-char8-t-and-stdstring
#if defined(__cpp_char8_t)
template<typename T>
inline const char* u8Cpp20(T&& t) noexcept
{
#ifdef _MSC_VER
    #pragma warning (disable: 26490)
   return reinterpret_cast<const char*>(t);
#pragma warning (default: 26490)
#else // _MSC_VER
    return reinterpret_cast<const char*>(t);
#endif
}
#define U8(x) u8Cpp20(u8##x)
#else
#define U8(x) u8##x
#endif
