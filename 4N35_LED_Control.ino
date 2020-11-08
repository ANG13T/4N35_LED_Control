const int optPin = 7; //pin is set up to 7

void setup() {
  // configuring pins
  pinMode(optPin, OUTPUT);
} 

void loop() {
  // controls LED by turning it off and on with a 1 second delay
  digitalWrite(optPin, LOW);
  delay(1000);
  digitalWrite(optPin, HIGH);
  delay(1000);
} 
