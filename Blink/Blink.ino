
int g = 27;    
int y = 26;
int r = 25;      
int b = 0;      


void setup() {
  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
}


void loop() 
{ 
  
  for(b=0;b<=255;b++){
    analogWrite(g, b);
    delay(10);
    }
    analogWrite(g, 0);
    
    for(b=0;b<=255;b++){
      analogWrite(y, b);
      delay(10);
      }
      analogWrite(y, 0);
   
   for(b=0;b<=255;b++)
   {
    analogWrite(r, b);

    delay(10);
   }
   analogWrite(r, 0);

}
