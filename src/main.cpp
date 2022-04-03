#include "esp_camera.h"
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "esp_timer.h"
#include "img_converters.h"
#include "Arduino.h"
#include "fb_gfx.h"
#include "soc/soc.h" //disable brownout problems
#include "soc/rtc_cntl_reg.h"  //disable brownout problems
#include "esp_http_server.h"
#include <StringArray.h>
#include <SPIFFS.h>
#include <FS.h>

//Replace with your network credentials
const char* ssid = "Wifi@Home";
const char* password = "02062000";

void Setup()
{
	
}

void Loop()
{

}
