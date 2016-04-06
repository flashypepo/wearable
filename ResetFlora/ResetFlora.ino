/*
 * Reset Flora
 * 2016_0328 PePo
 */

#include <Adafruit_NeoPixel.h>;

#define PIN 8
Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // reset built-in NeoPixel
  strip.begin();
  strip.show();
}

void loop() {
  // do nothing
}
