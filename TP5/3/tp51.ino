#include <Adafruit_NeoPixel.h>
#define neo 3
#define cant_pixel 12
#define ana A1
bool ultimoBoton = LOW;
Adafruit_NeoPixel ring = Adafruit_NeoPixel(cant_pixel, neo, NEO_GRB + NEO_KHZ800);
void setup()
{
  pinMode(2, INPUT);
  pinMode(neo, OUTPUT);
  ring.begin();
  ring.clear();
  ring.show();
  randomSeed( analogRead(A0) );
}

void loop()
{
  int val = analogRead(ana);
  int vel = map(val, 0, 1023, 50 ,1000);
  
  bool botonA = digitalRead(2);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    for (int i = 0; i < 12; i++)
    {
      ring.setPixelColor(i, random(256), random(256), random(256));
    }
    delay(vel);
    ring.show();
  }
  ultimoBoton = botonA;
}