#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "LHYnhwGqnfjJkzDiDsFl70jJmerexedP";
char ssid[] = "ARZU";
char pass[] = "TEHKOTAK";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
