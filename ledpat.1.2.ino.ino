int button = 13;
int t = 100;
int q = 0; 
void setup() {
  for(int i = 2; i <= 11; i++){
    pinMode(i,OUTPUT);
  }
  pinMode(button,INPUT);
}

void loop() {

if(digitalRead(13) == HIGH){
    digitalWrite(2,HIGH);
    delay(t);
  
  }
  if(q == '1'){
    pat1();
  }
  if(q == '2'){
    pat2();
  }
  if(q == '3'){
    pat3();
  }
  if(q == '4'){
    pat4();
  }

}
void pat1(){
  for(int i = 2; i <- 11; i++){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i,LOW);
  }
  for(int i = 11; i >= 2; i++){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i,LOW);
  }
}
void pat2(){
  for(int i = 2; i <= 11; i++){
    digitalWrite(i,HIGH);
  }
  delay(1000);
  for(int i = 2; i<= 11; i++){
    digitalWrite(i,LOW);
  }
}
void pat3(){
  for(int i = 2; i <= 6; i++){
    digitalWrite(i,HIGH);
  }
  delay(500);
  for(int i = 7; i <= 11; i++){
    digitalWrite(i,LOW);
  }
  for(int i = 7; i <= 11; i++){
    digitalWrite(i,HIGH);
  }
  delay(500);
  
  for(int i = 9; i <= 13; i++){
    digitalWrite(i,LOW);
  }
}

void pat4(){
  int d = 1;
  for(int a = 2; a<=11; a++){
    digitalWrite(a,HIGH);
    digitalWrite((a - d),HIGH);
    delay(t);

    digitalWrite(a,LOW);
    digitalWrite((a - d),LOW);

    d = d + 2;
  }  
}
