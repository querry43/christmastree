#include "spinner.h"
#include <Adafruit_NeoPixel.h>
  
uint32_t _reds[] = {
  Adafruit_NeoPixel::Color(3, 0, 0),
  Adafruit_NeoPixel::Color(3, 0, 0),
  Adafruit_NeoPixel::Color(3, 0, 0),
  Adafruit_NeoPixel::Color(4, 0, 0),
  Adafruit_NeoPixel::Color(5, 0, 0),
  Adafruit_NeoPixel::Color(6, 0, 0),
  Adafruit_NeoPixel::Color(7, 0, 0),
  Adafruit_NeoPixel::Color(8, 0, 0),
  Adafruit_NeoPixel::Color(8, 0, 0),
  Adafruit_NeoPixel::Color(7, 0, 0),
  Adafruit_NeoPixel::Color(6, 0, 0),
  Adafruit_NeoPixel::Color(5, 0, 0),
  Adafruit_NeoPixel::Color(4, 0, 0),
  Adafruit_NeoPixel::Color(3, 0, 0),
  Adafruit_NeoPixel::Color(3, 0, 0),
  Adafruit_NeoPixel::Color(3, 0, 0),
};

uint32_t _greens[] = {
  Adafruit_NeoPixel::Color(0, 3, 0),
  Adafruit_NeoPixel::Color(0, 3, 0),
  Adafruit_NeoPixel::Color(0, 3, 0),
  Adafruit_NeoPixel::Color(0, 4, 0),
  Adafruit_NeoPixel::Color(0, 5, 0),
  Adafruit_NeoPixel::Color(0, 6, 0),
  Adafruit_NeoPixel::Color(0, 7, 0),
  Adafruit_NeoPixel::Color(0, 8, 0),
  Adafruit_NeoPixel::Color(0, 8, 0),
  Adafruit_NeoPixel::Color(0, 7, 0),
  Adafruit_NeoPixel::Color(0, 6, 0),
  Adafruit_NeoPixel::Color(0, 5, 0),
  Adafruit_NeoPixel::Color(0, 4, 0),
  Adafruit_NeoPixel::Color(0, 3, 0),
  Adafruit_NeoPixel::Color(0, 3, 0),
  Adafruit_NeoPixel::Color(0, 3, 0),
};

uint32_t * Spinner::reds() { return _reds; }
uint32_t * Spinner::greens() { return _greens; }

uint32_t Spinner::getColor(int offset) {
  int i = (_position + offset) % 16;
  return *(_colors+i);
}

void Spinner::update() {
  _position = (_position + 1) % 16;
}
