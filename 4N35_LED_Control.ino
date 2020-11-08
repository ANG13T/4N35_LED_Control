const int optPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(optPin, OUTPUT);
} 

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(optPin, LOW);
  delay(500);
  digitalWrite(optPin, HIGH);
  delay(500);
} 
