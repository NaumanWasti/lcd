#include <LiquidCrystal.h>

LiquidCrystal lcd(7,8,9,10,11,12);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}
 
void loop() {
lcd.setCursor(0,0);
lcd.print("NAUMAN");

}
