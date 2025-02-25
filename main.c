/*
Created by: Osamah
Created on: Feb 2025
To make the work with the breadBoard
*/
const int PIN_5 = 5;
int blinkTime = 1000; //set  variable to 100


void setup() {
//initialize digital pin LED_BUILTIN as an output.
pinMode(PIN_5, OUTPUT);
}


void loop() {
   digitalWrite(PIN_5, HIGH); //turn the LED on(High is the voltage level)
   delay(blinkTime);               // wait for the length of the variable blinkTime
   digitalWrite(PIN_5, LOW); //turn the LED off(High is the voltage level)
   delay(blinkTime);               // wait for the length of the variable blinkTime
}