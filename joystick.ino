#include <Servo.h>

Servo motor1;

const int x_ekseni = A0;
const int y_ekseni = A1;

int x_durum;
int y_durum;

int xPozisyon = 0;
int yPozisyon = 0;

int kosulPoz = 0;

int degisimAlgi;

void setup() {
  pinMode(x_ekseni, INPUT);
  pinMode(y_ekseni, INPUT);
  pinMode(8, OUTPUT);
  motor1.attach(5);

}

void loop() {
x_durum = analogRead(x_ekseni);
y_durum = analogRead(y_ekseni);

if(degisimAlgi != xPozisyon){
  digitalWrite(8, HIGH);
  delay(15);

}else{
    digitalWrite(8, LOW);
  delay(15);

}

degisimAlgi = xPozisyon;
xPozisyon = map(analogRead(x_ekseni),0,1023,0,180);
 delay(15);
  motor1.write(xPozisyon);

}
