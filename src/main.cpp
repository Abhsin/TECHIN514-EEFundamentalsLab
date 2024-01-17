#include <Arduino.h>

// Make sure to use a valid analog pin for your board
#define ANALOG_PIN A1  // Change to your analog pin, for example, A0

// Potentiometer is connected to GPIO 34 (Analog ADC1_CH6) 
const int potPin = A1;

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  int potValue = analogRead(potPin);
  
  delay(500);
  float voltage = (potValue / 4095.0) * 3.3;
  Serial.print("Raw Value:");
  Serial.print(potValue);
  Serial.print(" - Voltage:");
  Serial.println(voltage);

}