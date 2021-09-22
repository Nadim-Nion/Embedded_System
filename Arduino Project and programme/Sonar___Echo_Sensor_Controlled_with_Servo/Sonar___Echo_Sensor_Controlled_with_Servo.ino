#include<Servo.h>
Servo myServo;
int trig = 2;
int echo = 3;

void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  myServo.attach(10);
  Serial.begin(9600);
}

void loop()
{
  float duration , cm , in;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  cm = (duration/2) / 29.1;
  in = cm / 2.54;
    
   if (in >= 20 && in <= 40)
  {
    myServo.write(90);
  }
  
  else 
     myServo.write(0);
  
  Serial.print("Distance = ");
  Serial.print(cm);
  Serial.print("CM, ");
  Serial.print(in);
  Serial.println("In.");
  
  delay(2000);
  
  
}
