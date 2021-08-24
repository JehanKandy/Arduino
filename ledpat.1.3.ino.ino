int t = 100;
int counter = 10;
int val = 0;

void setup() {
 for(int i = 4; i <= 13; i++){
  pinMode(i,OUTPUT);
 }
 Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    val = Serial.read();
    Serial.println(val,DEC);
  }
  if(val == '1'){
    pat1();
  }
  else if(val == '2'){
    pat2();
  }
  else if(val == '3'){
    pat3();
  }
  else if(val == '4'){
    pat4();
  }
  else if(val == '5'){
    pat5();
  }
  else if(val == '6'){
    pat6();
  }
  else if(val == '7'){
    pat7();
  }
}

void pat1(){ 
  for(int i = 4; i <= 13; i++){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i,LOW);
  }
  for(int i = 12; i >= 4; i--){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i,LOW);
  }
}
void pat2(){
  for(int i = 4; i<=13; i=i+2){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i,LOW); 
  }
  for(int i = 12; i>=4; i=i-2){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i,LOW);
  }
}
void pat3(){
  for(int i = 4; i <= 13; i++){
    digitalWrite(i,HIGH);
    delay(t);
  }
  for(int i = 13; i >= 4; i--){
    digitalWrite(i,LOW);
    delay(t);
  }
}
void pat4(){
  for(int i = 4; i <= 8; i++){
    digitalWrite(i,HIGH);
  }
  delay(500);
  for(int i = 4; i <= 8; i++){
    digitalWrite(i,LOW);
  }
  

  
  for(int i = 9; i <= 13; i++){
    digitalWrite(i,HIGH);
  }
  delay(500);
  
  for(int i = 9; i <= 13; i++){
    digitalWrite(i,LOW);
  }

  
}

void pat5(){
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);

  delay(500);

  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);

  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);

  delay(500);

  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
void pat6(){
  for(int i = 4; i<=13; i=i+2){
    digitalWrite(i,HIGH);
  }
  
  delay(500);
  
  for(int i = 4; i<=13; i=i+2){
    digitalWrite(i,LOW);
  }

  
  
  for(int i = 5; i<=13; i=i+2){
    digitalWrite(i,HIGH);
  }

  delay(500);

  for(int i = 5; i<=13; i=i+2){
    digitalWrite(i,LOW);
  }
}
void pat7(){
  int d = 1;
  for(int a = 9; a<=13; a++){
    digitalWrite(a,HIGH);
    digitalWrite((a - d),HIGH);
    delay(t);

    digitalWrite(a,LOW);
    digitalWrite((a - d),LOW);

    
    d = d + 2;
  }
}
