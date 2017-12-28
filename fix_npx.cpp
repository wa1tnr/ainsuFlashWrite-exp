#include <Adafruit_NeoPixel.h>
#define PIN            8
#define NUMPIXELS      10
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 5;

void setup_npx() {
  pixels.begin();
}

void npx_fixed() {
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,1,1));
    pixels.show();
    delay(delayval);
  }
  delay(600);
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
    delay(delayval);
  }
}

void npx_repair() {
  setup_npx();
  npx_fixed();
}

void blink_mn() {
  // for(int i=0;i<NUMPIXELS;i++){
    int i = 0;
    pixels.setPixelColor(i, pixels.Color(0,1,1));
    pixels.show();
    delay(delayval);
  // }
    delay(1600);
  // for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
  // delay(delayval);
    delay(1600);
  // }
}
