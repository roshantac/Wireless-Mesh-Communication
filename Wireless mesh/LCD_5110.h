//@uther :-roshan
#include <Energia.h>
#ifndef LCD_5110_h
#define LCD_5110_h

#include "Terminal6.h"
#include "Terminal12.h"

class LCD_5110 {
public:
  LCD_5110(); 
  LCD_5110(uint8_t pinChipSelect, uint8_t pinSerialClock, uint8_t pinSerialData, uint8_t pinDataCommand, uint8_t pinReset, uint8_t pinBacklight, uint8_t pinPushButton); 
  void begin(); 
  String WhoAmI();
  void clear(); 
  void setBacklight(boolean b=true); 
  void setFont(uint8_t font=0); 
  uint8_t fontX();     
  uint8_t fontY(); 
  void text(uint8_t x, uint8_t y, String s);
  boolean getButton();
  
private:    
  void setXY(uint8_t x, uint8_t y);
  void write(uint8_t dataCommand, uint8_t c);
  uint8_t _font;
};

#endif
