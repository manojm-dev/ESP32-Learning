#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define ir  33

int irout = 0;

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  lcd.begin();
  lcd.backlight();
  Serial.begin(115200);
  pinMode(ir,INPUT);
}

void loop() {

  irout = digitalRead(ir);
    
  if( irout == 0) 
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Object detected");
    delay(2000);
  }
  else if(irout == 1)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("object not");
    lcd.setCursor(0,1);
    lcd.print("detected");
    delay(2000);
  }

}
