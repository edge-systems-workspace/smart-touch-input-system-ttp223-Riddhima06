#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Riddhima Rajput
 * @date 2026-02-19
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

int touchPin = 2;
int ledPin = 13;
int touchState;

void setup() {

    Serial.begin(9600);

    pinMode(touchPin, INPUT);
    pinMode(ledPin, OUTPUT);

    Serial.println("TTP223 Touch Detection System Initialized");
}

void loop() {

    touchState = digitalRead(touchPin);

    if (touchState == HIGH) {

        digitalWrite(ledPin, HIGH);

        Serial.println("Touch Detected");

    } else {

        digitalWrite(ledPin, LOW);

        Serial.println("No Touch");

    }

    delay(200);
}
