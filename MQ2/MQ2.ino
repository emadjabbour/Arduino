void setup() {
//delay(180000);
Serial.begin(115200);
pinMode(3,1);
}

void loop() {
int GasAmount = analogRead(A0);
Serial.println(GasAmount);
delay(100);
if(GasAmount > 750){
  while(1){
  tone(3,200,500);
  delay(500);
    tone(3,1000,500);
      delay(500);


  }}}
