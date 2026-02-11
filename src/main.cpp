#include <Arduino.h>
#include <wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
// OLED I2C address (most common is 0x3C)
#define OLED_ADDR 0x3C
// Create display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &amp;Wire, -1);
void setup() {
// write your initialization code here
}

void loop() {
// write your code here
}