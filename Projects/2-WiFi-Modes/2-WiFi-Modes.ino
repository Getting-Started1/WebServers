#include <WiFi.h>

// Network credentials for WiFi station
const char* ssid = "";           // Replace with your WiFi network name
const char* password = ""; // Replace with your WiFi password

// Access Point credentials
const char* ap_ssid = "";
const char* ap_password = ""; // At least 8 characters

void setup() {
  Serial.begin(115200);

  // Configure ESP32S2 as a WiFi Station
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  // Configure ESP32S2 as an Access Point
  WiFi.softAP(ap_ssid, ap_password);
  Serial.println("Access Point started");
  Serial.print("Access Point IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // Put any code here that needs to run continuously
}
