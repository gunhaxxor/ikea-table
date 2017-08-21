/**
** The original 3x5 font is licensed under the 3-clause BSD license:
**
** Copyright 1999 Brian J. Swetland
** Copyright 1999 Vassilii Khachaturov
** Portions (of vt100.c/vt100.h) copyright Dan Marks
**
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions
** are met:
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions, and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions, and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 3. The name of the authors may not be used to endorse or promote products
**    derived from this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
** THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
** Modifications to Tom Thumb for improved readability are from Robey Pointer,
** see:
** http://robey.lag.net/2010/01/23/tiny-monospace-font.html
**
** The original author does not have any objection to relicensing of Robey
** Pointer's modifications (in this file) in a more permissive license.  See
** the discussion at the above blog, and also here:
** http://opengameart.org/forumtopic/how-to-submit-art-using-the-3-clause-bsd-license
**
** Feb 21, 2016: Conversion from Linux BDF --> Adafruit GFX font,
** with the help of this Python script:
** https://gist.github.com/skelliam/322d421f028545f16f6d
** William Skellenger (williamj@skellenger.net)
** Twitter: @skelliam
**
*/

#define TOMTHUMB_USE_EXTENDED 1

const uint8_t TomThumbBitmaps[] PROGMEM = {
   0x00,                                /* 0x20 space */
   0x80, 0x80, 0x80, 0x00, 0x80,        /* 0x21 exclam */
   0xA0, 0xA0,                          /* 0x22 quotedbl */
   0xA0, 0xE0, 0xA0, 0xE0, 0xA0,        /* 0x23 numbersign */
   0x60, 0xC0, 0x60, 0xC0, 0x40,        /* 0x24 dollar */
   0x80, 0x20, 0x40, 0x80, 0x20,        /* 0x25 percent */
   0xC0, 0xC0, 0xE0, 0xA0, 0x60,        /* 0x26 ampersand */
   0x80, 0x80,                          /* 0x27 quotesingle */
   0x40, 0x80, 0x80, 0x80, 0x40,        /* 0x28 parenleft */
   0x80, 0x40, 0x40, 0x40, 0x80,        /* 0x29 parenright */
   0xA0, 0x40, 0xA0,                    /* 0x2A asterisk */
   0x40, 0xE0, 0x40,                    /* 0x2B plus */
   0x40, 0x80,                          /* 0x2C comma */
   0xE0,                                /* 0x2D hyphen */
   0x80,                                /* 0x2E period */
   0x20, 0x20, 0x40, 0x80, 0x80,        /* 0x2F slash */
   0x60, 0xA0, 0xA0, 0xA0, 0xC0,        /* 0x30 zero */
   0x40, 0xC0, 0x40, 0x40, 0x40,        /* 0x31 one */
   0xC0, 0x20, 0x40, 0x80, 0xE0,        /* 0x32 two */
   0xC0, 0x20, 0x40, 0x20, 0xC0,        /* 0x33 three */
   0xA0, 0xA0, 0xE0, 0x20, 0x20,        /* 0x34 four */
   0xE0, 0x80, 0xC0, 0x20, 0xC0,        /* 0x35 five */
   0x60, 0x80, 0xE0, 0xA0, 0xE0,        /* 0x36 six */
   0xE0, 0x20, 0x40, 0x80, 0x80,        /* 0x37 seven */
   0xE0, 0xA0, 0xE0, 0xA0, 0xE0,        /* 0x38 eight */
   0xE0, 0xA0, 0xE0, 0x20, 0xC0,        /* 0x39 nine */
   0x80, 0x00, 0x80,                    /* 0x3A colon */
   0x40, 0x00, 0x40, 0x80,              /* 0x3B semicolon */
   0x20, 0x40, 0x80, 0x40, 0x20,        /* 0x3C less */
   0xE0, 0x00, 0xE0,                    /* 0x3D equal */
   0x80, 0x40, 0x20, 0x40, 0x80,        /* 0x3E greater */
   0xE0, 0x20, 0x40, 0x00, 0x40,        /* 0x3F question */
   0x40, 0xA0, 0xE0, 0x80, 0x60,        /* 0x40 at */
   0x40, 0xA0, 0xE0, 0xA0, 0xA0,        /* 0x41 A */
   0xC0, 0xA0, 0xC0, 0xA0, 0xC0,        /* 0x42 B */
   0x60, 0x80, 0x80, 0x80, 0x60,        /* 0x43 C */
   0xC0, 0xA0, 0xA0, 0xA0, 0xC0,        /* 0x44 D */
   0xE0, 0x80, 0xE0, 0x80, 0xE0,        /* 0x45 E */
   0xE0, 0x80, 0xE0, 0x80, 0x80,        /* 0x46 F */
   0x60, 0x80, 0xE0, 0xA0, 0x60,        /* 0x47 G */
   0xA0, 0xA0, 0xE0, 0xA0, 0xA0,        /* 0x48 H */
   0xE0, 0x40, 0x40, 0x40, 0xE0,        /* 0x49 I */
   0x20, 0x20, 0x20, 0xA0, 0x40,        /* 0x4A J */
   0xA0, 0xA0, 0xC0, 0xA0, 0xA0,        /* 0x4B K */
   0x80, 0x80, 0x80, 0x80, 0xE0,        /* 0x4C L */
   0xA0, 0xE0, 0xE0, 0xA0, 0xA0,        /* 0x4D M */
   0xA0, 0xE0, 0xE0, 0xE0, 0xA0,        /* 0x4E N */
   0x40, 0xA0, 0xA0, 0xA0, 0x40,        /* 0x4F O */
   0xC0, 0xA0, 0xC0, 0x80, 0x80,        /* 0x50 P */
   0x40, 0xA0, 0xA0, 0xE0, 0x60,        /* 0x51 Q */
   0xC0, 0xA0, 0xE0, 0xC0, 0xA0,        /* 0x52 R */
   0x60, 0x80, 0x40, 0x20, 0xC0,        /* 0x53 S */
   0xE0, 0x40, 0x40, 0x40, 0x40,        /* 0x54 T */
   0xA0, 0xA0, 0xA0, 0xA0, 0x60,        /* 0x55 U */
   0xA0, 0xA0, 0xA0, 0x40, 0x40,        /* 0x56 V */
   0xA0, 0xA0, 0xE0, 0xE0, 0xA0,        /* 0x57 W */
   0xA0, 0xA0, 0x40, 0xA0, 0xA0,        /* 0x58 X */
   0xA0, 0xA0, 0x40, 0x40, 0x40,        /* 0x59 Y */
   0xE0, 0x20, 0x40, 0x80, 0xE0,        /* 0x5A Z */
   0xE0, 0x80, 0x80, 0x80, 0xE0,        /* 0x5B bracketleft */
   0x80, 0x40, 0x20,                    /* 0x5C backslash */
   0xE0, 0x20, 0x20, 0x20, 0xE0,        /* 0x5D bracketright */
   0x40, 0xA0,                          /* 0x5E asciicircum */
   0xE0,                                /* 0x5F underscore */
   0x80, 0x40,                          /* 0x60 grave */
   0xC0, 0x60, 0xA0, 0xE0,              /* 0x61 a */
   0x80, 0xC0, 0xA0, 0xA0, 0xC0,        /* 0x62 b */
   0x60, 0x80, 0x80, 0x60,              /* 0x63 c */
   0x20, 0x60, 0xA0, 0xA0, 0x60,        /* 0x64 d */
   0x60, 0xA0, 0xC0, 0x60,              /* 0x65 e */
   0x20, 0x40, 0xE0, 0x40, 0x40,        /* 0x66 f */
   0x60, 0xA0, 0xE0, 0x20, 0x40,        /* 0x67 g */
   0x80, 0xC0, 0xA0, 0xA0, 0xA0,        /* 0x68 h */
   0x80, 0x00, 0x80, 0x80, 0x80,        /* 0x69 i */
   0x20, 0x00, 0x20, 0x20, 0xA0, 0x40,  /* 0x6A j */
   0x80, 0xA0, 0xC0, 0xC0, 0xA0,        /* 0x6B k */
   0xC0, 0x40, 0x40, 0x40, 0xE0,        /* 0x6C l */
   0xE0, 0xE0, 0xE0, 0xA0,              /* 0x6D m */
   0xC0, 0xA0, 0xA0, 0xA0,              /* 0x6E n */
   0x40, 0xA0, 0xA0, 0x40,              /* 0x6F o */
   0xC0, 0xA0, 0xA0, 0xC0, 0x80,        /* 0x70 p */
   0x60, 0xA0, 0xA0, 0x60, 0x20,        /* 0x71 q */
   0x60, 0x80, 0x80, 0x80,              /* 0x72 r */
   0x60, 0xC0, 0x60, 0xC0,              /* 0x73 s */
   0x40, 0xE0, 0x40, 0x40, 0x60,        /* 0x74 t */
   0xA0, 0xA0, 0xA0, 0x60,              /* 0x75 u */
   0xA0, 0xA0, 0xE0, 0x40,              /* 0x76 v */
   0xA0, 0xE0, 0xE0, 0xE0,              /* 0x77 w */
   0xA0, 0x40, 0x40, 0xA0,              /* 0x78 x */
   0xA0, 0xA0, 0x60, 0x20, 0x40,        /* 0x79 y */
   0xE0, 0x60, 0xC0, 0xE0,              /* 0x7A z */
   0x60, 0x40, 0x80, 0x40, 0x60,        /* 0x7B braceleft */
   0x80, 0x80, 0x00, 0x80, 0x80,        /* 0x7C bar */
   0xC0, 0x40, 0x20, 0x40, 0xC0,        /* 0x7D braceright */
   0x60, 0xC0,                          /* 0x7E asciitilde */
#if (TOMTHUMB_USE_EXTENDED)
   0x80, 0x00, 0x80, 0x80, 0x80,        /* 0xA1 exclamdown */
   0x40, 0xE0, 0x80, 0xE0, 0x40,        /* 0xA2 cent */
   0x60, 0x40, 0xE0, 0x40, 0xE0,        /* 0xA3 sterling */
   0xA0, 0x40, 0xE0, 0x40, 0xA0,        /* 0xA4 currency */
   0xA0, 0xA0, 0x40, 0xE0, 0x40,        /* 0xA5 yen */
   0x80, 0x80, 0x00, 0x80, 0x80,        /* 0xA6 brokenbar */
   0x60, 0x40, 0xA0, 0x40, 0xC0,        /* 0xA7 section */
   0xA0,                                /* 0xA8 dieresis */
   0x60, 0x80, 0x60,                    /* 0xA9 copyright */
   0x60, 0xA0, 0xE0, 0x00, 0xE0,        /* 0xAA ordfeminine */
   0x40, 0x80, 0x40,                    /* 0xAB guillemotleft */
   0xE0, 0x20,                          /* 0xAC logicalnot */
   0xC0,                                /* 0xAD softhyphen */
   0xC0, 0xC0, 0xA0,                    /* 0xAE registered */
   0xE0,                                /* 0xAF macron */
   0x40, 0xA0, 0x40,                    /* 0xB0 degree */
   0x40, 0xE0, 0x40, 0x00, 0xE0,        /* 0xB1 plusminus */
   0xC0, 0x40, 0x60,                    /* 0xB2 twosuperior */
   0xE0, 0x60, 0xE0,                    /* 0xB3 threesuperior */
   0x40, 0x80,                          /* 0xB4 acute */
   0xA0, 0xA0, 0xA0, 0xC0, 0x80,        /* 0xB5 mu */
   0x60, 0xA0, 0x60, 0x60, 0x60,        /* 0xB6 paragraph */
   0xE0, 0xE0, 0xE0,                    /* 0xB7 periodcentered */
   0x40, 0x20, 0xC0,                    /* 0xB8 cedilla */
   0x80, 0x80, 0x80,                    /* 0xB9 onesuperior */
   0x40, 0xA0, 0x40, 0x00, 0xE0,        /* 0xBA ordmasculine */
   0x80, 0x40, 0x80,                    /* 0xBB guillemotright */
   0x80, 0x80, 0x00, 0x60, 0x20,        /* 0xBC onequarter */
   0x80, 0x80, 0x00, 0xC0, 0x60,        /* 0xBD onehalf */
   0xC0, 0xC0, 0x00, 0x60, 0x20,        /* 0xBE threequarters */
   0x40, 0x00, 0x40, 0x80, 0xE0,        /* 0xBF questiondown */
   0x40, 0x20, 0x40, 0xE0, 0xA0,        /* 0xC0 Agrave */
   0x40, 0x80, 0x40, 0xE0, 0xA0,        /* 0xC1 Aacute */
   0xE0, 0x00, 0x40, 0xE0, 0xA0,        /* 0xC2 Acircumflex */
   0x60, 0xC0, 0x40, 0xE0, 0xA0,        /* 0xC3 Atilde */
   0xA0, 0x40, 0xA0, 0xE0, 0xA0,        /* 0xC4 Adieresis */
   0xC0, 0xC0, 0xA0, 0xE0, 0xA0,        /* 0xC5 Aring */
   0x60, 0xC0, 0xE0, 0xC0, 0xE0,        /* 0xC6 AE */
   0x60, 0x80, 0x80, 0x60, 0x20, 0x40,  /* 0xC7 Ccedilla */
   0x40, 0x20, 0xE0, 0xC0, 0xE0,        /* 0xC8 Egrave */
   0x40, 0x80, 0xE0, 0xC0, 0xE0,        /* 0xC9 Eacute */
   0xE0, 0x00, 0xE0, 0xC0, 0xE0,        /* 0xCA Ecircumflex */
   0xA0, 0x00, 0xE0, 0xC0, 0xE0,        /* 0xCB Edieresis */
   0x40, 0x20, 0xE0, 0x40, 0xE0,        /* 0xCC Igrave */
   0x40, 0x80, 0xE0, 0x40, 0xE0,        /* 0xCD Iacute */
   0xE0, 0x00, 0xE0, 0x40, 0xE0,        /* 0xCE Icircumflex */
   0xA0, 0x00, 0xE0, 0x40, 0xE0,        /* 0xCF Idieresis */
   0xC0, 0xA0, 0xE0, 0xA0, 0xC0,        /* 0xD0 Eth */
   0xC0, 0x60, 0xA0, 0xE0, 0xA0,        /* 0xD1 Ntilde */
   0x40, 0x20, 0xE0, 0xA0, 0xE0,        /* 0xD2 Ograve */
   0x40, 0x80, 0xE0, 0xA0, 0xE0,        /* 0xD3 Oacute */
   0xE0, 0x00, 0xE0, 0xA0, 0xE0,        /* 0xD4 Ocircumflex */
   0xC0, 0x60, 0xE0, 0xA0, 0xE0,        /* 0xD5 Otilde */
   0xA0, 0x00, 0xE0, 0xA0, 0xE0,        /* 0xD6 Odieresis */
   0xA0, 0x40, 0xA0,                    /* 0xD7 multiply */
   0x60, 0xA0, 0xE0, 0xA0, 0xC0,        /* 0xD8 Oslash */
   0x80, 0x40, 0xA0, 0xA0, 0xE0,        /* 0xD9 Ugrave */
   0x20, 0x40, 0xA0, 0xA0, 0xE0,        /* 0xDA Uacute */
   0xE0, 0x00, 0xA0, 0xA0, 0xE0,        /* 0xDB Ucircumflex */
   0xA0, 0x00, 0xA0, 0xA0, 0xE0,        /* 0xDC Udieresis */
   0x20, 0x40, 0xA0, 0xE0, 0x40,        /* 0xDD Yacute */
   0x80, 0xE0, 0xA0, 0xE0, 0x80,        /* 0xDE Thorn */
   0x60, 0xA0, 0xC0, 0xA0, 0xC0, 0x80,  /* 0xDF germandbls */
   0x40, 0x20, 0x60, 0xA0, 0xE0,        /* 0xE0 agrave */
   0x40, 0x80, 0x60, 0xA0, 0xE0,        /* 0xE1 aacute */
   0xE0, 0x00, 0x60, 0xA0, 0xE0,        /* 0xE2 acircumflex */
   0x60, 0xC0, 0x60, 0xA0, 0xE0,        /* 0xE3 atilde */
   0xA0, 0x00, 0x60, 0xA0, 0xE0,        /* 0xE4 adieresis */
   0x60, 0x60, 0x60, 0xA0, 0xE0,        /* 0xE5 aring */
   0x60, 0xE0, 0xE0, 0xC0,              /* 0xE6 ae */
   0x60, 0x80, 0x60, 0x20, 0x40,        /* 0xE7 ccedilla */
   0x40, 0x20, 0x60, 0xE0, 0x60,        /* 0xE8 egrave */
   0x40, 0x80, 0x60, 0xE0, 0x60,        /* 0xE9 eacute */
   0xE0, 0x00, 0x60, 0xE0, 0x60,        /* 0xEA ecircumflex */
   0xA0, 0x00, 0x60, 0xE0, 0x60,        /* 0xEB edieresis */
   0x80, 0x40, 0x80, 0x80, 0x80,        /* 0xEC igrave */
   0x40, 0x80, 0x40, 0x40, 0x40,        /* 0xED iacute */
   0xE0, 0x00, 0x40, 0x40, 0x40,        /* 0xEE icircumflex */
   0xA0, 0x00, 0x40, 0x40, 0x40,        /* 0xEF idieresis */
   0x60, 0xC0, 0x60, 0xA0, 0x60,        /* 0xF0 eth */
   0xC0, 0x60, 0xC0, 0xA0, 0xA0,        /* 0xF1 ntilde */
   0x40, 0x20, 0x40, 0xA0, 0x40,        /* 0xF2 ograve */
   0x40, 0x80, 0x40, 0xA0, 0x40,        /* 0xF3 oacute */
   0xE0, 0x00, 0x40, 0xA0, 0x40,        /* 0xF4 ocircumflex */
   0xC0, 0x60, 0x40, 0xA0, 0x40,        /* 0xF5 otilde */
   0xA0, 0x00, 0x40, 0xA0, 0x40,        /* 0xF6 odieresis */
   0x40, 0x00, 0xE0, 0x00, 0x40,        /* 0xF7 divide */
   0x60, 0xE0, 0xA0, 0xC0,              /* 0xF8 oslash */
   0x80, 0x40, 0xA0, 0xA0, 0x60,        /* 0xF9 ugrave */
   0x20, 0x40, 0xA0, 0xA0, 0x60,        /* 0xFA uacute */
   0xE0, 0x00, 0xA0, 0xA0, 0x60,        /* 0xFB ucircumflex */
   0xA0, 0x00, 0xA0, 0xA0, 0x60,        /* 0xFC udieresis */
   0x20, 0x40, 0xA0, 0x60, 0x20, 0x40,  /* 0xFD yacute */
   0x80, 0xC0, 0xA0, 0xC0, 0x80,        /* 0xFE thorn */
   0xA0, 0x00, 0xA0, 0x60, 0x20, 0x40,  /* 0xFF ydieresis */
   0x00,                                /* 0x11D gcircumflex */
   0x60, 0xC0, 0xE0, 0xC0, 0x60,        /* 0x152 OE */
   0x60, 0xE0, 0xC0, 0xE0,              /* 0x153 oe */
   0xA0, 0x60, 0xC0, 0x60, 0xC0,        /* 0x160 Scaron */
   0xA0, 0x60, 0xC0, 0x60, 0xC0,        /* 0x161 scaron */
   0xA0, 0x00, 0xA0, 0x40, 0x40,        /* 0x178 Ydieresis */
   0xA0, 0xE0, 0x60, 0xC0, 0xE0,        /* 0x17D Zcaron */
   0xA0, 0xE0, 0x60, 0xC0, 0xE0,        /* 0x17E zcaron */
   0x00,                                /* 0xEA4 uni0EA4 */
   0x00,                                /* 0x13A0 uni13A0 */
   0x80,                                /* 0x2022 bullet */
   0xA0,                                /* 0x2026 ellipsis */
   0x60, 0xE0, 0xE0, 0xC0, 0x60,        /* 0x20AC Euro */
   0xE0, 0xA0, 0xA0, 0xA0, 0xE0,        /* 0xFFFD uniFFFD */
#endif /* (TOMTHUMB_USE_EXTENDED)  */
  };


/* {offset, width, height, advance cursor, x offset, y offset} */
const GFXglyph TomThumbGlyphs[] PROGMEM = {
   { 0, 2, 1, 2, 0, -5 },    /* 0x20 space */
   { 1, 1, 5, 2, 0, -5 },    /* 0x21 exclam */
   { 6, 3, 2, 4, 0, -5 },    /* 0x22 quotedbl */
   { 8, 3, 5, 4, 0, -5 },    /* 0x23 numbersign */
   { 13, 3, 5, 4, 0, -5 },   /* 0x24 dollar */
   { 18, 3, 5, 4, 0, -5 },   /* 0x25 percent */
   { 23, 3, 5, 4, 0, -5 },   /* 0x26 ampersand */
   { 28, 1, 2, 2, 0, -5 },   /* 0x27 quotesingle */
   { 30, 2, 5, 3, 0, -5 },   /* 0x28 parenleft */
   { 35, 2, 5, 3, 0, -5 },   /* 0x29 parenright */
   { 40, 3, 3, 4, 0, -5 },   /* 0x2A asterisk */
   { 43, 3, 3, 4, 0, -4 },   /* 0x2B plus */
   { 46, 2, 2, 3, 0, -2 },   /* 0x2C comma */
   { 48, 3, 1, 4, 0, -3 },   /* 0x2D hyphen */
   { 49, 1, 1, 2, 0, -1 },   /* 0x2E period */
   { 50, 3, 5, 4, 0, -5 },   /* 0x2F slash */
   { 55, 3, 5, 4, 0, -5 },   /* 0x30 zero */
   { 60, 3, 5, 3, 0, -5 },   /* 0x31 one */
   { 65, 3, 5, 4, 0, -5 },   /* 0x32 two */
   { 70, 3, 5, 4, 0, -5 },   /* 0x33 three */
   { 75, 3, 5, 4, 0, -5 },   /* 0x34 four */
   { 80, 3, 5, 4, 0, -5 },   /* 0x35 five */
   { 85, 3, 5, 4, 0, -5 },   /* 0x36 six */
   { 90, 3, 5, 4, 0, -5 },   /* 0x37 seven */
   { 95, 3, 5, 4, 0, -5 },   /* 0x38 eight */
   { 100, 3, 5, 4, 0, -5 },  /* 0x39 nine */
   { 105, 1, 3, 2, 0, -4 },  /* 0x3A colon */
   { 108, 2, 4, 3, 0, -4 },  /* 0x3B semicolon */
   { 112, 3, 5, 4, 0, -5 },  /* 0x3C less */
   { 117, 3, 3, 4, 0, -4 },  /* 0x3D equal */
   { 120, 3, 5, 4, 0, -5 },  /* 0x3E greater */
   { 125, 3, 5, 4, 0, -5 },  /* 0x3F question */
   { 130, 3, 5, 4, 0, -5 },  /* 0x40 at */
   { 135, 3, 5, 4, 0, -5 },  /* 0x41 A */
   { 140, 3, 5, 4, 0, -5 },  /* 0x42 B */
   { 145, 3, 5, 4, 0, -5 },  /* 0x43 C */
   { 150, 3, 5, 4, 0, -5 },  /* 0x44 D */
   { 155, 3, 5, 4, 0, -5 },  /* 0x45 E */
   { 160, 3, 5, 4, 0, -5 },  /* 0x46 F */
   { 165, 3, 5, 4, 0, -5 },  /* 0x47 G */
   { 170, 3, 5, 4, 0, -5 },  /* 0x48 H */
   { 175, 3, 5, 4, 0, -5 },  /* 0x49 I */
   { 180, 3, 5, 4, 0, -5 },  /* 0x4A J */
   { 185, 3, 5, 4, 0, -5 },  /* 0x4B K */
   { 190, 3, 5, 4, 0, -5 },  /* 0x4C L */
   { 195, 3, 5, 4, 0, -5 },  /* 0x4D M */
   { 200, 3, 5, 4, 0, -5 },  /* 0x4E N */
   { 205, 3, 5, 4, 0, -5 },  /* 0x4F O */
   { 210, 3, 5, 4, 0, -5 },  /* 0x50 P */
   { 215, 3, 5, 4, 0, -5 },  /* 0x51 Q */
   { 220, 3, 5, 4, 0, -5 },  /* 0x52 R */
   { 225, 3, 5, 4, 0, -5 },  /* 0x53 S */
   { 230, 3, 5, 4, 0, -5 },  /* 0x54 T */
   { 235, 3, 5, 4, 0, -5 },  /* 0x55 U */
   { 240, 3, 5, 4, 0, -5 },  /* 0x56 V */
   { 245, 3, 5, 4, 0, -5 },  /* 0x57 W */
   { 250, 3, 5, 4, 0, -5 },  /* 0x58 X */
   { 255, 3, 5, 4, 0, -5 },  /* 0x59 Y */
   { 260, 3, 5, 4, 0, -5 },  /* 0x5A Z */
   { 265, 3, 5, 4, 0, -5 },  /* 0x5B bracketleft */
   { 270, 3, 3, 4, 0, -4 },  /* 0x5C backslash */
   { 273, 3, 5, 4, 0, -5 },  /* 0x5D bracketright */
   { 278, 3, 2, 4, 0, -5 },  /* 0x5E asciicircum */
   { 280, 3, 1, 4, 0, -1 },  /* 0x5F underscore */
   { 281, 2, 2, 3, 0, -5 },  /* 0x60 grave */
   { 283, 3, 4, 4, 0, -4 },  /* 0x61 a */
   { 287, 3, 5, 4, 0, -5 },  /* 0x62 b */
   { 292, 3, 4, 4, 0, -4 },  /* 0x63 c */
   { 296, 3, 5, 4, 0, -5 },  /* 0x64 d */
   { 301, 3, 4, 4, 0, -4 },  /* 0x65 e */
   { 305, 3, 5, 4, 0, -5 },  /* 0x66 f */
   { 310, 3, 5, 4, 0, -4 },  /* 0x67 g */
   { 315, 3, 5, 4, 0, -5 },  /* 0x68 h */
   { 320, 3, 5, 2, 0, -5 },  /* 0x69 i */
   { 325, 3, 6, 4, 0, -5 },  /* 0x6A j */
   { 331, 3, 5, 4, 0, -5 },  /* 0x6B k */
   { 336, 3, 5, 4, 0, -5 },  /* 0x6C l */
   { 341, 3, 4, 4, 0, -4 },  /* 0x6D m */
   { 345, 3, 4, 4, 0, -4 },  /* 0x6E n */
   { 349, 3, 4, 4, 0, -4 },  /* 0x6F o */
   { 353, 3, 5, 4, 0, -4 },  /* 0x70 p */
   { 358, 3, 5, 4, 0, -4 },  /* 0x71 q */
   { 363, 3, 4, 4, 0, -4 },  /* 0x72 r */
   { 367, 3, 4, 4, 0, -4 },  /* 0x73 s */
   { 371, 3, 5, 4, 0, -5 },  /* 0x74 t */
   { 376, 3, 4, 4, 0, -4 },  /* 0x75 u */
   { 380, 3, 4, 4, 0, -4 },  /* 0x76 v */
   { 384, 3, 4, 4, 0, -4 },  /* 0x77 w */
   { 388, 3, 4, 4, 0, -4 },  /* 0x78 x */
   { 392, 3, 5, 4, 0, -4 },  /* 0x79 y */
   { 397, 3, 4, 4, 0, -4 },  /* 0x7A z */
   { 401, 3, 5, 4, 0, -5 },  /* 0x7B braceleft */
   { 406, 1, 5, 2, 0, -5 },  /* 0x7C bar */
   { 411, 3, 5, 4, 0, -5 },  /* 0x7D braceright */
   { 416, 3, 2, 4, 0, -5 },  /* 0x7E asciitilde */
#if (TOMTHUMB_USE_EXTENDED)
   { 418, 3, 5, 2, 0, -5 },  /* 0xA1 exclamdown */
   { 423, 3, 5, 4, 0, -5 },  /* 0xA2 cent */
   { 428, 3, 5, 4, 0, -5 },  /* 0xA3 sterling */
   { 433, 3, 5, 4, 0, -5 },  /* 0xA4 currency */
   { 438, 3, 5, 4, 0, -5 },  /* 0xA5 yen */
   { 443, 3, 5, 2, 0, -5 },  /* 0xA6 brokenbar */
   { 448, 3, 5, 4, 0, -5 },  /* 0xA7 section */
   { 453, 3, 1, 4, 0, -5 },  /* 0xA8 dieresis */
   { 454, 3, 3, 4, 0, -5 },  /* 0xA9 copyright */
   { 457, 3, 5, 4, 0, -5 },  /* 0xAA ordfeminine */
   { 462, 3, 3, 3, 0, -5 },  /* 0xAB guillemotleft */
   { 465, 3, 2, 4, 0, -4 },  /* 0xAC logicalnot */
   { 467, 3, 1, 3, 0, -3 },  /* 0xAD softhyphen */
   { 468, 3, 3, 4, 0, -5 },  /* 0xAE registered */
   { 471, 3, 1, 4, 0, -5 },  /* 0xAF macron */
   { 472, 3, 3, 4, 0, -5 },  /* 0xB0 degree */
   { 475, 3, 5, 4, 0, -5 },  /* 0xB1 plusminus */
   { 480, 3, 3, 4, 0, -5 },  /* 0xB2 twosuperior */
   { 483, 3, 3, 4, 0, -5 },  /* 0xB3 threesuperior */
   { 486, 3, 2, 3, 0, -5 },  /* 0xB4 acute */
   { 488, 3, 5, 4, 0, -5 },  /* 0xB5 mu */
   { 493, 3, 5, 4, 0, -5 },  /* 0xB6 paragraph */
   { 498, 3, 3, 4, 0, -4 },  /* 0xB7 periodcentered */
   { 501, 3, 3, 4, 0, -3 },  /* 0xB8 cedilla */
   { 504, 3, 3, 2, 0, -5 },  /* 0xB9 onesuperior */
   { 507, 3, 5, 4, 0, -5 },  /* 0xBA ordmasculine */
   { 512, 3, 3, 3, 0, -5 },  /* 0xBB guillemotright */
   { 515, 3, 5, 4, 0, -5 },  /* 0xBC onequarter */
   { 520, 3, 5, 4, 0, -5 },  /* 0xBD onehalf */
   { 525, 3, 5, 4, 0, -5 },  /* 0xBE threequarters */
   { 530, 3, 5, 4, 0, -5 },  /* 0xBF questiondown */
   { 535, 3, 5, 4, 0, -5 },  /* 0xC0 Agrave */
   { 540, 3, 5, 4, 0, -5 },  /* 0xC1 Aacute */
   { 545, 3, 5, 4, 0, -5 },  /* 0xC2 Acircumflex */
   { 550, 3, 5, 4, 0, -5 },  /* 0xC3 Atilde */
   { 555, 3, 5, 4, 0, -5 },  /* 0xC4 Adieresis */
   { 560, 3, 5, 4, 0, -5 },  /* 0xC5 Aring */
   { 565, 3, 5, 4, 0, -5 },  /* 0xC6 AE */
   { 570, 3, 6, 4, 0, -5 },  /* 0xC7 Ccedilla */
   { 576, 3, 5, 4, 0, -5 },  /* 0xC8 Egrave */
   { 581, 3, 5, 4, 0, -5 },  /* 0xC9 Eacute */
   { 586, 3, 5, 4, 0, -5 },  /* 0xCA Ecircumflex */
   { 591, 3, 5, 4, 0, -5 },  /* 0xCB Edieresis */
   { 596, 3, 5, 4, 0, -5 },  /* 0xCC Igrave */
   { 601, 3, 5, 4, 0, -5 },  /* 0xCD Iacute */
   { 606, 3, 5, 4, 0, -5 },  /* 0xCE Icircumflex */
   { 611, 3, 5, 4, 0, -5 },  /* 0xCF Idieresis */
   { 616, 3, 5, 4, 0, -5 },  /* 0xD0 Eth */
   { 621, 3, 5, 4, 0, -5 },  /* 0xD1 Ntilde */
   { 626, 3, 5, 4, 0, -5 },  /* 0xD2 Ograve */
   { 631, 3, 5, 4, 0, -5 },  /* 0xD3 Oacute */
   { 636, 3, 5, 4, 0, -5 },  /* 0xD4 Ocircumflex */
   { 641, 3, 5, 4, 0, -5 },  /* 0xD5 Otilde */
   { 646, 3, 5, 4, 0, -5 },  /* 0xD6 Odieresis */
   { 651, 3, 3, 4, 0, -4 },  /* 0xD7 multiply */
   { 654, 3, 5, 4, 0, -5 },  /* 0xD8 Oslash */
   { 659, 3, 5, 4, 0, -5 },  /* 0xD9 Ugrave */
   { 664, 3, 5, 4, 0, -5 },  /* 0xDA Uacute */
   { 669, 3, 5, 4, 0, -5 },  /* 0xDB Ucircumflex */
   { 674, 3, 5, 4, 0, -5 },  /* 0xDC Udieresis */
   { 679, 3, 5, 4, 0, -5 },  /* 0xDD Yacute */
   { 684, 3, 5, 4, 0, -5 },  /* 0xDE Thorn */
   { 689, 3, 6, 4, 0, -5 },  /* 0xDF germandbls */
   { 695, 3, 5, 4, 0, -5 },  /* 0xE0 agrave */
   { 700, 3, 5, 4, 0, -5 },  /* 0xE1 aacute */
   { 705, 3, 5, 4, 0, -5 },  /* 0xE2 acircumflex */
   { 710, 3, 5, 4, 0, -5 },  /* 0xE3 atilde */
   { 715, 3, 5, 4, 0, -5 },  /* 0xE4 adieresis */
   { 720, 3, 5, 4, 0, -5 },  /* 0xE5 aring */
   { 725, 3, 4, 4, 0, -4 },  /* 0xE6 ae */
   { 729, 3, 5, 4, 0, -4 },  /* 0xE7 ccedilla */
   { 734, 3, 5, 4, 0, -5 },  /* 0xE8 egrave */
   { 739, 3, 5, 4, 0, -5 },  /* 0xE9 eacute */
   { 744, 3, 5, 4, 0, -5 },  /* 0xEA ecircumflex */
   { 749, 3, 5, 4, 0, -5 },  /* 0xEB edieresis */
   { 754, 3, 5, 3, 0, -5 },  /* 0xEC igrave */
   { 759, 3, 5, 3, 0, -5 },  /* 0xED iacute */
   { 764, 3, 5, 4, 0, -5 },  /* 0xEE icircumflex */
   { 769, 3, 5, 4, 0, -5 },  /* 0xEF idieresis */
   { 774, 3, 5, 4, 0, -5 },  /* 0xF0 eth */
   { 779, 3, 5, 4, 0, -5 },  /* 0xF1 ntilde */
   { 784, 3, 5, 4, 0, -5 },  /* 0xF2 ograve */
   { 789, 3, 5, 4, 0, -5 },  /* 0xF3 oacute */
   { 794, 3, 5, 4, 0, -5 },  /* 0xF4 ocircumflex */
   { 799, 3, 5, 4, 0, -5 },  /* 0xF5 otilde */
   { 804, 3, 5, 4, 0, -5 },  /* 0xF6 odieresis */
   { 809, 3, 5, 4, 0, -5 },  /* 0xF7 divide */
   { 814, 3, 4, 4, 0, -4 },  /* 0xF8 oslash */
   { 818, 3, 5, 4, 0, -5 },  /* 0xF9 ugrave */
   { 823, 3, 5, 4, 0, -5 },  /* 0xFA uacute */
   { 828, 3, 5, 4, 0, -5 },  /* 0xFB ucircumflex */
   { 833, 3, 5, 4, 0, -5 },  /* 0xFC udieresis */
   { 838, 3, 6, 4, 0, -5 },  /* 0xFD yacute */
   { 844, 3, 5, 4, 0, -4 },  /* 0xFE thorn */
   { 849, 3, 6, 4, 0, -5 },  /* 0xFF ydieresis */
   { 855, 3, 1, 2, 0, -1 },  /* 0x11D gcircumflex */
   { 856, 3, 5, 4, 0, -5 },  /* 0x152 OE */
   { 861, 3, 4, 4, 0, -4 },  /* 0x153 oe */
   { 865, 3, 5, 4, 0, -5 },  /* 0x160 Scaron */
   { 870, 3, 5, 4, 0, -5 },  /* 0x161 scaron */
   { 875, 3, 5, 4, 0, -5 },  /* 0x178 Ydieresis */
   { 880, 3, 5, 4, 0, -5 },  /* 0x17D Zcaron */
   { 885, 3, 5, 4, 0, -5 },  /* 0x17E zcaron */
   { 890, 3, 1, 2, 0, -1 },  /* 0xEA4 uni0EA4 */
   { 891, 3, 1, 2, 0, -1 },  /* 0x13A0 uni13A0 */
   { 892, 3, 1, 2, 0, -3 },  /* 0x2022 bullet */
   { 893, 3, 1, 4, 0, -1 },  /* 0x2026 ellipsis */
   { 894, 3, 5, 4, 0, -5 },  /* 0x20AC Euro */
   { 899, 3, 5, 4, 0, -5 },  /* 0xFFFD uniFFFD */
#endif /* (TOMTHUMB_USE_EXTENDED) */
};

const GFXfont TomThumb PROGMEM = {
  (uint8_t  *)TomThumbBitmaps,
  (GFXglyph *)TomThumbGlyphs,
  0x20, 0x7E, 6 };