#include "esp32.cam.h"
#include "webserver.h"

void setup()
{
	Board::Setup();
	WebServer::Setup();

	Board::SendPhoto();
}

void loop()
{



}