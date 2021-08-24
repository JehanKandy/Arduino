int adv; 
int ledpin1 = 3;
int ledpin2 = 5;
int ledpin3 = 6;
int ledpin4 = 9;

void setup() {
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(ledpin4,OUTPUT);
  
}

void loop() {
  adv = analogRead(A0);

  analogWrite(ledpin1, map(adv, 0, 1023, 0, 255));
  analogWrite(ledpin2, map(adv, 0, 1023, 0, 255));
  analogWrite(ledpin3, map(adv, 0, 1023, 0, 255));
  analogWrite(ledpin4, map(adv, 0, 1023, 0, 255));
 
}
