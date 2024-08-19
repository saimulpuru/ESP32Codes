// GxEPD2_HelloWorld.ino by Jean-Marc Zingg
//
// Display Library example for SPI e-paper panels from Dalian Good Display and boards from Waveshare.
// Requires HW SPI and Adafruit_GFX. Caution: the e-paper panels require 3.3V supply AND data lines!
//
// Display Library based on Demo Example from Good Display: https://www.good-display.com/companyfile/32/
//
// Author: Jean-Marc Zingg
//
// Version: see library.properties
//
// Library: https://github.com/ZinggJM/GxEPD2

// Supporting Arduino Forum Topics (closed, read only):
// Good Display ePaper for Arduino: https://forum.arduino.cc/t/good-display-epaper-for-arduino/419657
// Waveshare e-paper displays with SPI: https://forum.arduino.cc/t/waveshare-e-paper-displays-with-spi/467865
//
// Add new topics in https://forum.arduino.cc/c/using-arduino/displays/23 for new questions and issues

// see GxEPD2_wiring_examples.h for wiring suggestions and examples
// if you use a different wiring, you need to adapt the constructor parameters!

// uncomment next line to use class GFX of library GFX_Root instead of Adafruit_GFX
//#include <GFX.h>

//#include <GxEPD2_BW.h>
#include <GxEPD2_3C.h>
//#include <GxEPD2_4C.h>
//#include <GxEPD2_7C.h>
#include <Fonts/FreeMonoBold9pt7b.h>

// select the display class and display driver class in the following file (new style):
#include "GxEPD2_display_selection_new_style.h"

// or select the display constructor line in one of the following files (old style):
#include "GxEPD2_display_selection.h"
#include "GxEPD2_display_selection_added.h"

// alternately you can copy the constructor from GxEPD2_display_selection.h or GxEPD2_display_selection_added.h to here
// e.g. for Wemos D1 mini:
//GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display(GxEPD2_154_D67(/*CS=D8*/ SS, /*DC=D3*/ 0, /*RST=D4*/ 2, /*BUSY=D2*/ 4)); // GDEH0154D67

// for handling alternative SPI pins (ESP32, RP2040) see example GxEPD2_Example.ino

void setup()
{
  display.init(115200, true, 2, false); // initialize the display
  helloWorld();
  display.hibernate(); // put the display into low-power mode
}

const char BlackText[] = "SAI KRISHNA ";
const char RedText[] = "MULPURU!";

void helloWorld()
{
  display.setRotation(1); // set display rotation
  display.setFont(&FreeMonoBold9pt7b); // set the font

  int16_t tbx, tby, trx, try_; 
  uint16_t tbw, tbh, trw, trh;

  // Calculate bounds for black text
  display.getTextBounds(BlackText, 0, 0, &tbx, &tby, &tbw, &tbh);
  // Calculate bounds for red text
  display.getTextBounds(RedText, 0, 0, &trx, &try_, &trw, &trh);

  // Calculate the positions to center the texts horizontally
  uint16_t xBlack = (display.width() - tbw) / 2; // Center the black text
  uint16_t xRed = (display.width() - trw) / 2;   // Center the red text

  // Calculate the y-coordinate for each line
  uint16_t yBlack = (display.height() - tbh - trh) / 2 - tby; // Center the block containing both lines vertically
  uint16_t yRed = yBlack + tbh + 5; // Position the red text below the black text with a small gap

  display.setFullWindow();
  display.firstPage();
  do
  {
    display.fillScreen(GxEPD_WHITE); // fill the background with white

    // Print black text
    display.setCursor(xBlack, yBlack);
    display.setTextColor(GxEPD_BLACK);
    display.print(BlackText);

    // Print red text on the next line
    display.setCursor(xRed, yRed);
    display.setTextColor(GxEPD_RED);
    display.print(RedText);

  } while (display.nextPage());
}

void loop() {};