#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void bienvenida()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido");
  delay(1000);
}

void inicio()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando");
  lcd.setCursor(0, 1);
  lcd.print("el juego...");
  delay(1000);
}

void puntajee()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hiciste: ");
  
  int puntaje = random(0, 101);
  
  lcd.setCursor(9, 0);
  lcd.print(puntaje);
  
  lcd.setCursor(0, 1);
  lcd.print("puntos");
  delay(1000);
}

void fin()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fin");
  lcd.setCursor(0, 1);
  lcd.print("del juego.");
  delay(1000);
}

void setup()
{
  randomSeed(analogRead(A0));
  
  Serial.begin(9600);

  lcd.begin(16, 2);
}

void loop()
{
  
  bienvenida();
  delay(1000);
  lcd.clear();
  
  inicio();
  delay(1000);
  lcd.clear();
  
  puntajee();
  delay(1000);
  lcd.clear();
  
  fin();
  delay(1000);
  lcd.clear();
}