/*

 SNAKE_BODY.C

 Tile Source File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 8 x 8
  Tiles                : 0 to 12

  Palette colors       : None.
  SGB Palette          : None.
  CGB Palette          : None.

  Convert to metatiles : No.

 This file was generated by GBTD v2.2

*/
#include "snake_body.h"

/* Start of tile array. */
unsigned char SnakeBody[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFD, 0xFF, 0xFB, 0xFF, 0xF7,
    0xFF, 0xEF, 0xFF, 0xDF, 0xFF, 0xBF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xBF,
    0xFF, 0xDF, 0xFF, 0xEF, 0xFF, 0xF7, 0xFF, 0xFB, 0xFF, 0xFD, 0x00, 0x00,
    0x7E, 0x7E, 0x7E, 0x3E, 0x7E, 0x5E, 0x7E, 0x6E, 0x7E, 0x76, 0x7E, 0x7A,
    0x7E, 0x7C, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7C, 0x7E, 0x7A, 0x7E, 0x76,
    0x7E, 0x6E, 0x7E, 0x5E, 0x7E, 0x3E, 0x7E, 0x7E, 0x00, 0x00, 0x7F, 0x3F,
    0x7F, 0x5F, 0x7F, 0x6F, 0x7F, 0x77, 0x7F, 0x7B, 0x7F, 0x7D, 0x7E, 0x7E,
    0x7E, 0x7E, 0x7F, 0x3F, 0x7F, 0x5F, 0x7F, 0x6F, 0x7F, 0x77, 0x7F, 0x7B,
    0x7F, 0x7D, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFC, 0xFE, 0xFA, 0xFE, 0xF6,
    0xFE, 0xEE, 0xFE, 0xDE, 0xFE, 0xBE, 0x7E, 0x7E, 0x7E, 0x7E, 0xFE, 0xFC,
    0xFE, 0xFA, 0xFE, 0xF6, 0xFE, 0xEE, 0xFE, 0xDE, 0xFE, 0xBE, 0x00, 0x00,
    0x00, 0x00, 0x7F, 0x3F, 0x7F, 0x5F, 0x7F, 0x6F, 0x7F, 0x77, 0x7F, 0x7B,
    0x7F, 0x7D, 0x7E, 0x7E, 0x00, 0x00, 0xFE, 0xBE, 0xFE, 0xDE, 0xFE, 0xEE,
    0xFE, 0xF6, 0xFE, 0xFA, 0xFE, 0xFC, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7D,
    0x7F, 0x7B, 0x7F, 0x77, 0x7F, 0x6F, 0x7F, 0x5F, 0x7F, 0x3F, 0x00, 0x00,
    0x7E, 0x7E, 0xFE, 0xFC, 0xFE, 0xFA, 0xFE, 0xF6, 0xFE, 0xEE, 0xFE, 0xDE,
    0xFE, 0xBE, 0x00, 0x00};

const unsigned char kSnakeBody_EMPTY = 0x0;
const unsigned char kSnakeBody_RIGHT = 0x1;
const unsigned char kSnakeBody_LEFT = 0x2;
const unsigned char kSnakeBody_UP = 0x3;
const unsigned char kSnakeBody_DOWN = 0x4;
const unsigned char kSnakeBody_LEFT_DOWN = 0x5;
const unsigned char kSnakeBody_LEFT_UP = 0x6;
const unsigned char kSnakeBody_RIGHT_DOWN = 0x7;
const unsigned char kSnakeBody_RIGHT_UP = 0x8;
const unsigned char kSnakeBody_UP_RIGHT = 0x9;
const unsigned char kSnakeBody_UP_LEFT = 0xA;
const unsigned char kSnakeBody_DOWN_RIGHT = 0xB;
const unsigned char kSnakeBody_DOWN_LEFT = 0xC;

/* End of SNAKE_BODY.C */
