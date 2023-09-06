#include <NanitLib.h>

#define line_pin P4_1
#define buzz_pin P4_2

#define ctrl_value 50
#define delta 5



void setup() {
  // put your setup code here, to run once:
  Nanit_Base_Start();
  Serial.begin(9600);
  pinMode(buzz_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue  = analogRead(line_pin);
  //bool digitalValue = digitalRead(P4_2);
  if (analogValue < ctrl_value - delta || analogValue > ctrl_value + delta) {
    Serial.println(analogValue);
    tone(buzz_pin, 100);
  } else {
    //noTone(buzz_pin);
  }
  //Serial.println(analogValue);
  //Serial.println(digitalValue);
  //Serial.println();
  delay(100);
}
