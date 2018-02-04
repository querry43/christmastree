#include <Adafruit_NeoPixel.h>
#include "spinner.h"

Adafruit_NeoPixel strip = Adafruit_NeoPixel(16*3, 6, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

Spinner red1 = Spinner(Spinner::reds());
Spinner red2 = Spinner(Spinner::reds());
Spinner green1 = Spinner(Spinner::greens());

void loop() {
  for (int i = 0; i < 16; i++)
    strip.setPixelColor(i, red1.getColor(i));

  for (int i = 0; i < 16; i++)
    strip.setPixelColor(i+16, green1.getColor(i));

  for (int i = 0; i < 16; i++)
    strip.setPixelColor(i+32, red2.getColor(i));

  red1.update();
  red2.update();
  green1.update();

  strip.show();
  delay(500);
}
