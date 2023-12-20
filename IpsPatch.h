#ifndef __FASTROM_PATCH_H__
#define __FASTROM_PATCH_H__

#include <string>

/*
    Fastrom patch by kando - v1.1 - there are issues with v1.2 that cause crashes
    Patreon: kandowontu - https://www.patreon.com/Kandowontu
    Twitter: @kandowontu
*/
const unsigned char FastRomPatchBuffer[] = {
0x50,0x41,0x54,0x43,0x48,0x00,0x00,0x11,0x00,0x13,0x81,0x48,0xAB,0x5C,0xB8,0xFF,0x80,0x22,0xDA,0xBA,0x82,0x22,0x12,0xF9,0x84,0x22,0xEE,0xF6,0x84,0x00,0x00,0x2D,0x00,0x0D,0x82,0x22,0x81,0xF7,0x84,0x22,0xB7,0xB1,0x82,0x22,0x81,0xF7,0x84,0x00,0x00,0x4C,0x00,0x5B,0x82,0x22,0x72,0xF5,0x84,0x22,0xAE,0xB1,0x82,0x22,0xD6,0x89,0x82,0x22,0x5E,0x98,0x82,0x22,0xA6,0x85,0x80,0x22,0xC4,0x85,0x80,0x22,0x34,0x8A,0x80,0x22,0xF4,0x8D,0x80,0x22,0x05,0xB0,0x80,0x22,0x69,0x80,0x82,0x22,0x0B,0x81,0x82,0x22,0xEE,0x86,0x80,0x22,0x59,0xA6,0x82,0x22,0x95,0x96,0x82,0x22,0x23,0xF2,0x84,0x22,0xA2,0xB1,0x82,0x80,0xA3,0x22,0xAE,0xB1,0x82,0x22,0x5E,0x98,0x82,0x22,0xA6,0x85,0x80,0x22,0xC4,0x85,0x80,0x22,0xEE,0x86,0x80,0x22,0xA2,0xB1,0x82,0x00,0x00,0xAD,0x00,0x09,0x82,0x22,0xA9,0x8E,0x82,0x22,0x5E,0x98,0x82,0x00,0x00,0xBC,0x00,0x25,0x80,0x22,0xC4,0x85,0x80,0x22,0xEE,0x86,0x80,0x22,0x59,0xA6,0x82,0x22,0x95,0x96,0x82,0x22,0x23,0xF2,0x84,0x22,0xA2,0xB1,0x82,0x22,0xB7,0xB1,0x82,0x22,0xAE,0xB1,0x82,0x22,0xBE,0x81,0x80,0x00,0x00,0xFE,0x00,0x01,0x82,0x00,0x01,0x23,0x00,0x01,0x82,0x00,0x01,0x30,0x00,0x01,0x82,0x00,0x01,0x37,0x00,0x19,0x82,0x22,0xA6,0x85,0x80,0x22,0xC4,0x85,0x80,0x22,0x00,0x80,0x82,0x22,0x69,0x80,0x82,0x22,0x0B,0x81,0x82,0x22,0xEE,0x86,0x80,0x00,0x01,0x58,0x00,0x09,0x82,0x22,0x95,0x96,0x82,0x22,0x23,0xF2,0x84,0x00,0x01,0x67,0x00,0x05,0x82,0x22,0xB7,0xB1,0x82,0x00,0x01,0x7A,0x00,0x01,0x81,0x00,0x01,0x83,0x00,0x31,0x82,0x22,0xA6,0x85,0x80,0x22,0xC4,0x85,0x80,0x22,0x69,0x80,0x82,0x22,0x0B,0x81,0x82,0x22,0xEE,0x86,0x80,0x22,0x59,0xA6,0x82,0x22,0x95,0x96,0x82,0x22,0x23,0xF2,0x84,0x22,0xEA,0x8E,0x82,0x22,0xA2,0xB1,0x82,0x22,0xB7,0xB1,0x82,0x22,0xAE,0xB1,0x82,0x00,0x01,0xC5,0x00,0x01,0x81,0x00,0x01,0xCE,0x00,0x2D,0x82,0x22,0xA6,0x85,0x80,0x22,0xC4,0x85,0x80,0x22,0x69,0x80,0x82,0x22,0x0B,0x81,0x82,0x22,0xEE,0x86,0x80,0x22,0x59,0xA6,0x82,0x22,0x95,0x96,0x82,0x22,0x23,0xF2,0x84,0x22,0xA2,0xB1,0x82,0x22,0xB7,0xB1,0x82,0x22,0xAE,0xB1,0x82,0x00,0x03,0x4F,0x00,0x01,0x81,0x00,0x03,0x70,0x00,0x01,0x80,0x00,0x04,0xD5,0x00,0x01,0x82,0x00,0x04,0xE3,0x00,0x01,0x82,0x00,0x0A,0x16,0x00,0x03,0x20,0x98,0xFF,0x00,0x0A,0x22,0x00,0x0C,0x5C,0x78,0xFF,0x80,0xEA,0xEA,0xF0,0x04,0x22,0x28,0x8F,0x80,0x00,0x0B,0x7F,0x00,0x01,0x81,0x00,0x0C,0x1E,0x00,0x05,0x81,0x22,0x87,0xF6,0x84,0x00,0x0C,0x5B,0x00,0x01,0x81,0x00,0x0C,0xAC,0x00,0x01,0x81,0x00,0x0D,0x25,0x00,0x05,0x81,0x22,0x87,0xF6,0x84,0x00,0x0D,0x49,0x00,0x01,0x81,0x00,0x0F,0x25,0x00,0x01,0x80,0x00,0x12,0x69,0x00,0x01,0x82,0x00,0x13,0x22,0x00,0x01,0x80,0x00,0x13,0x33,0x00,0x01,0x80,0x00,0x13,0x4E,0x00,0x01,0x80,0x00,0x13,0x7B,0x00,0x01,0x80,0x00,0x13,0xE6,0x00,0x01,0x82,0x00,0x14,0x44,0x00,0x01,0x80,0x00,0x14,0xCC,0x00,0x01,0x82,0x00,0x15,0x39,0x00,0x01,0x82,0x00,0x15,0x70,0x00,0x01,0x80,0x00,0x16,0x0B,0x00,0x01,0x80,0x00,0x16,0x99,0x00,0x01,0x82,0x00,0x17,0x77,0x00,0x01,0x84,0x00,0x17,0x84,0x00,0x01,0x84,0x00,0x17,0xC0,0x00,0x01,0x84,0x00,0x17,0xCD,0x00,0x01,0x84,0x00,0x18,0x14,0x00,0x01,0x84,0x00,0x18,0x21,0x00,0x01,0x84,0x00,0x18,0x68,0x00,0x01,0x84,0x00,0x18,0x75,0x00,0x01,0x84,0x00,0x1A,0x21,0x00,0x01,0x80,0x00,0x1A,0xC7,0x00,0x01,0x80,0x00,0x1B,0x26,0x00,0x01,0x80,0x00,0x28,0x59,0x00,0x01,0x84,0x00,0x28,0x9D,0x00,0x01,0x82,0x00,0x28,0xA5,0x00,0x01,0x82,0x00,0x29,0x95,0x00,0x01,0x80,0x00,0x2B,0x63,0x00,0x01,0x80,0x00,0x2D,0x17,0x00,0x11,0x82,0x22,0xAE,0xB1,0x82,0x22,0xF5,0xEF,0x9F,0x22,0xB7,0xB1,0x82,0x22,0xA2,0xB1,0x82,0x00,0x2E,0xB0,0x00,0x01,0x82,0x00,0x2F,0x41,0x00,0x01,0x84,0x00,0x2F,0xE6,0x00,0x01,0x82,0x00,0x2F,0xF5,0x00,0x01,0x82,0x00,0x30,0x9B,0x00,0x01,0x84,0x00,0x30,0xA9,0x00,0x01,0x84,0x00,0x30,0xB0,0x00,0x01,0x84,0x00,0x31,0x04,0x00,0x01,0x80,0x00,0x31,0xA2,0x00,0x01,0x82,0x00,0x55,0xE3,0x00,0x01,0x82,0x00,0x55,0xF1,0x00,0x01,0x82,0x00,0x57,0xB5,0x00,0x01,0x82,0x00,0x58,0x84,0x00,0x01,0x82,0x00,0x59,0xDC,0x00,0x01,0x84,0x00,0x5A,0x4F,0x00,0x01,0x82,0x00,0x5A,0x60,0x00,0x01,0x82,0x00,0x5A,0x69,0x00,0x01,0x82,0x00,0x5B,0x9C,0x00,0x01,0x84,0x00,0x5B,0xD4,0x00,0x01,0x84,0x00,0x5C,0x40,0x00,0x01,0x84,0x00,0x5C,0x71,0x00,0x01,0x84,0x00,0x5E,0x09,0x00,0x01,0x82,0x00,0x5E,0x24,0x00,0x01,0x84,0x00,0x5E,0x33,0x00,0x01,0x84,0x00,0x5E,0xB4,0x00,0x01,0x80,0x00,0x5E,0xC1,0x00,0x01,0x80,0x00,0x60,0x86,0x00,0x05,0x82,0x22,0xCD,0x86,0x82,0x00,0x60,0xBA,0x00,0x01,0x82,0x00,0x60,0xC9,0x00,0x01,0x82,0x00,0x61,0xDD,0x00,0x01,0x80,0x00,0x63,0xCA,0x00,0x01,0x84,0x00,0x64,0xC9,0x00,0x03,0x4C,0x8B,0xFF,0x00,0x64,0xE2,0x00,0x01,0x80,0x00,0x64,0xEB,0x00,0x01,0x80,0x00,0x65,0x0A,0x00,0x01,0x80,0x00,0x65,0x55,0x00,0x01,0x84,0x00,0x65,0x7E,0x00,0x01,0x84,0x00,0x65,0x96,0x00,0x01,0x84,0x00,0x65,0xC5,0x00,0x01,0x84,0x00,0x65,0xEE,0x00,0x01,0x84,0x00,0x66,0x06,0x00,0x01,0x84,0x00,0x66,0x1F,0x00,0x01,0x82,0x00,0x66,0x3D,0x00,0x01,0x80,0x00,0x66,0x65,0x00,0x01,0x80,0x00,0x66,0xD6,0x00,0x01,0x82,0x00,0x66,0xE4,0x00,0x09,0x9F,0x22,0x63,0xA4,0x82,0x22,0x9F,0xF1,0x84,0x00,0x67,0x7B,0x00,0x01,0x82,0x00,0x67,0xB9,0x00,0x01,0x82,0x00,0x6A,0x6B,0x00,0x01,0x82,0x00,0x6A,0x77,0x00,0x01,0x82,0x00,0x6C,0x01,0x00,0x01,0x81,0x00,0x6C,0x16,0x00,0x01,0x81,0x00,0x6C,0x2B,0x00,0x01,0x81,0x00,0x6C,0x43,0x00,0x01,0x81,0x00,0x6C,0xC5,0x00,0x01,0x82,0x00,0x6C,0xEA,0x00,0x01,0x82,0x00,0x6D,0x26,0x00,0x01,0x84,0x00,0x6D,0x54,0x00,0x01,0x82,0x00,0x6D,0x65,0x00,0x01,0x84,0x00,0x6D,0xA1,0x00,0x01,0x84,0x00,0x6E,0x00,0x00,0x01,0x82,0x00,0x70,0xB0,0x00,0x01,0x82,0x00,0x73,0x0E,0x00,0x01,0x82,0x00,0x73,0x1F,0x00,0x01,0x84,0x00,0x73,0x2D,0x00,0x01,0x82,0x00,0x73,0x3E,0x00,0x01,0x84,0x00,0x73,0x4C,0x00,0x01,0x82,0x00,0x73,0x5D,0x00,0x01,0x84,0x00,0x73,0x6B,0x00,0x01,0x82,0x00,0x73,0x7C,0x00,0x01,0x84,0x00,0x73,0xBB,0x00,0x01,0x82,0x00,0x73,0xCC,0x00,0x01,0x84,0x00,0x73,0xDA,0x00,0x01,0x82,0x00,0x73,0xEB,0x00,0x01,0x84,0x00,0x73,0xF9,0x00,0x01,0x82,0x00,0x74,0x0A,0x00,0x01,0x84,0x00,0x75,0x84,0x00,0x01,0x82,0x00,0x76,0x33,0x00,0x01,0x82,0x00,0x76,0x3F,0x00,0x01,0x82,0x00,0x76,0xC6,0x00,0x01,0x80,0x00,0x76,0xCD,0x00,0x01,0x80,0x00,0x77,0x07,0x00,0x01,0x84,0x00,0x7F,0x78,0x00,0x0A,0xBD,0x16,0x00,0x89,0x00,0x10,0x5C,0x28,0x8A,0x80,0x00,0x7F,0x8B,0x00,0x13,0xE2,0x20,0xA3,0x07,0x09,0x80,0x83,0x07,0xC2,0x20,0x68,0x68,0x6B,0xBD,0x36,0x00,0x09,0x80,0x60,0x00,0x7F,0xA8,0x00,0x18,0x5C,0x42,0x83,0x80,0x5C,0x00,0x89,0x80,0x5C,0x1E,0xD6,0x80,0x5C,0xFC,0xD5,0x80,0x22,0xAC,0xB9,0x82,0x5C,0x18,0x80,0x80,0x00,0x7F,0xDC,0x00,0x10,0xC8,0x73,0x37,0x8C,0x00,0x00,0x80,0x00,0xB0,0xFF,0xB4,0xFF,0x00,0x00,0xA8,0xFF,0x00,0x7F,0xF6,0x00,0x02,0xAC,0xFF,0x01,0x01,0xA5,0x00,0x01,0x82,0x01,0x02,0xDF,0x00,0x01,0x82,0x01,0x03,0x08,0x00,0x01,0x82,0x01,0x03,0x3B,0x00,0x01,0x82,0x01,0x03,0xB7,0x00,0x01,0x82,0x01,0x06,0xF9,0x00,0x01,0x84,0x01,0x07,0x93,0x00,0x01,0x84,0x01,0x07,0xB4,0x00,0x01,0x84,0x01,0x08,0x86,0x00,0x01,0x84,0x01,0x08,0xC4,0x00,0x13,0x82,0x85,0x16,0xBF,0x0A,0xF5,0x82,0x85,0x18,0x22,0xB8,0xF2,0x84,0xDA,0xBB,0xBF,0x04,0xF5,0x82,0x01,0x08,0xE3,0x00,0x01,0x82,0x01,0x08,0xF0,0x00,0x01,0x82,0x01,0x08,0xF9,0x00,0x01,0x82,0x01,0x09,0x1E,0x00,0x01,0x84,0x01,0x09,0x8D,0x00,0x01,0x84,0x01,0x09,0xAA,0x00,0x01,0x84,0x01,0x09,0xBE,0x00,0x01,0x84,0x01,0x09,0xF3,0x00,0x01,0x84,0x01,0x0A,0x06,0x00,0x13,0x82,0x80,0x12,0x22,0x9B,0x8B,0x82,0xB0,0x0C,0x22,0x29,0x8A,0x82,0xB0,0x06,0x22,0xF2,0x8A,0x82,0x01,0x0A,0x2C,0x00,0x01,0x84,0x01,0x0A,0x70,0x00,0x01,0x84,0x01,0x0A,0x8A,0x00,0x07,0x84,0xB0,0xCD,0x22,0x48,0xF3,0x84,0x01,0x0A,0x9D,0x00,0x01,0x82,0x01,0x0A,0xA5,0x00,0x07,0x82,0xA9,0x1E,0x22,0x40,0xB1,0x82,0x01,0x0A,0xBE,0x00,0x01,0x82,0x01,0x0A,0xC5,0x00,0x01,0x82,0x01,0x0A,0xD0,0x00,0x01,0x82,0x01,0x0A,0xDE,0x00,0x01,0x84,0x01,0x0A,0xED,0x00,0x01,0x82,0x01,0x0B,0xBF,0x00,0x01,0x84,0x01,0x0B,0xF5,0x00,0x01,0x80,0x01,0x0C,0x94,0x00,0x01,0x84,0x01,0x0C,0x9B,0x00,0x01,0x84,0x01,0x0C,0xE9,0x00,0x01,0x80,0x01,0x0C,0xF4,0x00,0x01,0x80,0x01,0x0D,0x00,0x00,0x01,0x80,0x01,0x0D,0x10,0x00,0x01,0x80,0x01,0x0D,0xA6,0x00,0x01,0x82,0x01,0x0D,0xAD,0x00,0x01,0x82,0x01,0x0D,0xFA,0x00,0x05,0x82,0x22,0x73,0x81,0x80,0x01,0x0E,0x3C,0x00,0x01,0x84,0x01,0x0E,0x4A,0x00,0x01,0x82,0x01,0x0E,0x71,0x00,0x01,0x80,0x01,0x0E,0x84,0x00,0x01,0x80,0x01,0x0E,0x9E,0x00,0x01,0x84,0x01,0x0E,0xA5,0x00,0x01,0x84,0x01,0x0E,0xBC,0x00,0x01,0x84,0x01,0x0E,0xCA,0x00,0x01,0x82,0x01,0x0E,0xE8,0x00,0x01,0x82,0x01,0x0F,0x22,0x00,0x01,0x82,0x01,0x0F,0x33,0x00,0x01,0x82,0x01,0x0F,0xD7,0x00,0x01,0x82,0x01,0x0F,0xE8,0x00,0x01,0x82,0x01,0x10,0x6D,0x00,0x01,0x82,0x01,0x10,0xD1,0x00,0x01,0x82,0x01,0x11,0x48,0x00,0x01,0x84,0x01,0x11,0x5D,0x00,0x01,0x82,0x01,0x11,0x65,0x00,0x01,0x82,0x01,0x11,0xB0,0x00,0x01,0x84,0x01,0x11,0xBE,0x00,0x01,0x84,0x01,0x11,0xD1,0x00,0x01,0x84,0x01,0x11,0xF3,0x00,0x01,0x84,0x01,0x12,0x2C,0x00,0x01,0x84,0x01,0x12,0x36,0x00,0x01,0x84,0x01,0x12,0x44,0x00,0x01,0x84,0x01,0x12,0x51,0x00,0x01,0x84,0x01,0x12,0x64,0x00,0x01,0x84,0x01,0x12,0x86,0x00,0x01,0x84,0x01,0x12,0xC3,0x00,0x01,0x84,0x01,0x12,0xCD,0x00,0x01,0x84,0x01,0x12,0xDB,0x00,0x01,0x84,0x01,0x12,0xE8,0x00,0x01,0x84,0x01,0x13,0xCF,0x00,0x01,0x84,0x01,0x13,0xF0,0x00,0x01,0x84,0x01,0x14,0x05,0x00,0x01,0x82,0x01,0x14,0x13,0x00,0x01,0x82,0x01,0x14,0x84,0x00,0x01,0x84,0x01,0x15,0x0F,0x00,0x01,0x84,0x01,0x15,0x36,0x00,0x01,0x84,0x01,0x15,0x43,0x00,0x01,0x82,0x01,0x15,0xA2,0x00,0x01,0x80,0x01,0x15,0xD1,0x00,0x01,0x84,0x01,0x15,0xF8,0x00,0x01,0x82,0x01,0x16,0x05,0x00,0x06,0x82,0xEB,0xBF,0x8E,0xF2,0x82,0x01,0x16,0x11,0x00,0x01,0x84,0x01,0x16,0x25,0x00,0x01,0x82,0x01,0x16,0x2C,0x00,0x01,0x82,0x01,0x16,0x33,0x00,0x01,0x82,0x01,0x16,0x3A,0x00,0x01,0x82,0x01,0x16,0x43,0x00,0x01,0x82,0x01,0x16,0x50,0x00,0x01,0x82,0x01,0x16,0x7E,0x00,0x01,0x84,0x01,0x16,0xAB,0x00,0x01,0x82,0x01,0x18,0x4D,0x00,0x01,0x82,0x01,0x18,0x59,0x00,0x01,0x82,0x01,0x18,0x7B,0x00,0x01,0x82,0x01,0x18,0x97,0x00,0x01,0x82,0x01,0x19,0x22,0x00,0x01,0x82,0x01,0x19,0x2C,0x00,0x01,0x82,0x01,0x19,0x4D,0x00,0x01,0x82,0x01,0x19,0x5B,0x00,0x01,0x82,0x01,0x19,0x75,0x00,0x01,0x82,0x01,0x19,0xA3,0x00,0x01,0x82,0x01,0x19,0xAB,0x00,0x01,0x82,0x01,0x19,0xC5,0x00,0x01,0x82,0x01,0x19,0xDB,0x00,0x01,0x82,0x01,0x19,0xE2,0x00,0x06,0x82,0x6B,0x22,0xD4,0xF3,0x84,0x01,0x1A,0x7D,0x00,0x01,0x84,0x01,0x1B,0x38,0x00,0x01,0x80,0x01,0x1B,0x67,0x00,0x01,0x82,0x01,0x1B,0x6E,0x00,0x01,0x82,0x01,0x1B,0x8E,0x00,0x01,0x84,0x01,0x1B,0x9C,0x00,0x01,0x82,0x01,0x1B,0xF6,0x00,0x01,0x82,0x01,0x1C,0x07,0x00,0x01,0x82,0x01,0x1C,0x43,0x00,0x01,0x82,0x01,0x1C,0x4A,0x00,0x01,0x82,0x01,0x1C,0x56,0x00,0x01,0x80,0x01,0x1C,0x60,0x00,0x01,0x84,0x01,0x1C,0x6C,0x00,0x09,0x82,0x22,0x27,0x81,0x80,0x22,0xB7,0xB1,0x82,0x01,0x1C,0x84,0x00,0x01,0x82,0x01,0x1C,0x8D,0x00,0x05,0x82,0x22,0x76,0xB1,0x82,0x01,0x1C,0x9D,0x00,0x01,0x82,0x01,0x1C,0xA6,0x00,0x01,0x82,0x01,0x1C,0xD9,0x00,0x01,0x82,0x01,0x1C,0xFA,0x00,0x01,0x82,0x01,0x1D,0x18,0x00,0x01,0x82,0x01,0x1D,0x36,0x00,0x01,0x82,0x01,0x1D,0x51,0x00,0x01,0x82,0x01,0x1D,0x5A,0x00,0x01,0x82,0x01,0x1D,0x69,0x00,0x01,0x82,0x01,0x1D,0x72,0x00,0x01,0x82,0x01,0x1D,0x7E,0x00,0x01,0x82,0x01,0x1D,0x87,0x00,0x01,0x82,0x01,0x1D,0x96,0x00,0x01,0x82,0x01,0x1D,0x9F,0x00,0x01,0x82,0x01,0x1D,0xCC,0x00,0x01,0x82,0x01,0x1D,0xEE,0x00,0x01,0x82,0x01,0x1D,0xF5,0x00,0x01,0x82,0x01,0x1D,0xFC,0x00,0x01,0x82,0x01,0x1E,0x3D,0x00,0x01,0x82,0x01,0x1E,0xF3,0x00,0x01,0x82,0x01,0x1E,0xFA,0x00,0x01,0x82,0x01,0x1F,0x04,0x00,0x01,0x82,0x01,0x1F,0x0F,0x00,0x01,0x82,0x01,0x1F,0xB7,0x00,0x01,0x89,0x01,0x1F,0xBE,0x00,0x01,0x89,0x01,0x1F,0xC5,0x00,0x01,0x89,0x01,0x1F,0xCC,0x00,0x01,0x89,0x01,0x20,0x1B,0x00,0x01,0x82,0x01,0x20,0x2D,0x00,0x01,0x82,0x01,0x20,0x34,0x00,0x01,0x82,0x01,0x20,0x3B,0x00,0x01,0x82,0x01,0x20,0x7F,0x00,0x01,0x82,0x01,0x21,0xFC,0x00,0x01,0x82,0x01,0x23,0xB3,0x00,0x01,0x89,0x01,0x23,0xBA,0x00,0x01,0x89,0x01,0x23,0xC1,0x00,0x01,0x89,0x01,0x23,0xC8,0x00,0x01,0x89,0x01,0x25,0x11,0x00,0x01,0x82,0x01,0x25,0x18,0x00,0x01,0x82,0x01,0x26,0x51,0x00,0x01,0x82,0x01,0x26,0x7B,0x00,0x01,0x82,0x01,0x26,0x85,0x00,0x05,0x84,0x22,0x14,0xF6,0x84,0x01,0x26,0x9A,0x00,0x01,0x82,0x01,0x26,0xA6,0x00,0x01,0x82,0x01,0x26,0xB2,0x00,0x01,0x82,0x01,0x26,0xBE,0x00,0x01,0x82,0x01,0x26,0xCA,0x00,0x01,0x82,0x01,0x26,0xD4,0x00,0x01,0x82,0x01,0x27,0x22,0x00,0x01,0x80,0x01,0x27,0x6E,0x00,0x01,0x82,0x01,0x28,0x7D,0x00,0x01,0x82,0x01,0x2A,0xD7,0x00,0x01,0x81,0x01,0x2A,0xDF,0x00,0x01,0x81,0x01,0x2A,0xE9,0x00,0x01,0x81,0x01,0x2A,0xF1,0x00,0x01,0x81,0x01,0x2C,0x32,0x00,0x01,0x82,0x01,0x2D,0x9B,0x00,0x01,0x82,0x01,0x2D,0xC9,0x00,0x01,0x82,0x01,0x2E,0x96,0x00,0x01,0x82,0x01,0x2E,0xF0,0x00,0x01,0x82,0x01,0x31,0x36,0x00,0x01,0x82,0x01,0x31,0x45,0x00,0x01,0x80,0x01,0x31,0x64,0x00,0x01,0x80,0x01,0x31,0x71,0x00,0x01,0x82,0x01,0x31,0x7C,0x00,0x01,0x82,0x01,0x31,0x92,0x00,0x01,0x82,0x01,0x31,0xCC,0x00,0x01,0x82,0x01,0x35,0x00,0x00,0x01,0x82,0x01,0x35,0xFE,0x00,0x01,0x82,0x01,0x36,0x89,0x00,0x01,0x82,0x01,0x36,0xE5,0x00,0x01,0x82,0x01,0x37,0x0D,0x00,0x01,0x82,0x01,0x37,0x79,0x00,0x01,0x82,0x01,0x37,0x84,0x00,0x01,0x82,0x01,0x37,0x91,0x00,0x01,0x82,0x01,0x37,0x9B,0x00,0x01,0x82,0x01,0x37,0xA2,0x00,0x01,0x82,0x01,0x37,0xAC,0x00,0x01,0x82,0x01,0x37,0xB5,0x00,0x01,0x82,0x01,0x37,0xF2,0x00,0x01,0x82,0x01,0x38,0x00,0x00,0x01,0x82,0x01,0x38,0x1D,0x00,0x01,0x82,0x01,0x38,0x38,0x00,0x01,0x82,0x01,0x38,0x43,0x00,0x01,0x82,0x01,0x38,0x4C,0x00,0x01,0x82,0x01,0x38,0x69,0x00,0x07,0x82,0x90,0x08,0xBF,0xAC,0xE8,0x82,0x01,0x38,0x77,0x00,0x01,0x82,0x01,0x38,0x8C,0x00,0x01,0x82,0x01,0x38,0xDE,0x00,0x01,0x82,0x01,0x38,0xE9,0x00,0x0B,0x82,0x22,0xF5,0xEF,0x9F,0xA9,0x03,0x22,0xC9,0xB1,0x82,0x01,0x39,0x3D,0x00,0x01,0x82,0x01,0x3A,0xA2,0x00,0x01,0xEE,0x01,0xAB,0x59,0x00,0x01,0x83,0x01,0xAC,0x09,0x00,0x01,0x83,0x01,0xAC,0x35,0x00,0x01,0x83,0x01,0xAD,0x45,0x00,0x01,0x83,0x01,0xAD,0xFB,0x00,0x01,0x83,0x01,0xB1,0x72,0x00,0x01,0x80,0x01,0xB2,0x4B,0x00,0x01,0x82,0x01,0xB2,0x81,0x00,0x01,0x82,0x01,0xB5,0x20,0x00,0x01,0x82,0x01,0xC0,0x8D,0x00,0x01,0x83,0x01,0xC0,0xB3,0x00,0x01,0x83,0x01,0xE4,0xC6,0x00,0x01,0x83,0x01,0xE5,0x1A,0x00,0x01,0x83,0x01,0xE5,0x4A,0x00,0x01,0x83,0x01,0xE5,0x9E,0x00,0x01,0x83,0x01,0xE9,0xB6,0x00,0x01,0x84,0x01,0xEA,0x40,0x00,0x01,0x83,0x01,0xEA,0x4B,0x00,0x01,0x83,0x01,0xEA,0x6A,0x00,0x01,0x82,0x01,0xEA,0x76,0x00,0x01,0x82,0x01,0xEB,0x49,0x00,0x01,0x83,0x01,0xEB,0x54,0x00,0x01,0x83,0x01,0xEB,0x71,0x00,0x01,0x82,0x01,0xEB,0x7D,0x00,0x01,0x82,0x01,0xEF,0x40,0x00,0x01,0x83,0x01,0xEF,0x5E,0x00,0x01,0x82,0x01,0xF0,0xAB,0x00,0x01,0x83,0x01,0xF0,0xCA,0x00,0x01,0x82,0x01,0xF1,0xF5,0x00,0x01,0x82,0x02,0x1E,0xD8,0x00,0x01,0x83,0x02,0x1F,0x2C,0x00,0x01,0x83,0x02,0x20,0x2A,0x00,0x01,0x84,0x02,0x23,0x52,0x00,0x01,0x82,0x02,0x23,0xB9,0x00,0x01,0x84,0x02,0x23,0xD2,0x00,0x01,0x82,0x02,0x24,0x6E,0x00,0x01,0x82,0x02,0x3D,0xDD,0x00,0x01,0x83,0x02,0x3E,0x31,0x00,0x01,0x83,0x02,0x3E,0x61,0x00,0x01,0x83,0x02,0x3F,0x23,0x00,0x01,0x84,0x02,0x3F,0x2C,0x00,0x01,0x84,0x02,0x5E,0xB7,0x00,0x01,0x80,0x02,0x6D,0xE1,0x00,0x01,0x83,0x02,0x6E,0xA7,0x00,0x01,0x83,0x02,0x71,0x13,0x00,0x01,0x84,0x02,0x71,0x41,0x00,0x01,0x84,0x02,0x71,0xBC,0x00,0x01,0x82,0x02,0x71,0xE5,0x00,0x01,0x82,0x02,0x72,0x0E,0x00,0x01,0x82,0x02,0x72,0x20,0x00,0x01,0x84,0x02,0x72,0x4F,0x00,0x01,0x84,0x02,0x72,0xC3,0x00,0x01,0x82,0x02,0x73,0x66,0x00,0x01,0x81,0x02,0x73,0xC0,0x00,0x01,0x81,0x02,0x74,0x2F,0x00,0x01,0x80,0x02,0x74,0x50,0x00,0x01,0x80,0x02,0x74,0x9E,0x00,0x01,0x84,0x02,0x74,0xC4,0x00,0x01,0x84,0x02,0x74,0xD6,0x00,0x01,0x84,0x02,0x74,0xFC,0x00,0x01,0x84,0x02,0x75,0x0B,0x00,0x01,0x84,0x02,0x75,0x31,0x00,0x01,0x84,0x02,0x75,0x41,0x00,0x01,0x84,0x02,0x75,0x51,0x00,0x01,0x84,0x02,0x75,0x60,0x00,0x01,0x84,0x02,0x75,0x95,0x00,0x01,0x82,0x02,0x75,0xA4,0x00,0x01,0x82,0x02,0x75,0xAB,0x00,0x01,0x82,0x02,0x75,0xC1,0x00,0x01,0x82,0x02,0x75,0xCF,0x00,0x01,0x82,0x02,0x75,0xE6,0x00,0x01,0x82,0x02,0x76,0x7E,0x00,0x01,0x84,0x02,0x77,0x31,0x00,0x01,0x82,0x02,0x77,0xA0,0x00,0x01,0x82,0x02,0x77,0xB3,0x00,0x09,0x84,0x22,0x27,0x81,0x80,0x22,0xA2,0xB1,0x82,0x02,0x77,0xD3,0x00,0x01,0x80,0x02,0x77,0xF9,0x00,0x01,0x80,0x02,0x78,0x0E,0x00,0x05,0x80,0x22,0x27,0x81,0x80,0x02,0x78,0x48,0x00,0x01,0x80,0x02,0x78,0x61,0x00,0x05,0x80,0x22,0x27,0x81,0x80,0x02,0x78,0x87,0x00,0x01,0x84,0x02,0x78,0x97,0x00,0x05,0x80,0x22,0x27,0x81,0x80,0x02,0x78,0xB7,0x00,0x01,0x89,0x02,0x78,0xBE,0x00,0x01,0x89,0x02,0x78,0xC5,0x00,0x01,0x89,0x02,0x78,0xCC,0x00,0x01,0x89,0x02,0x78,0xD3,0x00,0x01,0x89,0x02,0x78,0xDA,0x00,0x01,0x89,0x02,0x78,0xE1,0x00,0x01,0x89,0x02,0x78,0xE8,0x00,0x01,0x89,0x02,0x7A,0x30,0x00,0x01,0x82,0x02,0x7A,0x3C,0x00,0x09,0x82,0x22,0x9C,0xA4,0x82,0x22,0x23,0xF7,0x84,0x02,0x7A,0x51,0x00,0x01,0x82,0x02,0x7A,0x58,0x00,0x01,0x82,0x02,0x7A,0x5F,0x00,0x35,0x80,0x22,0xDE,0x92,0x80,0x22,0x95,0x93,0x82,0x22,0xF5,0x92,0x82,0x22,0x7E,0x95,0x82,0x22,0x45,0x94,0x82,0x22,0xD0,0x94,0x82,0x22,0xE4,0x94,0x82,0x22,0xF1,0x95,0x82,0x22,0xEE,0xF6,0x84,0x22,0x06,0xF7,0x84,0x22,0xA6,0x85,0x80,0x22,0xA6,0x85,0x80,0x22,0xF9,0xF3,0x84,0x02,0x7A,0x9E,0x00,0x01,0x82,0x02,0x7A,0xC5,0x00,0x01,0x84,0x0F,0x8C,0xB8,0x00,0x01,0x84,0x0F,0xA4,0x4A,0x00,0x01,0x83,0x0F,0xA4,0xCE,0x00,0x01,0x83,0x0F,0xA4,0xFE,0x00,0x01,0x83,0x0F,0xA5,0xCB,0x00,0x01,0x84,0x0F,0xA6,0xBA,0x00,0x01,0x80,0x0F,0xA8,0x11,0x00,0x01,0x9F,0x0F,0xA8,0x2F,0x00,0x01,0x82,0x0F,0xA8,0xCE,0x00,0x01,0x9F,0x0F,0xA8,0xD8,0x00,0x01,0x9F,0x0F,0xA8,0xF4,0x00,0x01,0x82,0x0F,0xA9,0x00,0x00,0x01,0x82,0x0F,0xC1,0x60,0x00,0x01,0x84,0x0F,0xED,0x1B,0x00,0x01,0x84,0x0F,0xEF,0xCB,0x00,0x05,0x82,0x22,0xB7,0xB1,0x82,0x0F,0xEF,0xE7,0x00,0x01,0x9F,0x0F,0xF0,0x01,0x00,0x05,0x82,0x22,0xB7,0xB1,0x82,0x45,0x4F,0x46
};

bool applyPatch (const std::string &OutFile, const unsigned char PatchBuffer[]);

#endif // FASTROM_PATCH_H__
