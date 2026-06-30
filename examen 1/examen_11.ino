#include <Adafruit_NeoPixel.h>
#define neo 3
#define cant_pixel 6
Adafruit_NeoPixel ring = Adafruit_NeoPixel(cant_pixel, neo, NEO_GRB + NEO_KHZ800);
#define ambient A1
#define boton 2
bool ultimoBoton = LOW;
bool prendido = false;
void setup()
{
  pinMode(boton, OUTPUT);
  pinMode(ambient, INPUT);
  Serial.begin(9600);
  pinMode(neo, OUTPUT);
  ring.begin();
  ring.clear();
  ring.show();
}

void loop()
{
  int valorAmbient = analogRead(ambient);
  float luz = map(valorAmbient, 1, 310, 0, 100);
  Serial.print("el nivel de luz actual es: ");
  Serial.println(luz);
  
  bool botonA = digitalRead(boton);
  
  if (botonA == HIGH && ultimoBoton == LOW)
  {
    prendido = !prendido;
    delay(50);
  }

  ultimoBoton = botonA;
  
  if(prendido == true)
  {
      if(luz == 30)
    {
      ring.setPixelColor(0, ring.Color(0, 255, 0));
      ring.show();
      ring.setPixelColor(1, ring.Color(0, 255, 0));
      ring.show();
      ring.setPixelColor(2, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(3, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(4, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(5, ring.Color(0, 0, 0));
      ring.show();
    }
    else if(luz >= 31 || luz <= 70)
    {
      ring.setPixelColor(0, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(1, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(4, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(5, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(2, ring.Color(255, 255, 0));
      ring.show();
      ring.setPixelColor(3, ring.Color(255, 255, 0));
      ring.show();
    }
    else if(luz >= 71 || luz <= 100)
    {
      ring.setPixelColor(0, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(1, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(2, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(3, ring.Color(0, 0, 0));
      ring.show();
      ring.setPixelColor(4, ring.Color(255, 0, 0));
      ring.show();
      ring.setPixelColor(5, ring.Color(255, 0, 0));
      ring.show();
    }
  }
  else
  {
    ring.setPixelColor(0, ring.Color(0, 0, 0));
    ring.show();
	ring.setPixelColor(1, ring.Color(0, 0, 0));
    ring.show();
    ring.setPixelColor(2, ring.Color(0, 0, 0));
    ring.show();
    ring.setPixelColor(3, ring.Color(0, 0, 0));
    ring.show();
    ring.setPixelColor(4, ring.Color(0, 0, 0));
    ring.show();
    ring.setPixelColor(5, ring.Color(0, 0, 0));
    ring.show();
  }
}