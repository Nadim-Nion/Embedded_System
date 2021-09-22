
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
           // lcd(RS,EN,DB4,DB5,DB6,DB7);
int tempPin=0;

void setup() {
  // set up the LCD's number of columns and rows:
  pinMode(tempPin, INPUT);
  lcd.begin(16, 2);
  
}

void loop() 
{
  float val,mv,cel;
  val = analogRead(tempPin);
  mv = (val/1024.0) * 5000;
  cel = mv / 10;
  lcd.setCursor(0,0); // Column X ROW
  lcd.print("The Temperature is = ");
  lcd.setCursor(0, 1);
  lcd.print(cel);
  lcd.print(" Degree Celcius");
  delay(1000);
  
  
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
}
 
