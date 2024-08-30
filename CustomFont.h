//Header Generated with https://github.com/aiekick/ImGuiFontStudio
//Based on https://github.com/juliettef/IconFontCppHeaders
//for Language c++

#pragma once

#define FONT_ICON_BUFFER_NAME_IGFD IGFD_compressed_data_base85
#define FONT_ICON_BUFFER_SIZE_IGFD 0xf6e

#define ICON_MIN_IGFD 0xf002
#define ICON_MAX_IGFD 0xf1c9

// https://stackoverflow.com/questions/56833000/c20-with-u8-char8-t-and-stdstring
#if defined(__cpp_char8_t)
template<typename T>
const char* u8Cpp20(T&& t) noexcept
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

#define ICON_IGFD_ADD U8("\uf067")
#define ICON_IGFD_BOOKMARK U8("\uf02e")
#define ICON_IGFD_CANCEL U8("\uf00d")
#define ICON_IGFD_CHEVRON_DOWN U8("\uf078")
#define ICON_IGFD_CHEVRON_UP U8("\uf077")
#define ICON_IGFD_DRIVES U8("\uf0a0")
#define ICON_IGFD_EDIT U8("\uf040")
#define ICON_IGFD_FILE U8("\uf15b")
#define ICON_IGFD_FILE_GRID_THUMBNAILS U8("\uf00a")
#define ICON_IGFD_FILE_LIST U8("\uf0c9")
#define ICON_IGFD_FILE_LIST_THUMBNAILS U8("\uf00b")
#define ICON_IGFD_FILE_PIC U8("\uf1c5")
#define ICON_IGFD_FOLDER U8("\uf07b")
#define ICON_IGFD_FOLDER_OPEN U8("\uf07c")
#define ICON_IGFD_LINK U8("\uf1c9")
#define ICON_IGFD_OK U8("\uf00c")
#define ICON_IGFD_REFRESH U8("\uf021")
#define ICON_IGFD_REMOVE U8("\uf068")
#define ICON_IGFD_RESET U8("\uf064")
#define ICON_IGFD_SAVE U8("\uf0c7")
#define ICON_IGFD_SEARCH U8("\uf002")
#define ICON_IGFD_STEP_FORWARD U8("\uf051")
