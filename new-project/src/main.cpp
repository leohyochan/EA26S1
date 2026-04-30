/**
 * Blink
 *
 * Turns on an LED on for one second, then off for one second, repeatedly.
 */
#include "Arduino.h"

// Set the LED pin
#ifndef LED_BUILTIN
#define LED_BUILTIN 25 // Default for Nano 33 BLE Sense
#endif

void setup() {
  // Initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for a second.
  // Turn the LED off.
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for a second.
}