#include <Arduino.h>
#include <Wire.h>
#include "grove_two_rgb_led_matrix.h"

// Initialize the matrix using our custom local library
GroveTwoRGBLedMatrixClass matrix;

void setup() {
  Wire.begin();
  Serial.begin(9600);
  while (!Serial);
  
  // Give the internal MCU on the LED Matrix time to boot up
  delay(2000); 
  
  Serial.println("System Ready: Send H (Happy), S (Sad), or A (Angry)");
  
  // Flash white for a split second to prove hardware works on startup
  matrix.displayColorBlock(0xFFFFFF, 500, false); 
}

void loop() {
  if (Serial.available() > 0) {
    char cmd = Serial.read();
    
    // Clear any extra characters (like 'Enter' keys) from the buffer
    while (Serial.available() > 0) Serial.read(); 

    if (cmd == 'H' || cmd == 'h') {
      Serial.println("Mood: Happy (Green)");
      matrix.displayColorBlock(0x00FF00, 0, true); // Green
    } 
    else if (cmd == 'S' || cmd == 's') {
      Serial.println("Mood: Sad (Blue)");
      matrix.displayColorBlock(0x0000FF, 0, true); // Blue
    } 
    else if (cmd == 'A' || cmd == 'a') {
      Serial.println("Mood: Angry (Red)");
      matrix.displayColorBlock(0xFF0000, 0, true); // Red
    }
  }
}