
#define ADC_VREF_mV    3300.0 // in millivolt
#define ADC_RESOLUTION 4096.0
#define PIN_LM35       35 

void setup() {
  Serial.begin(115200);
}

void loop() {
 
  int adcVal = analogRead(PIN_LM35);

  float milliVolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);

  float tempC = milliVolt / 10;


  Serial.print("Temperature: ");
  Serial.print(tempC);  
  Serial.print("°C");
  Serial.println(" ");

  delay(500);
}
