#define BLYNK_TEMPLATE_ID "TMPL3kD7iCUfl"
#define BLYNK_TEMPLATE_NAME "LPG SAFETY SYSTEM"
#define BLYNK_AUTH_TOKEN "dv05_0D2-GCt_gvm172EjAaV8rnANPjb"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "ashish'sF34";  // type your WiFi name
char pass[] = "jaishreeram";  // type your WiFi password
int smokeA0 = A0;
int data = 0;
int sensorThres = 100;

BlynkTimer timer;

void sendSensor() {
  int data = analogRead(smokeA0);
  Blynk.virtualWrite(V0, data);
  Serial.print("Pin A0: ");
  Serial.println(data);

  if (data > sensorThres) {
    // Send notification or trigger an action
    Blynk.logEvent("Gas Leakage Detected!");
  }
}

void setup() {
  pinMode(smokeA0, INPUT);
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(2500L, sendSensor);
}

void loop() {
  Blynk.run();
  timer.run();
}