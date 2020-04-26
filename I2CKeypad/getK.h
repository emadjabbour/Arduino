#include "Arduino.h"
#include "PCF8574.h"


PCF8574 pcf8574(0x27);
char getK(){
String Col = "111";
String Row = "1111";
      pcf8574.pinMode(P0, INPUT);
  pcf8574.pinMode(P1, INPUT);
  pcf8574.pinMode(P2, INPUT);
  pcf8574.pinMode(P4, INPUT);
pcf8574.pinMode(P5, INPUT_PULLUP);
pcf8574.pinMode(P6, INPUT_PULLUP);
pcf8574.pinMode(P7, INPUT_PULLUP);
   

pcf8574.begin();delay(12);
 byte ColNum  = 0;
    Col = String(pcf8574.digitalRead(P5))+String(pcf8574.digitalRead(P6))+String(pcf8574.digitalRead(P7));
    if (Col == "011"){
      ColNum = 1;
    }else if(Col == "101"){
      ColNum = 2;
    } else if(Col == "110"){
      ColNum = 3;
    }


      pcf8574.pinMode(P0, INPUT_PULLUP);
  pcf8574.pinMode(P1, INPUT_PULLUP);
  pcf8574.pinMode(P2, INPUT_PULLUP);
  pcf8574.pinMode(P4, INPUT_PULLUP);
pcf8574.pinMode(P5,INPUT);
pcf8574.pinMode(P6, INPUT);
pcf8574.pinMode(P7, INPUT);
   

pcf8574.begin();delay(12);

  Row = String(pcf8574.digitalRead(P0))+String(pcf8574.digitalRead(P1))+String(pcf8574.digitalRead(P2))+String(pcf8574.digitalRead(P4));
 byte RowNum  = 0;

    if (Row == "0111"){
      RowNum = 1;
    }else if(Row == "1011"){
      RowNum = 2;
    } else if(Row == "1101"){
      RowNum = 3;
    }else if(Row == "1110"){
      RowNum = 4;
    }
if (ColNum == 1&& RowNum == 1){
  return '1';
}else if (ColNum == 2&& RowNum == 1){
  return '2';
}else if (ColNum == 3&& RowNum == 1){
  return '3';
}else if (ColNum == 1&& RowNum == 2){
  return '7';
}else if (ColNum == 2&& RowNum == 2){
  return '8';
}else if (ColNum == 3&& RowNum == 2){
  return '9';
}else if (ColNum == 1&& RowNum == 3){
  return '4';
}else if (ColNum == 2&& RowNum == 3){
  return '5';
}else if (ColNum == 3&& RowNum == 3){
  return '6';
}else if (ColNum == 1&& RowNum == 4){
  return '*';
}else if (ColNum == 2&& RowNum == 4){
  return '0';
}else if (ColNum == 3&& RowNum == 4){
  return '#';
}else{
    return 'N';
}
}
char readKey(){
 char i = getK();
if(i != 'N'){ 
  return i;
}
}
