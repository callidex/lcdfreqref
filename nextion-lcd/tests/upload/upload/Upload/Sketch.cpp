/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>

/*End of auto generated code by Atmel studio */

#include "NexUpload.h"
//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio


NexUpload nex_download("nex.tft",10,115200);
void setup() {
  // put your setup code here, to run once:
    nex_download.upload();
}

void loop() {
  // put your main code here, to run repeatedly:
}
