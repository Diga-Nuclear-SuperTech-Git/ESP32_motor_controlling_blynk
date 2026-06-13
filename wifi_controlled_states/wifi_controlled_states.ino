#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "ESP32 Motor Controller"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

const int IN3 = 25;
const int IN4 = 26;

BLYNK_WRITE(V0)
{
  int state = param.asInt();

  switch(state)
  {
    case 0:   // Stop
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      break;

    case 1:   // Forward
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      break;

    case 2:   // Backward
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      break;
  }
}

void setup()
{
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}