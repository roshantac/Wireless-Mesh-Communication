//  Terminal11.h
// GLCD FontName : Terminal11x16
// GLCD FontSize : 11 x 16

static const unsigned char Terminal11x16[96][22] = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char  
  0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0xFF,0x33,0xFF,0x33,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char !
  0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char "
  0x00,0x02,0x10,0x1E,0x90,0x1F,0xF0,0x03,0x7E,0x02,0x1E,0x1E,0x90,0x1F,0xF0,0x03,0x7E,0x02,0x1E,0x00,0x10,0x00, // Code for char #
  0x00,0x00,0x78,0x04,0xFC,0x0C,0xCC,0x0C,0xFF,0x3F,0xFF,0x3F,0xCC,0x0C,0xCC,0x0F,0x88,0x07,0x00,0x00,0x00,0x00, // Code for char $
  0x00,0x30,0x38,0x38,0x38,0x1C,0x38,0x0E,0x00,0x07,0x80,0x03,0xC0,0x01,0xE0,0x38,0x70,0x38,0x38,0x38,0x1C,0x00, // Code for char %
  0x00,0x00,0x00,0x1F,0xB8,0x3F,0xFC,0x31,0xC6,0x21,0xE2,0x37,0x3E,0x1E,0x1C,0x1C,0x00,0x36,0x00,0x22,0x00,0x00, // Code for char &
  0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x00,0x3F,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char '
  0x00,0x00,0x00,0x00,0xF0,0x03,0xFC,0x0F,0xFE,0x1F,0x07,0x38,0x01,0x20,0x01,0x20,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char (
  0x00,0x00,0x00,0x00,0x01,0x20,0x01,0x20,0x07,0x38,0xFE,0x1F,0xFC,0x0F,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char )
  0x00,0x00,0x98,0x0C,0xB8,0x0E,0xE0,0x03,0xF8,0x0F,0xF8,0x0F,0xE0,0x03,0xB8,0x0E,0x98,0x0C,0x00,0x00,0x00,0x00, // Code for char *
  0x00,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0xF0,0x0F,0xF0,0x0F,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x00,0x00,0x00, // Code for char +
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB8,0x00,0xF8,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char ,
  0x00,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x00,0x00,0x00, // Code for char -
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char .
  0x00,0x18,0x00,0x1C,0x00,0x0E,0x00,0x07,0x80,0x03,0xC0,0x01,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0x0E,0x00, // Code for char /
  0xF8,0x07,0xFE,0x1F,0x06,0x1E,0x03,0x33,0x83,0x31,0xC3,0x30,0x63,0x30,0x33,0x30,0x1E,0x18,0xFE,0x1F,0xF8,0x07, // Code for char 0
  0x00,0x00,0x00,0x00,0x0C,0x30,0x0C,0x30,0x0E,0x30,0xFF,0x3F,0xFF,0x3F,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x00, // Code for char 1
  0x1C,0x30,0x1E,0x38,0x07,0x3C,0x03,0x3E,0x03,0x37,0x83,0x33,0xC3,0x31,0xE3,0x30,0x77,0x30,0x3E,0x30,0x1C,0x30, // Code for char 2
  0x0C,0x0C,0x0E,0x1C,0x07,0x38,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xE7,0x39,0x7E,0x1F,0x3C,0x0E, // Code for char 3
  0xC0,0x03,0xE0,0x03,0x70,0x03,0x38,0x03,0x1C,0x03,0x0E,0x03,0x07,0x03,0xFF,0x3F,0xFF,0x3F,0x00,0x03,0x00,0x03, // Code for char 4
  0x3F,0x0C,0x7F,0x1C,0x63,0x38,0x63,0x30,0x63,0x30,0x63,0x30,0x63,0x30,0x63,0x30,0xE3,0x38,0xC3,0x1F,0x83,0x0F, // Code for char 5
  0xC0,0x0F,0xF0,0x1F,0xF8,0x39,0xDC,0x30,0xCE,0x30,0xC7,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x39,0x80,0x1F,0x00,0x0F, // Code for char 6
  0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x30,0x03,0x3C,0x03,0x0F,0xC3,0x03,0xF3,0x00,0x3F,0x00,0x0F,0x00,0x03,0x00, // Code for char 7
  0x00,0x0F,0xBC,0x1F,0xFE,0x39,0xE7,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xE7,0x30,0xFE,0x39,0xBC,0x1F,0x00,0x0F, // Code for char 8
  0x3C,0x00,0x7E,0x00,0xE7,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x38,0xC3,0x1C,0xC3,0x0E,0xE7,0x07,0xFE,0x03,0xFC,0x00, // Code for char 9
  0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char :
  0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x9C,0x70,0xFC,0x70,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char ;
  0x00,0x00,0xC0,0x00,0xE0,0x01,0xF0,0x03,0x38,0x07,0x1C,0x0E,0x0E,0x1C,0x07,0x38,0x03,0x30,0x00,0x00,0x00,0x00, // Code for char <
  0x00,0x00,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x60,0x06,0x00,0x00, // Code for char =
  0x00,0x00,0x03,0x30,0x07,0x38,0x0E,0x1C,0x1C,0x0E,0x38,0x07,0xF0,0x03,0xE0,0x01,0xC0,0x00,0x00,0x00,0x00,0x00, // Code for char >
  0x1C,0x00,0x1E,0x00,0x07,0x00,0x03,0x00,0x83,0x37,0xC3,0x37,0xE3,0x00,0x77,0x00,0x3E,0x00,0x1C,0x00,0x00,0x00, // Code for char ?
  0xF8,0x0F,0xFE,0x1F,0x07,0x18,0xF3,0x33,0xFB,0x37,0x1B,0x36,0xFB,0x37,0xFB,0x37,0x07,0x36,0xFE,0x03,0xF8,0x01, // Code for char @
  0x00,0x38,0x00,0x3F,0xE0,0x07,0xFC,0x06,0x1F,0x06,0x1F,0x06,0xFC,0x06,0xE0,0x07,0x00,0x3F,0x00,0x38,0x00,0x00, // Code for char A
  0xFF,0x3F,0xFF,0x3F,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xE7,0x30,0xFE,0x39,0xBC,0x1F,0x00,0x0F,0x00,0x00, // Code for char B
  0xF0,0x03,0xFC,0x0F,0x0E,0x1C,0x07,0x38,0x03,0x30,0x03,0x30,0x03,0x30,0x07,0x38,0x0E,0x1C,0x0C,0x0C,0x00,0x00, // Code for char C
  0xFF,0x3F,0xFF,0x3F,0x03,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0x07,0x38,0x0E,0x1C,0xFC,0x0F,0xF0,0x03,0x00,0x00, // Code for char D
  0xFF,0x3F,0xFF,0x3F,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0x03,0x30,0x03,0x30,0x00,0x00, // Code for char E
  0xFF,0x3F,0xFF,0x3F,0xC3,0x00,0xC3,0x00,0xC3,0x00,0xC3,0x00,0xC3,0x00,0xC3,0x00,0x03,0x00,0x03,0x00,0x00,0x00, // Code for char F
  0xF0,0x03,0xFC,0x0F,0x0E,0x1C,0x07,0x38,0x03,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC7,0x3F,0xC6,0x3F,0x00,0x00, // Code for char G
  0xFF,0x3F,0xFF,0x3F,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xFF,0x3F,0xFF,0x3F,0x00,0x00, // Code for char H
  0x00,0x00,0x00,0x00,0x03,0x30,0x03,0x30,0xFF,0x3F,0xFF,0x3F,0x03,0x30,0x03,0x30,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char I
  0x00,0x0E,0x00,0x1E,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0xFF,0x1F,0xFF,0x07,0x00,0x00, // Code for char J
  0xFF,0x3F,0xFF,0x3F,0xC0,0x00,0xE0,0x01,0xF0,0x03,0x38,0x07,0x1C,0x0E,0x0E,0x1C,0x07,0x38,0x03,0x30,0x00,0x00, // Code for char K
  0xFF,0x3F,0xFF,0x3F,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x00, // Code for char L
  0xFF,0x3F,0xFF,0x3F,0x1E,0x00,0x78,0x00,0xE0,0x01,0xE0,0x01,0x78,0x00,0x1E,0x00,0xFF,0x3F,0xFF,0x3F,0x00,0x00, // Code for char M
  0xFF,0x3F,0xFF,0x3F,0x0E,0x00,0x38,0x00,0xF0,0x00,0xC0,0x03,0x00,0x07,0x00,0x1C,0xFF,0x3F,0xFF,0x3F,0x00,0x00, // Code for char N
  0xF0,0x03,0xFC,0x0F,0x0E,0x1C,0x07,0x38,0x03,0x30,0x03,0x30,0x07,0x38,0x0E,0x1C,0xFC,0x0F,0xF0,0x03,0x00,0x00, // Code for char O
  0xFF,0x3F,0xFF,0x3F,0x83,0x01,0x83,0x01,0x83,0x01,0x83,0x01,0x83,0x01,0xC7,0x01,0xFE,0x00,0x7C,0x00,0x00,0x00, // Code for char P
  0xF0,0x03,0xFC,0x0F,0x0E,0x1C,0x07,0x38,0x03,0x30,0x03,0x36,0x07,0x3E,0x0E,0x1C,0xFC,0x3F,0xF0,0x33,0x00,0x00, // Code for char Q
  0xFF,0x3F,0xFF,0x3F,0x83,0x01,0x83,0x01,0x83,0x03,0x83,0x07,0x83,0x0F,0xC7,0x1D,0xFE,0x38,0x7C,0x30,0x00,0x00, // Code for char R
  0x3C,0x0C,0x7E,0x1C,0xE7,0x38,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC7,0x39,0x8E,0x1F,0x0C,0x0F,0x00,0x00, // Code for char S
  0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFF,0x3F,0xFF,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00, // Code for char T
  0xFF,0x07,0xFF,0x1F,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0xFF,0x1F,0xFF,0x07,0x00,0x00, // Code for char U
  0x07,0x00,0x3F,0x00,0xF8,0x01,0xC0,0x0F,0x00,0x3E,0x00,0x3E,0xC0,0x0F,0xF8,0x01,0x3F,0x00,0x07,0x00,0x00,0x00, // Code for char V
  0xFF,0x3F,0xFF,0x3F,0x00,0x1C,0x00,0x06,0x80,0x03,0x80,0x03,0x00,0x06,0x00,0x1C,0xFF,0x3F,0xFF,0x3F,0x00,0x00, // Code for char W
  0x03,0x30,0x0F,0x3C,0x1C,0x0E,0x30,0x03,0xE0,0x01,0xE0,0x01,0x30,0x03,0x1C,0x0E,0x0F,0x3C,0x03,0x30,0x00,0x00, // Code for char X
  0x03,0x00,0x0F,0x00,0x3C,0x00,0xF0,0x00,0xC0,0x3F,0xC0,0x3F,0xF0,0x00,0x3C,0x00,0x0F,0x00,0x03,0x00,0x00,0x00, // Code for char Y
  0x03,0x30,0x03,0x3C,0x03,0x3E,0x03,0x33,0xC3,0x31,0xE3,0x30,0x33,0x30,0x1F,0x30,0x0F,0x30,0x03,0x30,0x00,0x00, // Code for char Z
  0x00,0x00,0x00,0x00,0xFF,0x3F,0xFF,0x3F,0x03,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char [
  0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0x80,0x03,0x00,0x07,0x00,0x0E,0x00,0x1C,0x00,0x18, // Code for <Backslash>
  0x00,0x00,0x00,0x00,0x03,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0xFF,0x3F,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char ]
  0x60,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0x60,0x00, // Code for char ^
  0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0, // Code for char _
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x7E,0x00,0x4E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char `
  0x00,0x1C,0x40,0x3E,0x60,0x33,0x60,0x33,0x60,0x33,0x60,0x33,0x60,0x33,0x60,0x33,0xE0,0x3F,0xC0,0x3F,0x00,0x00, // Code for char a
  0xFF,0x3F,0xFF,0x3F,0xC0,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0xE0,0x38,0xC0,0x1F,0x80,0x0F,0x00,0x00, // Code for char b
  0x80,0x0F,0xC0,0x1F,0xE0,0x38,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0xC0,0x18,0x80,0x08,0x00,0x00, // Code for char c
  0x80,0x0F,0xC0,0x1F,0xE0,0x38,0x60,0x30,0x60,0x30,0x60,0x30,0xE0,0x30,0xC0,0x30,0xFF,0x3F,0xFF,0x3F,0x00,0x00, // Code for char d
  0x80,0x0F,0xC0,0x1F,0xE0,0x3B,0x60,0x33,0x60,0x33,0x60,0x33,0x60,0x33,0x60,0x33,0xC0,0x13,0x80,0x01,0x00,0x00, // Code for char e
  0xC0,0x00,0xC0,0x00,0xFC,0x3F,0xFE,0x3F,0xC7,0x00,0xC3,0x00,0xC3,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char f
  0x80,0x03,0xC0,0xC7,0xE0,0xCE,0x60,0xCC,0x60,0xCC,0x60,0xCC,0x60,0xCC,0x60,0xE6,0xE0,0x7F,0xE0,0x3F,0x00,0x00, // Code for char g
  0xFF,0x3F,0xFF,0x3F,0xC0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xE0,0x00,0xC0,0x3F,0x80,0x3F,0x00,0x00,0x00,0x00, // Code for char h
  0x00,0x00,0x00,0x00,0x00,0x30,0x60,0x30,0xEC,0x3F,0xEC,0x3F,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char i
  0x00,0x00,0x00,0x00,0x00,0x60,0x00,0xE0,0x00,0xC0,0x60,0xC0,0xEC,0xFF,0xEC,0x7F,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char j
  0x00,0x00,0xFF,0x3F,0xFF,0x3F,0x00,0x03,0x80,0x07,0xC0,0x0F,0xE0,0x1C,0x60,0x38,0x00,0x30,0x00,0x00,0x00,0x00, // Code for char k
  0x00,0x00,0x00,0x00,0x00,0x30,0x03,0x30,0xFF,0x3F,0xFF,0x3F,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char l
  0xE0,0x3F,0xC0,0x3F,0xE0,0x00,0xE0,0x00,0xC0,0x3F,0xC0,0x3F,0xE0,0x00,0xE0,0x00,0xC0,0x3F,0x80,0x3F,0x00,0x00, // Code for char m
  0x00,0x00,0xE0,0x3F,0xE0,0x3F,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xE0,0x00,0xC0,0x3F,0x80,0x3F,0x00,0x00, // Code for char n
  0x80,0x0F,0xC0,0x1F,0xE0,0x38,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0xE0,0x38,0xC0,0x1F,0x80,0x0F,0x00,0x00, // Code for char o
  0xE0,0xFF,0xE0,0xFF,0x60,0x0C,0x60,0x18,0x60,0x18,0x60,0x18,0x60,0x18,0xE0,0x1C,0xC0,0x0F,0x80,0x07,0x00,0x00, // Code for char p
  0x80,0x07,0xC0,0x0F,0xE0,0x1C,0x60,0x18,0x60,0x18,0x60,0x18,0x60,0x18,0x60,0x0C,0xE0,0xFF,0xE0,0xFF,0x00,0x00, // Code for char q
  0x00,0x00,0xE0,0x3F,0xE0,0x3F,0xC0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xE0,0x00,0xC0,0x00,0x00,0x00, // Code for char r
  0xC0,0x11,0xE0,0x33,0x60,0x33,0x60,0x33,0x60,0x33,0x60,0x33,0x60,0x3F,0x40,0x1E,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char s
  0x60,0x00,0x60,0x00,0xFE,0x1F,0xFE,0x3F,0x60,0x30,0x60,0x30,0x60,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char t
  0xE0,0x0F,0xE0,0x1F,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x18,0xE0,0x3F,0xE0,0x3F,0x00,0x00, // Code for char u
  0x60,0x00,0xE0,0x01,0x80,0x07,0x00,0x1E,0x00,0x38,0x00,0x38,0x00,0x1E,0x80,0x07,0xE0,0x01,0x60,0x00,0x00,0x00, // Code for char v
  0xE0,0x07,0xE0,0x1F,0x00,0x38,0x00,0x1C,0xE0,0x0F,0xE0,0x0F,0x00,0x1C,0x00,0x38,0xE0,0x1F,0xE0,0x07,0x00,0x00, // Code for char w
  0x60,0x30,0xE0,0x38,0xC0,0x1D,0x80,0x0F,0x00,0x07,0x80,0x0F,0xC0,0x1D,0xE0,0x38,0x60,0x30,0x00,0x00,0x00,0x00, // Code for char x
  0x00,0x00,0x60,0x00,0xE0,0x81,0x80,0xE7,0x00,0x7E,0x00,0x1E,0x80,0x07,0xE0,0x01,0x60,0x00,0x00,0x00,0x00,0x00, // Code for char y
  0x60,0x30,0x60,0x38,0x60,0x3C,0x60,0x36,0x60,0x33,0xE0,0x31,0xE0,0x30,0x60,0x30,0x20,0x30,0x00,0x00,0x00,0x00, // Code for char z
  0x00,0x00,0x80,0x00,0xC0,0x01,0xFC,0x1F,0x7E,0x3F,0x07,0x70,0x03,0x60,0x03,0x60,0x03,0x60,0x00,0x00,0x00,0x00, // Code for char {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xBF,0x3F,0xBF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char |
  0x00,0x00,0x03,0x60,0x03,0x60,0x03,0x60,0x07,0x70,0x7E,0x3F,0xFC,0x1F,0xC0,0x01,0x80,0x00,0x00,0x00,0x00,0x00, // Code for char }
  0x10,0x00,0x18,0x00,0x0C,0x00,0x04,0x00,0x0C,0x00,0x18,0x00,0x10,0x00,0x18,0x00,0x0C,0x00,0x04,0x00,0x00,0x00, // Code for char ~
  0x00,0x00,0x18,0x00,0x3C,0x00,0x66,0x00,0x66,0x00,0x3C,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // Code for <Degrees>
};



