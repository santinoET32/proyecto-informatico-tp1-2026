#define rojo2 6
#define verde2 3
#define azul2 5
#define buzz 2
#define delayPot A0
#define pot1 A1
#define pot2 A2
#define pot3 A3
int vPot1 = 0;
int vPot2 = 0;
int vPot3 = 0;
int vColor1 = 0;
int vColor2 = 0;
int vColor3 = 0;
int val = 0;
int vel = 0;
int r= 0;
int g= 0;
int b= 0;
int r2= 0;
int g2= 0;
int b2= 0;
int r3= 0;
int g3= 0;
int b3= 0;
bool ultimoBoton = LOW;
bool prendido = false;
void setup()
{
  pinMode(azul2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  bool botonA = digitalRead(4);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    prendido = !prendido;
    delay(50);
  }

  ultimoBoton = botonA;
  
    int val = analogRead(delayPot);
  	int vel = map(val, 0, 1023, 0 ,3000);
  
  
  if (prendido == true)
  {
    //cambio rgb
  	r = map(analogRead(pot1), 0, 1023, 0, 255);
  	g = map(analogRead(pot2), 0, 1023, 0, 255);
  	b = map(analogRead(pot3), 0, 1023, 0, 255);

  	analogWrite(rojo2, r);
  	analogWrite(verde2, g);
  	analogWrite(azul2, b);
    //fin cambio rgb
    Serial.print("Tiempo: ");
    Serial.println(vel / 1000.0);
    Serial.print("R: ");
    Serial.println(r);
    Serial.print("G: ");
    Serial.println(g);
    Serial.print("B: ");
    Serial.println(b);
    
    //primer ciclo on
  
    analogWrite(buzz, 0);
    analogWrite(rojo2, r);

    delay(vel);

    analogWrite(rojo2, 0);
    analogWrite(buzz, 255);
    delay(100);
    analogWrite(buzz,0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);
    // primer ciclo END

    // segundo ciclo on
    analogWrite(rojo2, r);
    analogWrite(azul2, b);

    delay(vel);

    analogWrite(rojo2, 0);
    analogWrite(azul2, 0);
    analogWrite(buzz, 255);
    delay(100);
    analogWrite(buzz,0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

     //segundo ciclo END

    //tercer cico ON

    analogWrite(azul2, b);
    analogWrite(verde2, g);
    analogWrite(rojo2, 0);

    delay(vel);

    analogWrite(azul2, 0);
    analogWrite(verde2, 0);
    analogWrite(rojo2, 0);
    analogWrite(buzz, 255);
    delay(100);
    analogWrite(buzz,0);

    delay(187);


    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);

    analogWrite(rojo2, 255);
    analogWrite(verde2, 65);

    delay(187);

    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);

    delay(187);
    //tercer cilo end
  }
  else
  {
    analogWrite(rojo2, 0);
    analogWrite(verde2, 0);
    analogWrite(azul2, 0);
    analogWrite(buzz, 0);
  }
  
  
  
  
}