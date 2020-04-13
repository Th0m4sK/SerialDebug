#include <Arduino.h>
#include <SerialDebug.h>


SerialDebug Debug(ALL);


void setup() {
Serial.begin (115200); // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  Debug.print("ALL","Messages",ALL);
   Debug.print("Debug","Messages",DEBUG);
   Debug.print("Warn","Messages",WARN);
    Debug.print("Error","Messages",ERROR);
  delay(2000);

  Debug.setDebugLevel(ERROR);



}