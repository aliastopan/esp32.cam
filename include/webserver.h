#ifndef WEBSERVER
#define WEBSERVER

#include "server.config.h"

class WebServer{

   public:
        static void Setup()
        {
            WiFi.begin(ssid, password);
            while (WiFi.status() != WL_CONNECTED) {
                delay(1000);
                Serial.println("connecting to an access point...");
            }
            if (!SPIFFS.begin(true)) {
                Serial.println("[ restarting ] an error has occurred while mounting SPIFFS");
                ESP.restart();
            }
            Serial.print("standy by: ");
            Serial.println(WiFi.localIP());
        }

};


#endif