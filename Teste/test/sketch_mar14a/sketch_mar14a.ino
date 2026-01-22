#include <LiquidCrystal_I2C.h>
#include <Wire.h>


#define LCD_ADDRESS 0x27
#define LCD_COLLUMNS 16
#define LCD_ROWS 2

LiquidCrystal_I2C lcd(0x27, 16, 2);

void init_lcd()
{
  Serial.println("CONNECTING");
  //initialize lcd screen
  lcd.begin(LCD_COLLUMNS, LCD_ROWS);
  lcd.init();
  lcd.clear();
  // turn on the backlight
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Hai sa bem");

  Serial.println("PRINTED");
  delay(10000);

  lcd.setCursor(0, 1);
  lcd.print("Ma arunc pe geam");
  
  Serial.println("CONNECTED");
}
void setup(){
  Serial.begin(9600);
  init_lcd();
}

void loop(){

}