

/*
 *
 * binSmall
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : beatbox10x11.h
 * Date                : 09.01.2014
 * Font size in bytes  : 2806
 * Font width          : 10
 * Font height         : 8
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

#ifndef BINSMALL_H
#define BINSMALL_H

#define BINSMALL_WIDTH 10
#define BINSMALL_HEIGHT 8

static const uint8_t binSmall10x8[] PROGMEM = {
    0x0A, 0xF6, // size
    0x0A, // width
    0x08, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x04, 0x04, 0x05, 0x04, 0x01, 0x03, 0x03, 
    0x03, 0x03, 0x01, 0x03, 0x01, 0x04, 0x04, 0x03, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x01, 0x02, 0x04, 
    0x02, 0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x01, 0x04, 0x04, 0x04, 0x05, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x05, 0x04, 0x04, 0x05, 0x04, 0x04, 0x05, 0x02, 
    0x04, 0x02, 0x03, 0x04, 0x01, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x01, 0x04, 0x04, 0x04, 0x05, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x05, 0x04, 0x04, 0x05, 0x04, 0x04, 
    0x05, 0x03, 0x01, 0x03, 0x03, 0x00, 
    
    // font data
    0x5C, // 33
    0x0C, 0x00, 0x0C, // 34
    0x18, 0x3C, 0x3C, 0x18, // 35
    0x20, 0x30, 0x78, 0x30, // 36
    0x08, 0x60, 0x18, 0x00, 0x40, // 37
    0x70, 0x50, 0xF8, 0x58, // 38
    0x0C, // 39
    0x10, 0x7C, 0x44, // 40
    0x44, 0x7C, 0x10, // 41
    0x08, 0x14, 0x08, // 42
    0x20, 0x70, 0x20, // 43
    0xC0, // 44
    0x10, 0x10, 0x10, // 45
    0x40, // 46
    0x60, 0x20, 0x30, 0x18, // 47
    0x7C, 0x44, 0x44, 0x7C, // 48
    0x04, 0x04, 0x7C, // 49
    0x74, 0x54, 0x54, 0x5C, // 50
    0x54, 0x54, 0x54, 0x7C, // 51
    0x3C, 0x20, 0x30, 0x7C, // 52
    0x5C, 0x54, 0x54, 0x74, // 53
    0x7C, 0x48, 0x48, 0x78, // 54
    0x04, 0x04, 0x04, 0x7C, // 55
    0x7C, 0x54, 0x54, 0x7C, // 56
    0x5C, 0x54, 0x54, 0x5C, // 57
    0x48, // 58
    0xC8, // 59
    0x3C, 0x78, // 60
    0x28, 0x28, 0x28, 0x28, // 61
    0x78, 0x30, // 62
    0x04, 0x74, 0x14, 0x1C, // 63
    0x7E, 0x42, 0x5A, 0x5A, 0x5A, 0x5E, // 64
    0x7C, 0x14, 0x14, 0x7C, // 65
    0x7C, 0x50, 0x50, 0x70, // 66
    0x7C, 0x44, 0x44, 0x44, // 67
    0x70, 0x50, 0x50, 0x7C, // 68
    0x54, 0x54, 0x54, 0x54, // 69
    0x7C, 0x14, 0x14, 0x14, // 70
    0x7C, 0x54, 0x54, 0x74, // 71
    0x7C, 0x10, 0x10, 0x7C, // 72
    0x7C, // 73
    0x40, 0x40, 0x44, 0x7C, // 74
    0x7C, 0x10, 0x18, 0x6C, // 75
    0x7C, 0x40, 0x40, 0x40, // 76
    0x7C, 0x04, 0x7C, 0x04, 0x7C, // 77
    0x7C, 0x04, 0x04, 0x7C, // 78
    0x7C, 0x44, 0x44, 0x7C, // 79
    0x7C, 0x14, 0x14, 0x1C, // 80
    0x7C, 0x44, 0x64, 0x7C, // 81
    0x7C, 0x04, 0x04, 0x04, // 82
    0x5C, 0x54, 0x54, 0x74, // 83
    0x04, 0x04, 0x7C, 0x04, 0x04, // 84
    0x7C, 0x40, 0x40, 0x7C, // 85
    0x3C, 0x60, 0x60, 0x3C, // 86
    0x78, 0x40, 0x78, 0x40, 0x78, // 87
    0x7C, 0x30, 0x30, 0x7C, // 88
    0x3C, 0x20, 0xF0, 0x3C, // 89
    0x44, 0x54, 0x54, 0x54, 0x44, // 90
    0x7C, 0x44, // 91
    0x18, 0x10, 0x30, 0x60, // 92
    0x44, 0x7C, // 93
    0x06, 0x03, 0x06, // 94
    0x40, 0x40, 0x40, 0x40, // 95
    0x03, // 96
    0x7C, 0x14, 0x14, 0x7C, // 97
    0x7C, 0x50, 0x50, 0x70, // 98
    0x7C, 0x44, 0x44, 0x44, // 99
    0x70, 0x50, 0x50, 0x7C, // 100
    0x54, 0x54, 0x54, 0x54, // 101
    0x7C, 0x14, 0x14, 0x14, // 102
    0x5C, 0x54, 0x54, 0x7C, // 103
    0x7C, 0x10, 0x10, 0x7C, // 104
    0x7C, // 105
    0x40, 0x40, 0x44, 0x7C, // 106
    0x7C, 0x10, 0x18, 0x6C, // 107
    0x7C, 0x40, 0x40, 0x40, // 108
    0x7C, 0x04, 0x7C, 0x04, 0x7C, // 109
    0x7C, 0x04, 0x04, 0x7C, // 110
    0x7C, 0x44, 0x44, 0x7C, // 111
    0x7C, 0x14, 0x14, 0x1C, // 112
    0x7C, 0x44, 0x64, 0x7C, // 113
    0x7C, 0x04, 0x04, 0x04, // 114
    0x54, 0x54, 0x54, 0x74, // 115
    0x04, 0x04, 0x7C, 0x04, 0x04, // 116
    0x7C, 0x40, 0x40, 0x7C, // 117
    0x3C, 0x60, 0x60, 0x3C, // 118
    0x7C, 0x40, 0x7C, 0x40, 0x7C, // 119
    0x7C, 0x30, 0x30, 0x7C, // 120
    0x3C, 0x20, 0xF0, 0x3C, // 121
    0x44, 0x54, 0x54, 0x54, 0x44, // 122
    0x10, 0x7C, 0x44, // 123
    0x7C, // 124
    0x44, 0x7C, 0x10, // 125
    0x02, 0x03, 0x01, // 126
    
};

#endif
