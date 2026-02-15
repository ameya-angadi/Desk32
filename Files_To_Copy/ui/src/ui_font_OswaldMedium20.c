/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font F:/ESP32/Desk32/Design/assets/Oswald-Medium.ttf -o F:/ESP32/Desk32/Design/assets\ui_font_OswaldMedium20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_OSWALDMEDIUM20
#define UI_FONT_OSWALDMEDIUM20 1
#endif

#if UI_FONT_OSWALDMEDIUM20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xfe, 0xdb, 0x60, 0x7, 0xe0,

    /* U+0022 "\"" */
    0xdf, 0x7d, 0xb6, 0xd8,

    /* U+0023 "#" */
    0x3b, 0x9d, 0xcc, 0xc6, 0x63, 0x37, 0xff, 0xfe,
    0x6e, 0x77, 0x7f, 0xff, 0xec, 0xc6, 0x63, 0x31,
    0xb9, 0xdc, 0xec, 0x0,

    /* U+0024 "$" */
    0x8, 0x8, 0x3e, 0x7e, 0xe7, 0xe7, 0xe6, 0xf0,
    0xf8, 0x78, 0x3c, 0x1e, 0xf, 0x7, 0xe7, 0xe7,
    0xe7, 0x7e, 0x3c, 0x8, 0x8,

    /* U+0025 "%" */
    0x7c, 0x30, 0x1f, 0x1c, 0xe, 0xe6, 0x3, 0xb9,
    0x80, 0xee, 0xe0, 0x3b, 0xb0, 0xe, 0xec, 0x3,
    0xbb, 0x0, 0x7d, 0xcf, 0xe, 0x67, 0xe0, 0x1b,
    0x9c, 0x6, 0xe7, 0x3, 0xb9, 0xc0, 0xce, 0x70,
    0x33, 0x9c, 0x1c, 0x7e, 0x6, 0xf, 0x0,

    /* U+0026 "&" */
    0x3c, 0x1f, 0x8e, 0x73, 0x9c, 0xe7, 0x1b, 0x87,
    0xe0, 0xf0, 0x18, 0xe, 0x37, 0xcf, 0xb3, 0xef,
    0xb9, 0xee, 0x79, 0xff, 0x3c, 0xc0,

    /* U+0027 "'" */
    0xff, 0x80,

    /* U+0028 "(" */
    0x3b, 0xdd, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce,
    0x73, 0x9c, 0xe7, 0x1c, 0xf1, 0x80,

    /* U+0029 ")" */
    0xc7, 0x1c, 0x63, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xe7, 0x39, 0x9d, 0xcc, 0x0,

    /* U+002A "*" */
    0x31, 0x63, 0x7b, 0xe3, 0x8d, 0x9b, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xff, 0x97, 0x0,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xc, 0x30, 0xc6, 0x18, 0x61, 0xc, 0x30, 0xc6,
    0x18, 0x61, 0xc, 0x30, 0xc0,

    /* U+0030 "0" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x9e, 0xfe, 0x3e, 0x0,

    /* U+0031 "1" */
    0x1d, 0xff, 0xf7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c,

    /* U+0032 "2" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x7e, 0x3f, 0x1c, 0x1e,
    0xe, 0xf, 0x7, 0x7, 0x7, 0x83, 0x83, 0x83,
    0xc1, 0xfe, 0xff, 0x0,

    /* U+0033 "3" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x38, 0x1c, 0x1c,
    0x1e, 0xf, 0x3, 0xc0, 0xe0, 0x7e, 0x3f, 0x1f,
    0x8e, 0xfe, 0x3e, 0x0,

    /* U+0034 "4" */
    0xf, 0x3, 0xc1, 0xf0, 0x7c, 0x1f, 0xd, 0xc3,
    0x71, 0xdc, 0x67, 0x19, 0xce, 0x73, 0xff, 0xff,
    0xc1, 0xc0, 0x70, 0x1c, 0x7, 0x0,

    /* U+0035 "5" */
    0xfe, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0, 0xfc, 0xfe,
    0xe7, 0x7, 0x7, 0x7, 0xe7, 0xe7, 0xe7, 0x7e,
    0x3c,

    /* U+0036 "6" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe0, 0xe0, 0xfe,
    0xfe, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x7e,
    0x3c,

    /* U+0037 "7" */
    0xff, 0xfc, 0x38, 0x70, 0xc1, 0x87, 0xe, 0x1c,
    0x30, 0x61, 0xc3, 0x87, 0xc, 0x38, 0x70,

    /* U+0038 "8" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0x66, 0x3e,
    0x7e, 0x66, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x7e,
    0x3c,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0x7f, 0x7f, 0x7, 0x7, 0xe7, 0xe7, 0xe7, 0x7e,
    0x3c,

    /* U+003A ":" */
    0xfc, 0x0, 0x3f, 0xe0,

    /* U+003B ";" */
    0xff, 0x80, 0x0, 0x1f, 0x9f, 0x0,

    /* U+003C "<" */
    0x4, 0x73, 0xfc, 0xc3, 0xc7, 0xc7, 0x4,

    /* U+003D "=" */
    0xff, 0xf0, 0x0, 0xff, 0xf0,

    /* U+003E ">" */
    0x83, 0x8f, 0xf, 0xc, 0xff, 0xb8, 0x80,

    /* U+003F "?" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0x7, 0x7, 0xe,
    0xe, 0x1c, 0x3c, 0x38, 0x38, 0x0, 0x0, 0x38,
    0x38,

    /* U+0040 "@" */
    0x3, 0xf8, 0x7, 0xfe, 0x7, 0x83, 0x87, 0x0,
    0xe7, 0x0, 0x33, 0xe, 0xdd, 0x8f, 0xe7, 0x8e,
    0x73, 0xc7, 0x31, 0xe7, 0x18, 0xf3, 0x8c, 0x79,
    0xc6, 0x3c, 0xe7, 0x36, 0x3f, 0xb3, 0x8e, 0xf0,
    0xc0, 0x0, 0x70, 0x0, 0x1e, 0x4, 0x7, 0xfe,
    0x0, 0xfe, 0x0,

    /* U+0041 "A" */
    0xe, 0x7, 0x81, 0xe0, 0x78, 0x1f, 0x7, 0xc3,
    0xb0, 0xec, 0x3b, 0xc, 0xe3, 0x39, 0xfe, 0x7f,
    0x9c, 0x67, 0x1d, 0x87, 0xe1, 0xc0,

    /* U+0042 "B" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x9d,
    0xfc, 0xff, 0x73, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x9f, 0xfe, 0xfe, 0x0,

    /* U+0043 "C" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x7e, 0x3f, 0x1f,
    0x8e, 0xfe, 0x3e, 0x0,

    /* U+0044 "D" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x9f, 0xfe, 0xfe, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0x87, 0xe, 0x1c, 0x38, 0x7e, 0xfd,
    0xc3, 0x87, 0xe, 0x1c, 0x38, 0x7f, 0xfe,

    /* U+0046 "F" */
    0xff, 0xff, 0x87, 0xe, 0x1c, 0x38, 0x7e, 0xfd,
    0xc3, 0x87, 0xe, 0x1c, 0x38, 0x70, 0xe0,

    /* U+0047 "G" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3f, 0x3, 0x81,
    0xc0, 0xe7, 0xf3, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x9e, 0xff, 0x3d, 0x80,

    /* U+0048 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xff, 0xff, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8f, 0xc7, 0xe3, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+004A "J" */
    0x39, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xff, 0xf0,

    /* U+004B "K" */
    0xe3, 0xf1, 0xb9, 0xdc, 0xee, 0xe7, 0x73, 0xf1,
    0xf8, 0xfc, 0x7f, 0x3b, 0x9d, 0xce, 0x77, 0x3b,
    0x8d, 0xc7, 0xe3, 0x80,

    /* U+004C "L" */
    0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38, 0x70, 0xe1,
    0xc3, 0x87, 0xe, 0x1c, 0x38, 0x7f, 0xfe,

    /* U+004D "M" */
    0xe0, 0xfc, 0x1f, 0xc7, 0xf8, 0xff, 0x1f, 0xe3,
    0xfc, 0x7e, 0xdf, 0xdb, 0x7b, 0x6f, 0x6d, 0xed,
    0xbc, 0xe7, 0x9c, 0xf3, 0x9e, 0x73, 0xce, 0x60,

    /* U+004E "N" */
    0xe3, 0xf1, 0xf8, 0xfe, 0x7f, 0x3f, 0x9f, 0xef,
    0xf7, 0xef, 0xf7, 0xfb, 0xfc, 0xfe, 0x7f, 0x3f,
    0x8f, 0xc7, 0xe3, 0x80,

    /* U+004F "O" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8e, 0xfe, 0x3e, 0x0,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xcf, 0xff, 0x7f, 0x38, 0x1c, 0xe, 0x7, 0x3,
    0x81, 0xc0, 0xe0, 0x0,

    /* U+0051 "Q" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8e, 0xfe, 0x3e, 0x3, 0x80, 0xc0, 0x20,

    /* U+0052 "R" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xfe, 0x77, 0x39, 0x9c, 0xee, 0x77, 0x3b,
    0x8f, 0xc7, 0xe3, 0x80,

    /* U+0053 "S" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe6, 0xf0, 0xf8, 0x78,
    0x3c, 0x1e, 0xf, 0x7, 0xe7, 0xe7, 0xe7, 0x7e,
    0x3c,

    /* U+0054 "T" */
    0xff, 0xff, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8e, 0xfe, 0x3e, 0x0,

    /* U+0056 "V" */
    0x61, 0xd8, 0x77, 0x19, 0xc6, 0x73, 0x9c, 0xe3,
    0x38, 0xcc, 0x3b, 0xe, 0xc3, 0xf0, 0x7c, 0x1f,
    0x7, 0x81, 0xe0, 0x78, 0xe, 0x0,

    /* U+0057 "W" */
    0xc6, 0x3e, 0x31, 0xb1, 0xcd, 0xce, 0x6e, 0xf3,
    0x77, 0x99, 0xbd, 0xcd, 0xee, 0x6d, 0x73, 0x6f,
    0x1a, 0x78, 0xf3, 0xc7, 0x9e, 0x3c, 0xf0, 0xe3,
    0x87, 0x1c, 0x30, 0xc0,

    /* U+0058 "X" */
    0xe1, 0x9c, 0xe7, 0x38, 0xcc, 0x3f, 0xf, 0xc1,
    0xe0, 0x78, 0x1c, 0x7, 0x81, 0xe0, 0xfc, 0x37,
    0x1c, 0xc7, 0x39, 0x8e, 0xe1, 0xc0,

    /* U+0059 "Y" */
    0xe3, 0xf1, 0xf8, 0xce, 0x67, 0x73, 0xb8, 0xf8,
    0x7c, 0x3e, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0x0,

    /* U+005A "Z" */
    0xff, 0xfc, 0x38, 0x61, 0xc3, 0x86, 0x1c, 0x38,
    0x61, 0xc3, 0x87, 0xc, 0x38, 0x7f, 0xfe,

    /* U+005B "[" */
    0xff, 0x39, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce,
    0x73, 0x9c, 0xe7, 0x39, 0xcf, 0x80,

    /* U+005C "\\" */
    0xc3, 0xc, 0x10, 0x61, 0x82, 0xc, 0x30, 0xc1,
    0x6, 0x18, 0x60, 0xc3, 0xc,

    /* U+005D "]" */
    0xf9, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xe7, 0x39, 0xce, 0x7f, 0x80,

    /* U+005E "^" */
    0x38, 0x38, 0x3c, 0x6c, 0x6e, 0xe6, 0xc6,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0xe6, 0x63,

    /* U+0061 "a" */
    0x3c, 0x7e, 0xe7, 0xe7, 0x7, 0x1f, 0x77, 0xe7,
    0xe7, 0xe7, 0xff, 0x77,

    /* U+0062 "b" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xee, 0xff, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe,
    0xee,

    /* U+0063 "c" */
    0x3c, 0xff, 0xbf, 0x7e, 0xfc, 0x38, 0x77, 0xef,
    0xdd, 0xf9, 0xe0,

    /* U+0064 "d" */
    0x7, 0x7, 0x7, 0x7, 0x7, 0x77, 0xff, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff,
    0x77,

    /* U+0065 "e" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xff, 0xff, 0xe0, 0xe7,
    0xe7, 0xe7, 0x7e, 0x3c,

    /* U+0066 "f" */
    0x3d, 0xf7, 0x1c, 0x73, 0xff, 0xdc, 0x71, 0xc7,
    0x1c, 0x71, 0xc7, 0x1c, 0x70,

    /* U+0067 "g" */
    0x3c, 0x9f, 0xee, 0x73, 0x9c, 0xe7, 0x39, 0xc7,
    0xe1, 0xf0, 0xc0, 0x3f, 0x8f, 0xf1, 0xfe, 0xc1,
    0xb0, 0x6f, 0xf1, 0xf8,

    /* U+0068 "h" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xee, 0xff, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7,

    /* U+0069 "i" */
    0xfc, 0xf, 0xff, 0xff, 0xff, 0xff,

    /* U+006A "j" */
    0x39, 0xc0, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xe7, 0x3f, 0xfc,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3b, 0x9d,
    0xdc, 0xee, 0x7e, 0x3f, 0x1f, 0xce, 0xe7, 0x33,
    0x9d, 0xce, 0xe3, 0x0,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+006D "m" */
    0xee, 0x77, 0xff, 0xf9, 0xcf, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x3f, 0x39,
    0xf9, 0xcf, 0xce, 0x70,

    /* U+006E "n" */
    0xee, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7,

    /* U+006F "o" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0x7e, 0x3c,

    /* U+0070 "p" */
    0xee, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xfe, 0xee, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0071 "q" */
    0x77, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xff, 0x77, 0x7, 0x7, 0x7, 0x7,

    /* U+0072 "r" */
    0xef, 0xff, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38,

    /* U+0073 "s" */
    0x79, 0xfb, 0xbf, 0xf, 0xf, 0xf, 0xf, 0x4f,
    0xdf, 0xfb, 0xe0,

    /* U+0074 "t" */
    0x71, 0xc7, 0x1c, 0xff, 0xf7, 0x1c, 0x71, 0xc7,
    0x1c, 0x71, 0xc7, 0xcf,

    /* U+0075 "u" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xff, 0x77,

    /* U+0076 "v" */
    0xe7, 0x67, 0x66, 0x66, 0x76, 0x7e, 0x7e, 0x3c,
    0x3c, 0x3c, 0x3c, 0x3c,

    /* U+0077 "w" */
    0x66, 0x6c, 0xcd, 0x99, 0xb7, 0x36, 0xf6, 0xdf,
    0xdf, 0xf1, 0xde, 0x39, 0xc7, 0x38, 0xe7, 0x1c,
    0xe0,

    /* U+0078 "x" */
    0x63, 0x76, 0x76, 0x3e, 0x3c, 0x1c, 0x3c, 0x3c,
    0x3e, 0x7e, 0x67, 0xe7,

    /* U+0079 "y" */
    0xe7, 0xe7, 0x67, 0x66, 0x66, 0x76, 0x3e, 0x3e,
    0x3c, 0x3c, 0x1c, 0x1c, 0x1c, 0x18, 0x78, 0x70,

    /* U+007A "z" */
    0xff, 0xf1, 0xc6, 0x38, 0xc7, 0x1c, 0x63, 0x8f,
    0xff,

    /* U+007B "{" */
    0x3b, 0xdc, 0xe7, 0x39, 0xce, 0x73, 0xb9, 0xc7,
    0x39, 0xce, 0x73, 0x9c, 0xf3, 0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+007D "}" */
    0xf3, 0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xe1,
    0xc7, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0xbe, 0xf0,

    /* U+007E "~" */
    0x72, 0xfe, 0x8c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 78, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 75, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 101, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 12, .adv_w = 164, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 156, .box_w = 8, .box_h = 21, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 304, .box_w = 18, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 188, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 48, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 116, .adv_w = 102, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 130, .adv_w = 94, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 144, .adv_w = 132, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 151, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 159, .adv_w = 68, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 162, .adv_w = 100, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 164, .adv_w = 69, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 127, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 171, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 122, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 159, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 159, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 161, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 158, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 167, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 132, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 163, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 167, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 76, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 361, .adv_w = 80, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 367, .adv_w = 124, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 374, .adv_w = 137, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 379, .adv_w = 124, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 386, .adv_w = 155, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 297, .box_w = 17, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 446, .adv_w = 167, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 178, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 173, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 178, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 137, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 132, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 179, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 188, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 88, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 104, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 170, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 135, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 219, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 180, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 169, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 180, .box_w = 9, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 758, .adv_w = 180, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 158, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 138, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 181, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 165, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 228, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 160, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 156, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 136, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 939, .adv_w = 108, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 953, .adv_w = 127, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 966, .adv_w = 101, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 980, .adv_w = 147, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 987, .adv_w = 114, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 989, .adv_w = 94, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 991, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 153, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 151, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1048, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1060, .adv_w = 97, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1073, .adv_w = 151, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1093, .adv_w = 153, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1110, .adv_w = 79, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1116, .adv_w = 80, .box_w = 5, .box_h = 19, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1128, .adv_w = 151, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1148, .adv_w = 81, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1155, .adv_w = 230, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 152, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1215, .adv_w = 152, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1231, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1251, .adv_w = 106, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1263, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 129, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 190, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1304, .adv_w = 133, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 135, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1332, .adv_w = 118, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1341, .adv_w = 108, .box_w = 5, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1355, .adv_w = 80, .box_w = 3, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1363, .adv_w = 112, .box_w = 6, .box_h = 21, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1379, .adv_w = 149, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 7}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 34,
    3, 36,
    3, 40,
    3, 43,
    3, 48,
    3, 50,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 80,
    3, 82,
    3, 84,
    7, 53,
    8, 34,
    8, 36,
    8, 40,
    8, 43,
    8, 48,
    8, 50,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 80,
    8, 82,
    8, 84,
    11, 43,
    11, 57,
    13, 35,
    13, 36,
    13, 37,
    13, 38,
    13, 39,
    13, 40,
    13, 41,
    13, 42,
    13, 44,
    13, 45,
    13, 47,
    13, 48,
    13, 49,
    13, 50,
    13, 51,
    13, 53,
    13, 54,
    13, 55,
    13, 56,
    13, 58,
    13, 68,
    13, 69,
    13, 70,
    13, 80,
    13, 82,
    13, 85,
    13, 87,
    13, 88,
    13, 90,
    14, 53,
    14, 55,
    14, 56,
    14, 57,
    14, 58,
    15, 35,
    15, 36,
    15, 37,
    15, 38,
    15, 39,
    15, 40,
    15, 41,
    15, 42,
    15, 44,
    15, 45,
    15, 47,
    15, 48,
    15, 49,
    15, 50,
    15, 51,
    15, 53,
    15, 54,
    15, 55,
    15, 56,
    15, 58,
    15, 68,
    15, 69,
    15, 70,
    15, 80,
    15, 82,
    15, 85,
    15, 87,
    15, 88,
    15, 90,
    16, 36,
    16, 40,
    16, 48,
    16, 50,
    16, 52,
    16, 68,
    16, 69,
    16, 70,
    16, 80,
    16, 82,
    17, 24,
    17, 57,
    17, 58,
    18, 24,
    19, 21,
    21, 18,
    21, 24,
    22, 24,
    23, 18,
    23, 19,
    23, 24,
    23, 26,
    23, 58,
    24, 21,
    25, 24,
    25, 58,
    26, 24,
    27, 53,
    27, 55,
    27, 56,
    27, 58,
    28, 53,
    28, 55,
    28, 56,
    28, 58,
    34, 3,
    34, 8,
    34, 36,
    34, 40,
    34, 48,
    34, 52,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 71,
    34, 85,
    34, 87,
    34, 88,
    34, 90,
    35, 3,
    35, 8,
    35, 13,
    35, 15,
    35, 34,
    35, 53,
    35, 55,
    35, 56,
    35, 57,
    35, 58,
    36, 3,
    36, 8,
    36, 13,
    36, 15,
    36, 57,
    36, 58,
    37, 3,
    37, 8,
    37, 13,
    37, 15,
    37, 24,
    37, 34,
    37, 43,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    37, 61,
    38, 68,
    38, 69,
    38, 70,
    38, 72,
    38, 80,
    38, 82,
    38, 84,
    39, 3,
    39, 8,
    39, 13,
    39, 15,
    39, 27,
    39, 28,
    39, 34,
    39, 43,
    39, 52,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    39, 84,
    39, 89,
    39, 90,
    39, 91,
    40, 3,
    40, 8,
    40, 53,
    40, 55,
    40, 56,
    40, 58,
    43, 13,
    43, 15,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 52,
    44, 66,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 84,
    44, 85,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 11,
    45, 14,
    45, 18,
    45, 24,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 52,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 61,
    45, 68,
    45, 69,
    45, 70,
    45, 71,
    45, 72,
    45, 80,
    45, 82,
    45, 84,
    45, 85,
    45, 88,
    45, 90,
    46, 52,
    46, 53,
    46, 55,
    46, 58,
    48, 3,
    48, 8,
    48, 13,
    48, 15,
    48, 24,
    48, 34,
    48, 43,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    48, 61,
    49, 13,
    49, 14,
    49, 15,
    49, 16,
    49, 21,
    49, 24,
    49, 34,
    49, 43,
    49, 52,
    49, 57,
    49, 59,
    49, 61,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 78,
    49, 79,
    49, 80,
    49, 83,
    49, 84,
    49, 89,
    49, 91,
    50, 3,
    50, 8,
    50, 13,
    50, 15,
    50, 24,
    50, 34,
    50, 43,
    50, 53,
    50, 55,
    50, 57,
    50, 58,
    50, 59,
    50, 61,
    51, 36,
    51, 40,
    51, 48,
    51, 50,
    51, 52,
    51, 53,
    51, 54,
    51, 55,
    51, 56,
    51, 58,
    51, 61,
    51, 66,
    51, 68,
    51, 69,
    51, 70,
    51, 80,
    51, 82,
    51, 88,
    51, 90,
    51, 91,
    52, 16,
    52, 34,
    52, 46,
    52, 52,
    52, 55,
    52, 57,
    52, 58,
    52, 61,
    53, 7,
    53, 13,
    53, 14,
    53, 15,
    53, 16,
    53, 27,
    53, 28,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 46,
    53, 48,
    53, 50,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 71,
    53, 72,
    53, 75,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 83,
    53, 84,
    53, 85,
    53, 86,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 13,
    54, 15,
    54, 16,
    54, 34,
    55, 13,
    55, 14,
    55, 15,
    55, 16,
    55, 27,
    55, 28,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 46,
    55, 48,
    55, 50,
    55, 52,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 85,
    55, 86,
    55, 87,
    55, 88,
    55, 89,
    55, 90,
    55, 91,
    56, 13,
    56, 14,
    56, 15,
    56, 16,
    56, 27,
    56, 28,
    56, 34,
    56, 52,
    56, 61,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 71,
    56, 72,
    56, 78,
    56, 79,
    56, 80,
    56, 81,
    56, 83,
    56, 84,
    56, 87,
    56, 88,
    56, 89,
    56, 91,
    57, 11,
    57, 14,
    57, 17,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 52,
    57, 61,
    57, 66,
    57, 68,
    57, 69,
    57, 70,
    57, 71,
    57, 72,
    57, 80,
    57, 82,
    57, 84,
    57, 85,
    57, 87,
    57, 88,
    57, 90,
    58, 13,
    58, 14,
    58, 15,
    58, 16,
    58, 17,
    58, 21,
    58, 23,
    58, 25,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 46,
    58, 48,
    58, 50,
    58, 52,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    58, 88,
    58, 89,
    58, 90,
    58, 91,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 52,
    59, 66,
    59, 68,
    59, 69,
    59, 70,
    59, 80,
    59, 82,
    61, 36,
    61, 40,
    61, 48,
    61, 50,
    61, 52,
    61, 53,
    61, 54,
    61, 55,
    61, 56,
    61, 58,
    66, 3,
    66, 8,
    66, 53,
    66, 55,
    66, 56,
    66, 58,
    66, 87,
    66, 88,
    66, 90,
    67, 3,
    67, 8,
    67, 13,
    67, 15,
    67, 53,
    67, 55,
    67, 56,
    67, 57,
    67, 58,
    67, 75,
    67, 89,
    68, 3,
    68, 8,
    68, 16,
    68, 53,
    68, 55,
    68, 56,
    68, 58,
    68, 68,
    68, 69,
    68, 70,
    68, 75,
    68, 80,
    68, 82,
    69, 53,
    69, 55,
    69, 56,
    69, 58,
    70, 3,
    70, 8,
    70, 53,
    70, 55,
    70, 56,
    70, 58,
    70, 75,
    70, 89,
    71, 15,
    71, 27,
    71, 28,
    71, 34,
    71, 66,
    71, 68,
    71, 69,
    71, 70,
    71, 71,
    71, 74,
    71, 75,
    71, 80,
    71, 82,
    71, 86,
    72, 53,
    72, 55,
    72, 57,
    72, 58,
    72, 59,
    72, 66,
    72, 68,
    72, 69,
    72, 70,
    72, 72,
    72, 75,
    72, 80,
    72, 82,
    72, 85,
    72, 86,
    72, 88,
    72, 90,
    73, 3,
    73, 8,
    73, 53,
    73, 55,
    73, 56,
    73, 58,
    76, 3,
    76, 8,
    76, 53,
    76, 55,
    76, 56,
    76, 58,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    76, 84,
    77, 53,
    77, 55,
    77, 56,
    77, 58,
    78, 3,
    78, 8,
    78, 53,
    78, 55,
    78, 56,
    78, 58,
    79, 3,
    79, 8,
    79, 53,
    79, 55,
    79, 56,
    79, 58,
    80, 3,
    80, 8,
    80, 13,
    80, 15,
    80, 53,
    80, 55,
    80, 56,
    80, 57,
    80, 58,
    80, 75,
    80, 89,
    81, 3,
    81, 8,
    81, 13,
    81, 15,
    81, 53,
    81, 55,
    81, 56,
    81, 57,
    81, 58,
    81, 75,
    81, 89,
    82, 3,
    82, 8,
    82, 53,
    82, 55,
    82, 58,
    83, 13,
    83, 15,
    83, 34,
    83, 43,
    83, 53,
    83, 57,
    83, 58,
    83, 59,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 72,
    83, 80,
    83, 82,
    84, 3,
    84, 8,
    84, 53,
    84, 55,
    84, 56,
    84, 57,
    84, 58,
    85, 3,
    85, 8,
    85, 52,
    85, 53,
    85, 55,
    85, 58,
    85, 72,
    86, 3,
    86, 8,
    86, 53,
    86, 55,
    86, 56,
    86, 58,
    87, 13,
    87, 15,
    87, 34,
    87, 43,
    87, 53,
    87, 55,
    87, 56,
    87, 57,
    87, 58,
    87, 59,
    87, 66,
    87, 72,
    88, 13,
    88, 15,
    88, 34,
    88, 43,
    88, 53,
    88, 55,
    88, 56,
    88, 57,
    88, 58,
    88, 59,
    88, 66,
    88, 72,
    89, 53,
    89, 55,
    89, 56,
    89, 58,
    89, 68,
    89, 69,
    89, 70,
    89, 80,
    89, 82,
    90, 13,
    90, 15,
    90, 34,
    90, 43,
    90, 53,
    90, 55,
    90, 56,
    90, 57,
    90, 58,
    90, 59,
    90, 66,
    90, 72,
    91, 53,
    91, 55,
    91, 56,
    91, 58,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -21, -4, -4, -12, -4, -4, -5, -11,
    -11, -11, -14, -11, -11, -8, -8, -21,
    -4, -4, -12, -4, -4, -5, -11, -11,
    -11, -14, -11, -11, -8, -6, -4, -2,
    -4, -2, -2, -2, -4, -2, -2, -2,
    -2, -2, -4, -2, -4, -2, -18, -4,
    -15, -12, -19, -1, -1, -1, -1, -1,
    -6, -3, -4, -6, -10, -8, -2, -4,
    -10, -2, -4, -2, -2, -2, -4, -2,
    -2, -2, -2, -2, -4, -2, -4, -2,
    -18, -4, -15, -12, -19, -1, -1, -1,
    -1, -1, -6, -3, -4, -6, -4, -4,
    -4, -4, -6, -12, -12, -12, -12, -12,
    -2, -2, -4, -3, -4, -4, -4, -4,
    -2, -2, -3, -3, -2, -9, -4, -2,
    -5, -21, -4, -6, -15, -21, -4, -6,
    -15, -21, -21, -3, -3, -3, -2, -14,
    -2, -12, -7, -13, -5, -4, -1, -6,
    -6, -9, -9, -4, -4, -1, -7, -8,
    -1, -6, -5, -4, -4, -2, -2, -2,
    -1, -6, -6, -4, -4, -2, -3, -2,
    -2, -2, -4, -4, -2, -8, -1, -1,
    -1, -1, -1, -1, -1, -2, -2, -23,
    -23, -5, -5, -11, -8, -1, -6, -4,
    -4, -4, -2, -4, -4, -4, -2, -2,
    -5, -6, -6, -5, -3, -1, -4, -10,
    -10, -6, -7, -7, -7, -5, -4, 0,
    -4, -4, -4, -1, -4, -4, -1, -4,
    -2, -1, -6, -10, -3, -3, -25, -10,
    -8, -2, -3, -3, -3, -4, -2, -23,
    -4, -23, -15, -28, -19, -1, -1, -1,
    -5, -1, -1, -1, -1, -6, -10, -17,
    -3, -2, -2, -2, -6, -6, -4, -4,
    -2, -3, -2, -2, -2, -4, -4, -2,
    -8, -28, -22, -31, -20, -5, -2, -15,
    -8, -2, -4, -5, -6, -10, -7, -7,
    -7, -7, -1, -1, -7, -1, -6, -1,
    -4, -6, -6, -4, -4, -2, -3, -2,
    -2, -2, -4, -4, -2, -8, -2, -2,
    -2, -2, -1, -4, -1, -3, -1, -6,
    -6, -3, -5, -5, -5, -5, -5, -1,
    -2, -4, -4, -2, -2, -4, -2, -2,
    -2, -8, -2, -18, -10, -18, -12, -21,
    -21, -14, -2, -2, -8, -2, -2, -2,
    -22, -19, -19, -19, -9, -19, -3, -17,
    -17, -19, -17, -17, -20, -4, -14, -19,
    -15, -17, -15, -4, -4, -6, -2, -17,
    -8, -17, -1, -6, -6, -12, -2, -2,
    -4, -2, -2, -2, -2, -17, -12, -12,
    -12, -15, -8, -8, -12, -9, -10, -8,
    -11, -2, -8, -5, -6, -8, -7, -13,
    -12, -2, -12, -8, -6, -6, -7, -1,
    -4, -10, -7, -7, -7, -2, -8, -5,
    -5, -7, -3, -5, -3, -2, -2, -2,
    -2, -6, -4, -2, -4, -4, -4, -4,
    -4, -4, -2, -3, -3, -3, -4, -2,
    -3, -3, -5, -4, -8, -8, -10, -23,
    -10, -23, -10, -4, -6, -2, -2, -17,
    -17, -13, -4, -4, -4, -2, -4, -4,
    -2, -21, -19, -19, -19, -10, -19, -17,
    -17, -19, -14, -4, -17, -16, -15, -12,
    -13, -10, -10, -2, -2, -2, -2, -1,
    -2, -2, -2, -2, -2, -2, -4, -4,
    -4, -4, -6, -12, -6, -4, -10, -12,
    -10, -10, -18, -14, -8, -20, -1, -1,
    -1, -11, -11, -1, -1, -19, -12, -6,
    -1, -19, -1, -3, -10, -10, -1, -14,
    -4, -1, -14, -1, -1, -1, -1, -1,
    -1, 12, 6, 6, 8, -1, -1, -19,
    -9, -2, -18, -1, -3, -6, -2, -2,
    -2, -4, -2, -2, -2, -10, -1, -1,
    -2, -2, -1, -8, -2, -4, -3, -1,
    -2, -1, -1, -1, -2, 6, -1, -1,
    2, -1, 2, 3, -12, -12, -17, -10,
    -5, -17, -4, -4, -12, -3, -2, -10,
    -4, -4, -4, -2, -4, -4, -2, 5,
    3, 3, 4, -12, -12, -17, -10, -5,
    -17, -12, -12, -17, -10, -5, -17, -11,
    -11, -1, -1, -19, -12, -6, -1, -19,
    -1, -3, -11, -11, -1, -1, -19, -12,
    -6, -1, -19, -1, -3, -4, -4, -16,
    -4, -12, -27, -27, -9, -6, -15, -8,
    -7, -6, -4, -1, -1, -1, -3, -1,
    -5, -8, -8, -18, -10, -1, -2, -18,
    -8, -8, -1, -5, -4, -6, -2, -6,
    -6, -17, -6, -2, -15, -9, -10, -7,
    -6, -20, -6, -2, -8, -12, -6, -3,
    -3, -5, -6, -5, -10, -19, -6, -2,
    -8, -12, -4, -3, -2, -15, -8, -2,
    -13, -3, -3, -3, -3, -3, -11, -11,
    -7, -6, -20, -6, -2, -8, -12, -6,
    -3, -3, -15, -5, -1, -10, -2, -2,
    -2, -2, -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 740,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_OswaldMedium20 = {
#else
lv_font_t ui_font_OswaldMedium20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 23,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_OSWALDMEDIUM20*/

