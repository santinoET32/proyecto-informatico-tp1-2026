#include <Adafruit_NeoPixel.h>
#define neo 3
#define cant_pixel 12
Adafruit_NeoPixel ring = Adafruit_NeoPixel(cant_pixel, neo, NEO_GRB + NEO_KHZ800);
void setup()
{
  pinMode(neo, OUTPUT);
  ring.begin();
  ring.clear();
  ring.show();
  
}

void loop()
{
  delay(1000);
  
  //ida
  for (int i = 0; i < cant_pixel; i++)
  {
    if(i == 0 || i == 3 || i == 6 || i == 9)
    {
      ring.setPixelColor(i, ring.Color(255, 0, 0));
      ring.show();
      delay(500);
      ring.setPixelColor(i, ring.Color(0, 0, 0));
      ring.show();
      delay(500);
    }
    
    if(i == 1 || i == 4 || i == 7 || i == 10)
    {
      ring.setPixelColor(i, ring.Color(0, 255, 0));
      ring.show();
      delay(500);
      ring.setPixelColor(i, ring.Color(0, 0, 0));
      ring.show();
      delay(500);
    }
    
    if(i == 2 || i == 5 || i == 8 || i == 11)
    {
      ring.setPixelColor(i, ring.Color(0, 0, 255));
      ring.show();
      delay(500);
      ring.setPixelColor(i, ring.Color(0, 0, 0));
      ring.show();
      delay(500);
    }
  }
  //vuelta
    for (int j = cant_pixel - 1; j > 0; j--)
  	{
      if(j == 0 || j == 9 || j == 6 || j == 3)
      {
        ring.setPixelColor(j, ring.Color(255, 0, 0));
        ring.show();
        delay(500);
        ring.setPixelColor(j, ring.Color(0, 0, 0));
        ring.show();
        delay(500);
      }

      if(j == 11 || j == 8 || j == 5 || j == 2)
      {
        ring.setPixelColor(j, ring.Color(0, 255, 0));
        ring.show();
        delay(500);
        ring.setPixelColor(j, ring.Color(0, 0, 0));
        ring.show();
        delay(500);
      }

      if(j == 10 || j == 7 || j == 4 || j == 1)
      {
        ring.setPixelColor(j, ring.Color(0, 0, 255));
        ring.show();
        delay(500);
        ring.setPixelColor(j, ring.Color(0, 0, 0));
        ring.show();
        delay(500);
      }
    }
	
}