int In1 =8;
int In2 =9;
int In3 =10;
int In4 =11;

int delayTime = 1;
void setup() {
  pinMode(In1, OUTPUT);
   pinMode(In2, OUTPUT);
    pinMode(In3, OUTPUT);
     pinMode(In4, OUTPUT);
  // put your setup code here, to run once:
  
}

void loop() {

// reverse rotation
for(int j= 0;j<64;j++){
  for(int i=0;i<8;i++){
 reverse(delayTime);
  }
}
// normal rotation - 360 degree
for(int j= 0;j<64;j++){
  for(int i=0;i<8;i++){
 normal(delayTime);
  }
}
// reverse rotation - 180 degree
for(int j= 0;j<32;j++){
  for(int i=0;i<8;i++){
 reverse(delayTime);
  }
}

}

void normal(int delayTime){
  //1
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  delay(delayTime);
  //2
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, HIGH);
  delay(delayTime);
  //3
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //4
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //5
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //6
  digitalWrite(In1, HIGH);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //7
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);
//8
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);
}
void reverse(int delayTime){
//8
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //7
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);

  //6
  digitalWrite(In1, HIGH);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);
    //5
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //4
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //3
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  delay(delayTime);
  //2
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, HIGH);
  delay(delayTime);
  //1
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  delay(delayTime);

}
