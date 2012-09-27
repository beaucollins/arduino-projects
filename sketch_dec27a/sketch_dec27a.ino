#include <Servo.h>
#include <Timer.h>


int ledPin = 11;
int servoPin = 9;
int potPin = 0;
int ledBrightness = 0;

int pos = 0;
int n = 50;

Timer servoTimer;
Timer ledTimer;

Servo servo;

void setup(){
  servo.attach(servoPin);
  servo.write(90);
  pinMode(ledPin, OUTPUT);

  servoTimer.start(30);
  ledTimer.start(250);
  Serial.begin(9600);

  analogWrite(ledPin, ledBrightness);
}

void loop(){
  

 
  
  if(servoTimer.fire()){
    int potPos = analogRead(potPin);
    Serial.println(pos);
//    servo.write(map(pos, 0, 1023, 0, 170));
     pos += n;
    if(pos >= 1023 || pos <= 0){
      n = n * -1;
    }
//    servo.write(map(potPos, 0, 1023, 0, 170));
  }
  
  if(ledTimer.fire()){
    ledBrightness = ledBrightness == 0 ? 254 : 0;
    analogWrite(ledPin, ledBrightness);
  }
  

  
}

