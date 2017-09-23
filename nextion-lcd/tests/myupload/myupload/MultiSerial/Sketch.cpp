/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>

/*End of auto generated code by Atmel studio */


//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio

/*
  Multple Serial test

 Receives from the main serial port, sends to the others.
 Receives from serial port 1, sends to the main serial (Serial 0).

 This example works only with boards with more than one serial like Arduino Mega, Due, Zero etc

 The circuit:
 * Any serial device attached to Serial port 1
 * Serial monitor open on Serial port 0:

 created 30 Dec. 2008
 modified 20 May 2012
 by Tom Igoe & Jed Roach
 modified 27 Nov 2015
 by Arturo Guadalupi

 This example code is in the public domain.

 */

#define BAUD 9600

void setup() {
  
  // initialize both serial ports:
  Serial.begin(BAUD);
  Serial2.begin(BAUD);
}

void loop() {
    unsigned char inByte;
    
  // read from port 2, send to port 0:
  if (Serial.available()) {
    inByte = Serial.read();
    Serial2.write(inByte);
  }

  // read from port 0, send to port 2:
  if (Serial2.available()) {
    inByte = Serial2.read();
    Serial.write(inByte);
  }
}
