/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int coil = 10; // set coil control pin to pin 10


// variables will change:

void setup() {
  Serial.begin(9600);
  pinMode(coil, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  digitalWrite(coil, HIGH);
  delay(2); // set the delay time
  Serial.println(digitalRead(10));
  digitalWrite(coil, LOW);
  delay(2); // set the delay time
  Serial.println(digitalRead(10));
}
