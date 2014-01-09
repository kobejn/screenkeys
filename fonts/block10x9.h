

/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : block10x10.h
 * Date                : 09.01.2014
 * Font size in bytes  : 5772
 * Font width          : 10
 * Font height         : 9
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef BLOCK10X9_H
#define BLOCK10X9_H

#define BLOCK10X9_WIDTH 10
#define BLOCK10X9_HEIGHT 9

static const uint8_t block10x9[] PROGMEM = {
    0x16, 0x8C, // size
    0x0A, // width
    0x09, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x02, 0x08, 0x00, 0x08, 0x00, 0x00, 0x02, 0x09, 0x08, 
    0x08, 0x08, 0x02, 0x08, 0x02, 0x08, 0x08, 0x02, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x02, 0x02, 0x05, 0x08, 
    0x05, 0x08, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x02, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x05, 
    0x08, 0x05, 0x08, 0x08, 0x05, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x02, 0x05, 0x08, 0x02, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x02, 0x08, 0x00, 0x01, 
    
    // font data
    0xBF, 0xBF, 0x80, 0x80, // 33
    0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0xBE, 0xBE, 0xB6, 0xFE, 0xFE, 0xB6, 0xF6, 0xF6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 36
    0x3F, 0x3F, 0x00, 0x00, // 39
    0x30, 0x30, 0x00, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 40
    0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x30, 0x30, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, // 41
    0x86, 0x86, 0x00, 0xFE, 0xFE, 0x00, 0x86, 0x86, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, // 42
    0x30, 0x30, 0x30, 0xFF, 0xFF, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, // 43
    0xF8, 0xF8, 0x80, 0x80, // 44
    0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x80, 0x80, 0x80, 0x80, // 46
    0x80, 0x80, 0x00, 0x30, 0x30, 0x00, 0x06, 0x06, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 48
    0xFE, 0xFE, 0x80, 0x80, // 49
    0xF6, 0xF6, 0xB6, 0xB6, 0xB6, 0xB6, 0xBE, 0xBE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 50
    0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 51
    0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 52
    0xBE, 0xBE, 0xB6, 0xB6, 0xB6, 0xB6, 0xF6, 0xF6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 53
    0xFF, 0xFF, 0xB0, 0xB0, 0xB0, 0xB0, 0xF0, 0xF0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 54
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 55
    0xFE, 0xFE, 0xB6, 0xB6, 0xB6, 0xB6, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 56
    0x3E, 0x3E, 0x36, 0x36, 0x36, 0x36, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 57
    0x86, 0x86, 0x80, 0x80, // 58
    0xFE, 0xFE, 0x80, 0x80, // 59
    0x30, 0x30, 0x00, 0x86, 0x86, 0x00, 0x00, 0x00, 0x80, 0x80, // 60
    0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 61
    0x86, 0x86, 0x00, 0x30, 0x30, 0x80, 0x80, 0x00, 0x00, 0x00, // 62
    0x06, 0x06, 0x06, 0xB6, 0xB6, 0x36, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, // 63
    0xFE, 0xFE, 0x36, 0x36, 0x36, 0x36, 0xFE, 0xFE, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 65
    0xFE, 0xFE, 0xB6, 0xB6, 0xB6, 0xB6, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 66
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 67
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x78, 0x78, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, // 68
    0xFE, 0xFE, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 69
    0xFE, 0xFE, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xFE, 0xFE, 0x86, 0xB6, 0xB6, 0xB6, 0xF6, 0xF6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 71
    0xFF, 0xFF, 0x30, 0x30, 0x30, 0x30, 0xFF, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 72
    0xFF, 0xFF, 0x80, 0x80, // 73
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 74
    0xFE, 0xFE, 0x30, 0x30, 0x30, 0x00, 0x86, 0x86, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 75
    0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 76
    0xFE, 0xFE, 0x06, 0xFE, 0xFE, 0x06, 0xFE, 0xFE, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, // 77
    0xFE, 0xFE, 0x06, 0xFE, 0xFE, 0x80, 0xFE, 0xFE, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, // 78
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 79
    0xFE, 0xFE, 0x36, 0x36, 0x36, 0x36, 0x3E, 0x3E, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xFE, 0xFE, 0x86, 0xB6, 0xB6, 0x06, 0xBE, 0xBE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80, // 81
    0xFE, 0xFE, 0x36, 0xF6, 0xF6, 0xB6, 0xBE, 0xBE, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, // 82
    0xBE, 0xBE, 0xB6, 0xB6, 0xB6, 0xB6, 0xF6, 0xF6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 83
    0x06, 0x06, 0x06, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, // 84
    0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 85
    0x3F, 0x3F, 0x00, 0x80, 0x80, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, // 86
    0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 87
    0x86, 0x86, 0x00, 0x30, 0x30, 0x00, 0x86, 0x86, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 88
    0x3F, 0x3F, 0x30, 0xF0, 0xF0, 0x30, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, // 89
    0xF6, 0xF6, 0xB6, 0xB6, 0xB6, 0xB6, 0xBE, 0xBE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 90
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x80, 0x80, 0x80, 0x80, 0x80, // 91
    0x06, 0x06, 0x00, 0x30, 0x30, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 92
    0x86, 0x86, 0x86, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, // 93
    0x30, 0x30, 0x00, 0x06, 0x06, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x06, 0x06, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0xF6, 0xF6, 0xB6, 0xB6, 0xB6, 0xB6, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 97
    0xFF, 0xFF, 0xB0, 0xB0, 0xB0, 0xB0, 0xF0, 0xF0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 98
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 99
    0xF0, 0xF0, 0xB0, 0xB0, 0xB0, 0xB0, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 100
    0xFE, 0xFE, 0xB6, 0xB6, 0xB6, 0xB6, 0xBE, 0xBE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 101
    0x30, 0x30, 0x30, 0xFE, 0xFE, 0x36, 0x36, 0x36, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, // 102
    0xBE, 0xBE, 0xB6, 0xB6, 0xB6, 0xB6, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 103
    0xFF, 0xFF, 0x30, 0x30, 0x30, 0x30, 0xF0, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 104
    0xFE, 0xFE, 0x80, 0x80, // 105
    0x80, 0x80, 0x80, 0xF6, 0xF6, 0x80, 0x80, 0x80, 0x80, 0x80, // 106
    0xFE, 0xFE, 0x30, 0x30, 0x30, 0x00, 0x86, 0x86, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 107
    0xFF, 0xFF, 0x80, 0x80, // 108
    0xFE, 0xFE, 0x06, 0xFE, 0xFE, 0x06, 0xFE, 0xFE, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, // 109
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 110
    0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 111
    0xFE, 0xFE, 0x36, 0x36, 0x36, 0x36, 0x3E, 0x3E, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x3E, 0x3E, 0x36, 0x36, 0x36, 0x36, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 113
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0xBE, 0xBE, 0xB6, 0xB6, 0xB6, 0xB6, 0xF6, 0xF6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 115
    0x30, 0x30, 0x30, 0xFF, 0xFF, 0xB0, 0xB0, 0xB0, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, // 116
    0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 117
    0x3F, 0x3F, 0x00, 0x80, 0x80, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, // 118
    0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 119
    0x86, 0x86, 0x00, 0x30, 0x30, 0x00, 0x86, 0x86, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, // 120
    0xBF, 0xBF, 0xB0, 0xB0, 0xB0, 0xB0, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 121
    0xF6, 0xF6, 0xB6, 0xB6, 0xB6, 0xB6, 0xBE, 0xBE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 122
    0x30, 0x30, 0x30, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, // 123
    0xFF, 0xFF, 0x80, 0x80, // 124
    0x86, 0x86, 0x86, 0xFE, 0xFE, 0x30, 0x30, 0x30, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, // 125
    0x10, 0x00 // 127    
};

#endif