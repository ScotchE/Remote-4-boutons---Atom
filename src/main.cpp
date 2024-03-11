
#include <M5Unified.h>

// #include <Arduino.h>

// #define PIN       27
// #define NUMPIXELS 1


void setup() {
    // M5.begin();      
    Serial.print("Init program");

}

void loop() {

  Serial.print("Start loop");

  sleep(5);

  // if (M5.BtnA.isPressed()){
  //   M5.Speaker.tone(5555,55);
  //   Serial.print("BtnA.isPressed");
  // } else {
  //   Serial.print("BtnA");
  // }

  Serial.print("END loop");

}
