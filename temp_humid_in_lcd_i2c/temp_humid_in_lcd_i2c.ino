#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define DHTPIN 13
#define DHTTYPE    DHT11

DHT_Unified dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x3F, 16, 2);

uint32_t delayMS;


void setup() {
  Serial.begin(115200);
  dht.begin();
  sensor_t sensor;
  lcd.begin();
  lcd.backlight();
}

void loop() {
  delay(delayMS);
  sensors_event_t event;
  dht.temperature().getEvent(&event);

  if (isnan(event.temperature)) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Error in temp");
  }
  else {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.setCursor(6,0);
    lcd.print(event.temperature);
  }

  delay(1000);
  dht.humidity().getEvent(&event);
  
  if (isnan(event.relative_humidity)) {
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Error in humid");
  }
  else {
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Humidity ");
    lcd.setCursor(9,1);
    lcd.print(event.relative_humidity);
  }
  delay(1000);
  
}
