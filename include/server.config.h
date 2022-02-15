#ifndef SERVERCONFIG
#define SERVERCONFIG

#include <DNSServer.h>
#include "WiFi.h"
#include <SPIFFS.h>

const int port = 80;
const char* ssid = "Wifi@Home";
const char* password = "02062000";
DNSServer dnsServer;

String serverName = "192.168.2.114";   // REPLACE WITH YOUR SERVER IP ADDRESS
String serverPath = "/upload.php";
const int serverPort = 80;
WiFiClient client;

#endif