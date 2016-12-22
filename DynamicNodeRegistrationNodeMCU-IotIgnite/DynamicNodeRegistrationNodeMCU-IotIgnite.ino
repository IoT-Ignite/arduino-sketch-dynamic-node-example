#include <Arduino.h>
#include "IgniteEsp8266WifiManager.h"
#include "IgniteEsp8266ThingHandler.h"

IgniteEsp8266ThingHandler handler;
IgniteEsp8266WifiManager manager(&handler);

void setup() {
  manager.setup();
}
void loop() {
  Serial.println(WiFi.localIP());
  manager.loop();
}
