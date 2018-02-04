#pragma once

#include <Arduino.h>

class Spinner {
protected:
  uint32_t * _colors;
  int _position;

public:
  Spinner(uint32_t * colors) : _colors(colors), _position(0) { }
  uint32_t getColor(int offset);
  void update();
  
  static uint32_t * reds();
  static uint32_t * greens();
};
