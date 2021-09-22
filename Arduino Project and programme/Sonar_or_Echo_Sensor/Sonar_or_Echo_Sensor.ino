int trig = 2;
int echo = 3;


void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
   
}



void loop()
{
  long duration , cm , in ;
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration= pulseIn(echo,HIGH);
  cm= (duration/2)/ 29.1; // Distance in Centi-meter
  in= (duration/2)/ 2.54 ; //  Distance in Inch
  
  Serial.print("Distance = ");
  Serial.print(cm);
  Serial.print("CM, ");
  Serial.print(in);
  Serial.println("In.");
  delay(250);
}
