int Dpin1 = 2;
int PWM1  = 3;
int Dpin2  = 4;
int PWM2  = 5;
int Dpin3 = 7;
int PWM3  = 6;
int Dpin4 = 8;
int PWM4  = 9;
int Dpin5 = 12;
int PWM5  = 10;


int t = 100;
int led[] = {Dpin1,PWM1,Dpin2,PWM2,Dpin3,PWM3,Dpin4,PWM4,Dpin5,PWM5};
int turn = 10;

void setup() {
  for(int i = 0; i <= 10; i++){
    pinMode(led[i],OUTPUT); 
  }
  
}

void loop() {
   for(int i = 0; i<=turn; i++){
      pat1();
   }
   for(int i = 0; i<=turn; i++){ 
      pat2();
   }
   for(int i = 0; i<=turn; i++){
      pat3();
   }
   for(int i = 0; i<=turn; i++){
      pat4();
   }
}
  
void pat1(){ 
  for(int i = 0; i <= 10; i++){
    digitalWrite(led[i],HIGH);
    delay(t);
    digitalWrite(led[i],LOW);
  }
  for(int i = 10; i >= 0; i--){
    digitalWrite(led[i],HIGH);
    delay(t);
    digitalWrite(led[i],LOW);
  }
}
void pat2(){
  for(int i = 0; i<=10; i=i+2){
    digitalWrite(led[i],HIGH);
    delay(t);
    digitalWrite(led[i],LOW); 
  }
  for(int i = 10; i>=0; i=i-2){
    digitalWrite(led[i],HIGH);
    delay(t);
    digitalWrite(led[i],LOW);
  }
}
void pat3(){
  for(int i = 0; i <= 10; i++){
    digitalWrite(led[i],HIGH);
    delay(t);
  }
  for(int i = 10; i >= 0; i--){
    digitalWrite(led[i],LOW);
    delay(t);
  }
}
void pat4(){
  for(int i = 0; i <= 4; i++){
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for(int i = 0; i <= 4; i++){
    digitalWrite(led[i],LOW);
  }
  

  
  for(int i = 5; i <= 10; i++){
    digitalWrite(led[i],HIGH);
  }
  delay(500);
  for(int i = 5; i <= 10; i++){
    digitalWrite(led[i],LOW);
  }

}
