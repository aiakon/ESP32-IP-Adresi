#include <WiFi.h>

const char* ssid = "VODAFONE_9D53";   // Wi-Fi Ağının İsmi
const char* password = "fc1f1fff";    // Wi-Fi Ağının Şifresi

void setup() {
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print(WiFi.localIP());

}

void loop() {
  Serial.print(WiFi.localIP());
  delay(100);
}
