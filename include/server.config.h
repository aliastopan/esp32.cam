#ifndef SERVERCONFIG
#define SERVERCONFIG

#include <DNSServer.h>
#include "WiFi.h"
#include <SPIFFS.h>

const int port = 80;
const char* ssid = "ESP";
const char* password = "esp32cam";
DNSServer dnsServer;

String serverName = "192.168.3.20";   // REPLACE WITH YOUR SERVER IP ADDRESS
String serverPath = "/upload.php";
const int serverPort = 80;
WiFiClient client;

#endif