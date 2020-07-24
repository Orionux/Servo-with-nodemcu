#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT serial

Servo servo;
char auth[] = "AqcUi2E7__Ih2_fg2ISq6JJk7gMhMS9s";
char ssid[] = "MUARA101_Ext";
char pswd[] = "rtrw0603";

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pswd);
  servo.attach(5);
}
void loop() {
  Blynk.run();
}
BLYNK_WRITE(V1) {
  servo.write(param.asInt());
}
