#include <Arduino.h>


int ledPin=13;
// application to light on and off a led
void setup() {
	  // initaliaze pins as outputs
	  pinMode(ledPin,OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	  digitalWrite(ledPin,HIGH);
	  delay(2000);
	  digitalWrite(ledPin,LOW);
	  delay(2000);
}
