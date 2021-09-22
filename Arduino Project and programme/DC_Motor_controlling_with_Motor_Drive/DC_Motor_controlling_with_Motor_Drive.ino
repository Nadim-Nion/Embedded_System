int L1 = 2; // Left DC Motor , terminal 1
int L2 = 3; // Left DC motor , terminal 2
int R1 = 4; // Right DC motor , terminal 1
int R2 = 5; // Right DC motor , terminal 2

void setup()
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
}

void loop()
{
  //Forward Move
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  
  delay(2000);
  
  
  
}
