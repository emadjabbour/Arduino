//Emad Jabbour

#include "LCD.h"
#include "RTC_Config.h"

void setup () {
  ScreenBegin();
  //Set_Date_Time(20,12,29,3,22);

}

void loop () {

  delay(500);

  DateTime now = RTC.now();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print(now.year(), DEC);
  lcd.print('/');
  lcd.print(now.month(), DEC);
  lcd.print('/');
  lcd.print(now.day(), DEC);
  lcd.setCursor(0, 1);
  lcd.print(now.hour(), DEC);
  lcd.print(':');
  lcd.print(now.minute(), DEC);
  lcd.print(':');
  lcd.print(now.second(), DEC);

}
