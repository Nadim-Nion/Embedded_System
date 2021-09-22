int val;
int tempPin=0;

void setup()
{
  pinMode(tempPin, INPUT);
  Serial.begin(9600);
}


void loop()
{
  val = analogRead(tempPin);
  float mv = (val/1024.0) * 5000;
  float cel = mv / 10;
  float farh = (cel*9)/ 5 + 32;
  
  Serial.print("Temperature = ");
  Serial.print(cel);
  Serial.print(" Degree Celcius");
  Serial.println();
  Serial.print("Temperature = ");
  Serial.print(farh);
  Serial.print(" Degree Farhrnhiet");
  Serial.println();
  delay(1000);
}
