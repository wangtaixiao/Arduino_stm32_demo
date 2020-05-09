#include <Arduino.h>

#define LED0  PB5
#define LED1  PE5
void setup() {
  // put your setup code here, to run once:
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
}

void loop() {
  digitalWrite(LED0,HIGH);
  delay(500);
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,LOW);
  delay(500);
  // put your main code here, to run repeatedly:
}