void setup() {
  // put your setup code here, to run once:
int i;
for (i=2;i<=9;i++){
  pinMode(i, OUTPUT);
}

}

void loop() {
  // put your main code here, to run repeatedly:
  int a;
  for (a=2; a<= 9;a++){
    digitalWrite(a,HIGH);
    delay(100);
  }
  for (a=9; a>= 2;a--){
    digitalWrite(a,LOW);
    delay(100);
  }
  for (a=9;a>=2;a--){
    digitalWrite(a,HIGH);
    delay(100);
  }
  for (a=2;a<=9; a++){
    digitalWrite(a,LOW);
    delay(100);
  }

}
