#include <Arduino.h>
#include "InventDelay.h"

InventDelay principalDelay(1000); // Delay of 1000 milliseconds (1 second)

void setup() {
  Serial.begin(9600);
}   
void loop() {
  if (principalDelay.expired()) {
    Serial.println("1 second has passed!");
    principalDelay.reset(); // Reset the delay timer
  }
}