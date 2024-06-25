/*
   Project name: ESP32 Servo Motor Control
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-servo-motor
*/

#include <Servo.h>

// Define GPIO pin connected to the servo motor
const int servoPin = 2; // GPIO 2 on ESP32

// Create a servo object
Servo myServo;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  myServo.attach(servoPin); // Attach the servo to GPIO pin
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle); // Set servo position
    delay(15); // Delay for servo to reach the position
  }

  // Sweep the servo from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle); // Set servo position
    delay(15); // Delay for servo to reach the position
  }
}
