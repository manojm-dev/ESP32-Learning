#define ir  33

int irout = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ir,INPUT);

}

void loop() {
  
  irout = digitalRead(ir);

  if( irout == 0) 
  {
    Serial.println("Object detected");
  }
  else if(irout == 1)
  {
    Serial.println("object not detected");
  }

}
