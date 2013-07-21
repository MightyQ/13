//  Robot Friend, with photoresistor eyes!!!

/////////////////////////////start of sketch/////////////////////////////////

int photoresistor1 = A0;  // photoresistor pins

int ledPin1 = 11;  // led pins
int ledPin2 = 10;

void setup() {
  // no code needed here
}

void loop() {
  int val1=analogRead(photoresistor1);  // assign variables
  
  int ledLevel=map(val1, 300, 950, 255, 0); //LED's levelss
  
  analogWrite(ledPin1, ledLevel);  //turn LED's on proportionally
  analogWrite(ledPin2, ledLevel);
}
