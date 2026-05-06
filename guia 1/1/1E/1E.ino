// C++ code
//
#define rgb1 2
#define rgb2 3
#define rgb3 4
#define rgb2_1 5
#define rgb2_2 6
#define rgb2_3 7
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(rgb1, 1);
  delay(300);
  digitalWrite(rgb1, 0);
  delay(300);
  digitalWrite(rgb2_2, 1);
  digitalWrite(rgb2_3, 1);
  delay(300);
  digitalWrite(rgb2_2, 0);
  digitalWrite(rgb2_3, 0);
  delay(300);
  digitalWrite(rgb3, 1);
  delay(300);
  digitalWrite(rgb3, 0);
  delay(300);
  digitalWrite(rgb2_1, 1);
  digitalWrite(rgb2_2, 1);
  delay(300);
  digitalWrite(rgb2_1, 0);
  digitalWrite(rgb2_2, 0);
  delay(300);
  digitalWrite(rgb2, 1);
  delay(300);
  digitalWrite(rgb2, 0);
  delay(300);
  digitalWrite(rgb2_1, 1);
  digitalWrite(rgb2_2, 1);
  digitalWrite(rgb2_3, 1);
    delay(300);
  digitalWrite(rgb2_1, 0);
  digitalWrite(rgb2_2, 0);
  digitalWrite(rgb2_3, 0);
  delay(300);
  digitalWrite(rgb1, 1);
  digitalWrite(rgb3, 1);
    delay(300);
  digitalWrite(rgb1, 0);
  digitalWrite(rgb3, 0);
  delay(1000);
}