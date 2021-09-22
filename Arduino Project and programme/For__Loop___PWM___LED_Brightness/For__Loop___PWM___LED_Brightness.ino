int p = 12;

void setup()
{
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i=0;i<=255;i=i+5)
  {
    analogWrite(p,i);
    delay(1000);
  }
  
}
