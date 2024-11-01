#include <WiFi.h>
#include <WiFiClientSecure.h>

const char* ssid = "";      // Your WiFi SSID
const char* password = "";  // Your WiFi password

void setup() {
  Serial.begin(115200);
  delay(100);
  Serial.println();
  Serial.println("");
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Your code here
}
