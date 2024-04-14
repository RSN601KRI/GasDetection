#include <Servo.h>

Servo servo;

const int gasSensorPin = 6;
const int buzzerPin = 2;
const int relayPin = 3;
const int servoPin = 9;
const int exhaustFanPin = 10;
const int ledWarning = 4;

void setup() {
  Serial.begin(9600);
  pinMode(gasSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(servoPin, OUTPUT);
  pinMode(exhaustFanPin, OUTPUT);
  pinMode(ledWarning, OUTPUT);

  servo.attach(servoPin);

  digitalWrite(buzzerPin, LOW); // Turn off buzzer initially
  digitalWrite(relayPin, LOW);  // Turn off relay initially
  digitalWrite(exhaustFanPin, HIGH); // Turn on exhaust fan initially (assuming fresh air needed)
  digitalWrite(ledWarning, LOW); // Turn off warning LED initially
}

void loop() {
  int gasDetected = digitalRead(gasSensorPin);
  Serial.print("Gas Detected: ");
  Serial.println(gasDetected);

  if (gasDetected == HIGH) { // Check if gas is detected (assuming HIGH means gas)
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer
    digitalWrite(relayPin, HIGH);  // Activate relay (likely for alarm or shutoff)
    digitalWrite(exhaustFanPin, LOW); // Turn off exhaust fan (may not be desired in all cases)
    digitalWrite(ledWarning, HIGH); // Turn on warning LED
    servo.write(90);                // Open valve or door (adjust angle if needed)
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn off buzzer
    digitalWrite(relayPin, LOW);    // Deactivate relay
    digitalWrite(exhaustFanPin, HIGH); // Turn on exhaust fan
    digitalWrite(ledWarning, LOW);  // Turn off warning LED
    servo.write(0);                  // Close valve or door
  }

  delay(1000); // Delay for 1 second
}
