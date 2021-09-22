// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
           // lcd(RS,EN,DB4,DB5,DB6,DB7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  //lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(0,0); // Column X ROW
  lcd.print("Hello, Nion!");
  lcd.setCursor(0, 1);
  lcd.print("181-15-1746");
  delay(500);
  lcd.clear();
  delay(500);
  
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
}
 
