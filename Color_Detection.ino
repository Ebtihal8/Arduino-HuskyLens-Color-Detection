#include <Wire.h>
#include "HUSKYLENS.h"

HUSKYLENS huskylens;

// ترتيب الأرجل الحقيقي عندك
const int greenPin = 9;
const int redPin   = 10;
const int bluePin  = 11;

// Common Anode
// LOW = ON
// HIGH = OFF
void turnOffAll() {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
}

void setup() {
  Serial.begin(9600);
  Wire.begin();

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  turnOffAll();

  while (!huskylens.begin(Wire)) {
    Serial.println("HuskyLens not found!");
    delay(1000);
  }

  huskylens.writeAlgorithm(ALGORITHM_COLOR_RECOGNITION);

  Serial.println("HuskyLens Ready");
}

void loop() {

  if (!huskylens.request()) {
    turnOffAll();
    delay(50);
    return;
  }

  if (!huskylens.available()) {
    turnOffAll();
    delay(50);
    return;
  }

  HUSKYLENSResult result = huskylens.read();

  Serial.print("Detected ID: ");
  Serial.println(result.ID);

  if (result.ID == 1) {
    // Blue ON
    digitalWrite(bluePin, LOW);

    // Others OFF
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
  }

  else if (result.ID == 2) {
    // Green ON
    digitalWrite(greenPin, LOW);

    // Others OFF
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, HIGH);
  }

  else if (result.ID == 3) {
    // Red ON
    digitalWrite(redPin, LOW);

    // Others OFF
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
  }

  else {
    turnOffAll();
  }

  delay(50);
}
