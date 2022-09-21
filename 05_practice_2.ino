int count = 0;

void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7, 0);
  delay(1000);
}

void loop() {
  while(count < 5){
    digitalWrite(7, 1);
    delay(100);
    digitalWrite(7, 0);
    delay(100);
    ++count;
  }
  digitalWrite(7, 1);
  while(1){}
}
