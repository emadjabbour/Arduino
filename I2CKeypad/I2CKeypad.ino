
#include "getK.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  char i = getK();
if(i != 'N'){
Serial.println(i);
}
delay(500);
}
