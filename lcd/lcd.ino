how to#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor (0,0); 
  lcd.print("This is a very long text");
  lcd.setCursor (0,1); 
  lcd.print ("My name is Morris, nice to meet you"); 
}

void loop() {
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 22; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(350); 
  }

  
  

}
