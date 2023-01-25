#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLLaUjrFQR"
#define BLYNK_DEVICE_NAME "LDR Control"

#include <Servo.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const char auth[] = "nK14ecqsqPy8vqWArXMGgdlkBbMYG9yS"; 

Servo servo;
const int ldrPin = A0;
int ledWhitePin = 12; // GPIO13---D6 of NodeMCU
int ledGreenPin = 13; // GPIO13---D7 of NodeMCU
int ledBluePin = 14; // GPIO13---D5 of NodeMCU


BLYNK_WRITE(V1) {
  int pinValue = param.asInt(); 
  servo.write(pinValue);
}

BLYNK_WRITE(V2) {
  int buttonValue = param.asInt();
  if (buttonValue == 1) {
    digitalWrite(ledGreenPin, HIGH); 
  } else {
    digitalWrite(ledGreenPin, LOW); 
  }
}


BLYNK_WRITE(V3) {
  int buttonValue = param.asInt();
  if (buttonValue == 1) {
    digitalWrite(ledWhitePin, HIGH); 
  } else {
    digitalWrite(ledWhitePin, LOW); 
  }
}

BLYNK_WRITE(V4) {
  int buttonValue = param.asInt();
  if (buttonValue == 1) {
    digitalWrite(ledBluePin, HIGH); 
  } else {
    digitalWrite(ledBluePin, LOW); 
  }
}

BLYNK_WRITE(V13) {
  int buttonValue = param.asInt();
  if (buttonValue == 1) {
  // Code to run the servo or perform other actions
      servo.write(0);
      servo.write(180);
      digitalWrite(ledWhitePin, HIGH); 
      digitalWrite(ledGreenPin, HIGH); 
      digitalWrite(ledBluePin, HIGH); 
  }
}

BLYNK_WRITE(V14) {
  int buttonValue = param.asInt();
  if (buttonValue == 1) {
  // Code to pause the servo or perform other actions
  }
}

BLYNK_WRITE(V15) {
  int buttonValue = param.asInt();
  if (buttonValue == 1) {
  // Code to stop the servo or perform other actions
      servo.write(0);
    digitalWrite(ledWhitePin, LOW); 
    digitalWrite(ledGreenPin, LOW); 
    digitalWrite(ledBluePin, LOW); 
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
  pinMode(ledGreenPin, OUTPUT);
  pinMode(ledWhitePin, OUTPUT);
  pinMode(ledBluePin, OUTPUT);

  delay(2000);
}

void loop() {
  // Read the LDR value
  int ldrValue = analogRead(ldrPin);
  
  // Send the LDR value to the Blynk Timeline
  Blynk.virtualWrite(V1, ldrValue);
    Serial.println(ldrValue);

  
  if (ldrValue <= 13) {
    servo.write(0);
    delay(1000);
    Serial.println("Servo Closed");
    //
  } else {
     servo.write(90);
    delay(1000);
    Serial.println("Servo Opened");
  }

  Blynk.run();
}
