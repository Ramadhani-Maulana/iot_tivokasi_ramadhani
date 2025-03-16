#include <Arduino.h>

const int ButtonPin = 19;
const int LedPin = 18; 
const int RelayPin = 23;

void setup(){
  pinMode(ButtonPin, INPUT_PULLUP);
  pinMode(LedPin, OUTPUT);
  pinMode(RelayPin, OUTPUT);
  digitalWrite(LedPin, LOW);
  digitalWrite(RelayPin, LOW);
}

void loop(){
  int buttonState = digitalRead(ButtonPin);

  if(buttonState == LOW){
    digitalWrite(LedPin, HIGH);
    digitalWrite(RelayPin, HIGH);
  }else{
    digitalWrite(LedPin, LOW);
    digitalWrite(RelayPin, LOW);
  }
}