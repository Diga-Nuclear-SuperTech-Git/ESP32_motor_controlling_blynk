#define BLYNK_TEMPLATE_ID "TMPL3creuuymd"
#define BLYNK_TEMPLATE_NAME "ESP 32 motor controller"
#define BLYNK_AUTH_TOKEN "bLRkm3b2Rxy9mf72ZRuGByqTafXsUs5j"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "acer ZX";
char pass[] = "05@pULPULMUM";

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
  Serial.begin(115200);
  Serial.println("BOOT");
  
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

BLYNK_CONNECTED()
{
  Serial.println("BLYNK CONNECTED");
}

void loop()
{
  Blynk.run();
}