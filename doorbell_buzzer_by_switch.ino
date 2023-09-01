const int buttonPin = 2;
const int BUZZERpin = 8;
int buttonREAD = 0;

void setup() {
  // put your setup code here, to run once:

pinMode(buttonPin, INPUT);
pinMode(BUZZERpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonREAD = digitalRead(buttonPin);

if (buttonREAD == 1){
  for (int n = 0; n<50; n++){
    digitalWrite(BUZZERpin, HIGH);
    delay(3);
    digitalWrite(BUZZERpin,LOW);
    delay(3);
  }
  for (int n = 0; n<80; n++){
    digitalWrite(BUZZERpin, HIGH);
    delay(5);
    digitalWrite(BUZZERpin,LOW);
    delay(5);
  }
  

}

}
