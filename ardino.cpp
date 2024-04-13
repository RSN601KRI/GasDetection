#include <Servo.h> // Include the Servo library

Servo servo; // Create a servo object

// Define the pins for various components
const int gasSensorPin = A0;    // Gas sensor analog pin
const int buzzerPin = 2;        // Buzzer pin
const int relayPin = 3;         // Relay module control pin
const int servoPin = 9;         // Servo motor control pin
const int exhaustFanPin = 10;   // Exhaust fan control pin
const int ledWarning = 4;       // Warning LED pin

// Define threshold value for gas detection
const int gasThreshold = 500;   // Adjust this value based on your sensor's sensitivity

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(servoPin, OUTPUT);
  pinMode(exhaustFanPin, OUTPUT);
  pinMode(ledWarning, OUTPUT);
  
  // Attach the servo to its pin
  servo.attach(servoPin);
  
  // Initially, turn off all appliances including lights
  digitalWrite(buzzerPin, LOW);
  digitalWrite(relayPin, LOW);
  digitalWrite(exhaustFanPin, LOW);
  digitalWrite(ledWarning, LOW);
}

void loop() {
  // Read the analog value from gas sensor
  int gasLevel = analogRead(gasSensorPin);
  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  // Check if gas level exceeds threshold
  if (gasLevel > gasThreshold) {
    // Gas detected, activate safety measures
    digitalWrite(buzzerPin, HIGH);      // Sound the buzzer
    digitalWrite(relayPin, HIGH);       // Turn off all house appliances
    digitalWrite(exhaustFanPin, HIGH);  // Turn on the exhaust fan
    digitalWrite(ledWarning, HIGH);     // Turn on warning LED
    // Adjust the servo position to close the gas regulator
    servo.write(90);
  } else {
    // No gas detected, deactivate safety measures
    digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
    digitalWrite(relayPin, LOW);    // Turn on all house appliances
    digitalWrite(exhaustFanPin, LOW); // Turn off the exhaust fan
    digitalWrite(ledWarning, LOW);    // Turn off warning LED
    // Adjust the servo position to open the gas regulator
    servo.write(0);
  }
  
  // Delay for stability
  delay(1000); // Adjust the delay time as needed
}