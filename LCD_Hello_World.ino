// Simple Program to display Hello World 
// Using ESP32 WROVER KIT LCD 

#include "SPI.h"
#include "Adafruit_GFX.h"
#include "WROVER_KIT_LCD.h"

WROVER_KIT_LCD tft; // create a object tft 

void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
   tft.begin(); 
   tft.setRotation(0);


}

void loop() {
  // put your main code here, to run repeatedly:

  tft.fillScreen(WROVER_BLACK);
  tft.setCursor(0, 0);
  tft.setTextColor(WROVER_WHITE);  tft.setTextSize(1);
  tft.println("Hello World!");
  delay(1000);
}
