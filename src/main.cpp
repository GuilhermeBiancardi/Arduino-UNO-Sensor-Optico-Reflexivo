/**
 * Sensor 5v
 */

#include <Arduino.h>

#define pinD0 8

void setup() {
    Serial.begin(9600);
    pinMode(pinD0, INPUT);
}

void loop() {
    Serial.println(digitalRead(pinD0));
    if (digitalRead(pinD0) == HIGH) {
        Serial.println("Muita Luz sendo Refletida!");
    } else {
        Serial.println("Pouca Luz sendo Refletida");
    }
    delay(500);
}