#include "DS3231.h"
#include <Wire.h>

DS3231 Clock;
RTClib RTC;

void Set_Date_Time(byte yy, byte MM , byte dd , byte hh ,byte mm ) {
  Clock.setClockMode(false);  // set to 24h
  //setClockMode(true); // set to 12h

  Clock.setYear(yy);
  Clock.setMonth(MM);
  Clock.setDate(dd);
  Clock.setHour(hh);
  Clock.setMinute(mm);
  Clock.setSecond(0);
}
