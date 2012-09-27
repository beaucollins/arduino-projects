
#include <Servo.h>

int servoPin = 9;
int potPin = 0;

Servo servo;

void setup(){
  
  servo.attach(servoPin);
  servo.write(90);
  Serial.begin(9600);
  
}

void loop(){
  int potPos = analogRead(potPin);
  Serial.println(potPos);
  servo.write(map(potPos, 0, 1023, 0, 170));
  delay(100);
}
