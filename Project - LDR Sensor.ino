#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLLaUjrFQR"
#define BLYNK_DEVICE_NAME "LDR Control"

#include <Servo.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const char auth[] = "nK14ecqsqPy8vqWArXMGgdlkBbMYG9yS";

Servo servo;
const int ldrPin = A0;
int ledPin = 13; // GPIO13---D7 of NodeMCU

BLYNK_WRITE(V1) {
  int pinValue = param.asInt(); 
  servo.write(pinValue);
}

BLYNK_WRITE(V2) {
  int buttonValue = param.asInt();
  if (buttonValue == 1) {
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW); 
  }
}

void setup() {
    Serial.begin(9600);

  Blynk.begin(auth, "iemumpss.vercel.app", "hovah1234");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

 // Attach the servo to pin 2
  servo.attach(2);

  // Set the servo to the initial position
  servo.write(0);

  // set the led pin as output
  pinMode(ledPin, OUTPUT);

  delay(2000);
}

void loop() {
  // Read the LDR value
  int ldrValue = analogRead(ldrPin);
  
  // Send the LDR value to the Blynk Timeline
  Blynk.virtualWrite(V1, ldrValue);
    Serial.println(ldrValue);

  if (ldrValue < 14) {
    servo.write(0);
    delay(1000);
    Serial.println("Servo Closed");
  } else {
     servo.write(90);
    delay(1000);
    Serial.println("Servo Opened");
  }

  Blynk.run();
}
