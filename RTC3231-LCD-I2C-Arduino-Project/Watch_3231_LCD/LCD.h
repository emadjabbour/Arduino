#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

LiquidCrystal_PCF8574 lcd(0x27);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int show;
void ScreenBegin(){
    int error;
   Wire.begin();
  Wire.beginTransmission(0x27);
  error = Wire.endTransmission();

  if (error == 0) {

  } else {
    Serial.println(": LCD not found.");
  } // if
  lcd.begin(16, 2); // initialize the lcd
  show = 0;
      lcd.setBacklight(255);
    lcd.home(); lcd.clear();
}
