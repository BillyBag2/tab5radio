#include <Arduino.h>
#include <M5Unified.h>
#include "orientation.h"

void drawUI() {
    M5.Display.fillScreen(WHITE);
    M5.Display.setTextColor(BLACK);
    M5.Display.setTextSize(2);
    M5.Display.setCursor(10, 10);
    M5.Display.println("Orientation Changed!!!");
}

void setup() {
    // Initialize serial communication at 9600 bits per second
    Serial.begin(9600);
    // Print "Hello, World!" to the Serial Monitor
    Serial.println("Hello, World!");
    auto cfg = M5.config();
    //cfg.clearDisplay = true;
    M5.begin(cfg);

    orientation_begin(drawUI /* callback */, 0 /* rotation_offset */);
}

void loop() {
    

    M5.update();
    orientation_update();
    
    // Do not hammer CPU.
    delay(1);
}