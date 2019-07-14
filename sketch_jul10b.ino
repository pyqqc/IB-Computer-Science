#include <Microduino_ColorLED.h>

ColorLED strip = ColorLED(1, 6);

void setup()
{
  strip.begin();
}

void loop()
{
  if (!digitalRead(5)) {
    strip.setPixelColor(6-1, 255,0,0);
    strip.show();

  }

}
