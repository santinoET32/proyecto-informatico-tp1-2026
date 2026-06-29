#define sensultrasonic 2
#define pir 3
#define buzzer 4
#define boton 5
#define rojo 6
#define azul 7
#define verde 9
bool ultimoBoton = LOW;
bool prendido = false;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(boton, OUTPUT);
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop()
{
  //sensor ultrasonico
  pinMode(sensultrasonic, OUTPUT);
  digitalWrite(sensultrasonic, LOW);
  delayMicroseconds(2);
  digitalWrite(sensultrasonic, HIGH);
  delayMicroseconds(5);
  digitalWrite(sensultrasonic, LOW);
  pinMode(sensultrasonic, INPUT);
  float duracion = pulseIn(sensultrasonic, HIGH);
  float distancia = duracion * 0.034 / 2;

  //sensor pir config y escritura de si esta moviendose o no
  int PIR = digitalRead(pir);
  Serial.print(PIR);
  Serial.println(": distancia");
  
  //escribo la distancia del objeto
  Serial.print(distancia);
  Serial.println("cm");
  
  if(prendido == true)
  {
    Serial.println("alarma prendida");
  }
  else
  {
    Serial.println("alarma apagada");
  }
  
  //boton
  bool botonA = digitalRead(boton);
  
  if (botonA == HIGH && ultimoBoton == LOW)
  {
    prendido = !prendido;
    delay(50);
  }

  ultimoBoton = botonA;
  
  //alarma apagada
  if(prendido == false)
  {
    digitalWrite(verde, 0);
    digitalWrite(rojo, 0);
    digitalWrite(azul, 250);
  }
  //estado 1
  if(prendido == true && distancia > 150 && PIR == 1)
  {
    digitalWrite(azul, 0);
    digitalWrite(rojo, 0);
    digitalWrite(verde, HIGH);
  }
  //estado 2
  if(prendido == true && distancia > 50 && distancia < 150 && PIR == 1)
  {
    digitalWrite(azul, 0);
    analogWrite(rojo, 250);
    analogWrite(verde, 100);
    digitalWrite(buzzer, 1);
    delay(500);
    digitalWrite(buzzer, 0);
    delay(500);
  }
  //estado 3
  if(prendido == true && distancia < 50 && PIR == 1)
  {
    digitalWrite(rojo, 250);
    digitalWrite(verde, 0);
    digitalWrite(azul, 0);
    digitalWrite(buzzer, 1);
    delay(50);
    digitalWrite(buzzer, 0);
    delay(50);
  }
}