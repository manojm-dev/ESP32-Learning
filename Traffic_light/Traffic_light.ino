// constants won't change. They're used here to set pin numbers:
const int stopbuttonPin = 8;     // the number of the pushbutton pin
const int gobuttonPin = 3;     // the number of the pushbutton pin
const int redledPin =  7;      // the number of the LED pin
const int yellowledPin =  5;      // the number of the LED pin
const int greenledPin =  6;      // the number of the LED pinc 
const int iroutputPin = 10;

// variables will change:
int stopbutton = 0;
int gobutton = 0;// variable for reading the pushbutton status
int iroutput =0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(redledPin, OUTPUT);
  pinMode(yellowledPin, OUTPUT);
  pinMode(greenledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(stopbuttonPin, INPUT);
  pinMode(gobuttonPin, INPUT);
  pinMode(iroutputPin,INPUT);
}

void loop() {

  stopbutton = digitalRead(stopbuttonPin);
  gobutton = digitalRead(gobuttonPin);
  iroutput = digitalRead(iroutputPin);

  if (iroutput ==LOW)
  {
    digitalWrite(redledPin, HIGH);
    digitalWrite(greenledPin,LOW);
    digitalWrite(yellowledPin, LOW);
  }
  else
  {
  if( stopbutton == HIGH ) 
  {
    // turn LED on:
    digitalWrite(redledPin, HIGH);
    digitalWrite(greenledPin,LOW);
    digitalWrite(yellowledPin, LOW);
  } 
  else if( gobutton == HIGH )
  {
    // turn LED off:
    digitalWrite(greenledPin, HIGH);
    digitalWrite(redledPin,LOW);
    digitalWrite(yellowledPin, LOW);
  }
  else 
  {
    digitalWrite(greenledPin,LOW);
    digitalWrite(redledPin,LOW);
    digitalWrite(yellowledPin, HIGH);
  } 
  }
}
