/*
Project: Plant Watering System
Author: Erkhembileg Ariunbold
*/

int sensorPin = A0;   // Moisture sensor analog pin (output)
int pumpPin = 3;      // Water pump control pin
int water;            // Stores moisture reading
int threshold = 750;  // Adjust this based on your soil test

void setup() {
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);  // Enable Serial Monitor to read values
}

void loop() {
  water = analogRead(sensorPin);  // Read moisture level (0–1023)

  Serial.print("Moisture level: ");
  Serial.println(water);

  if (water < threshold) {
    digitalWrite(pumpPin, HIGH);
    Serial.println("Soil is dry. Pump ON.");
  } else {
    digitalWrite(pumpPin, LOW);
    Serial.println("Soil is wet. Pump OFF.");
  }

  delay(1000);  // Wait 1 second before next reading
}

