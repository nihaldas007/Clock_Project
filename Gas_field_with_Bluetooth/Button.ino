int lswitch() {
  if (digitalRead(pushL) == LOW) {
    delay(200);
    return 1;
  }
  else return 0;

}
int rswitch() {
  if (digitalRead(pushR) == LOW) {
    delay(200);
    return 1;
  }
  else return 0;
}
int mswitch () {
if (digitalRead(pushM) == LOW) {
    delay(50);
    return 1;
  }
  else return 0;
}
int mlswitch() {
  while (Serial.available() > 0) {
    command = Serial.read();
    someInt = command - '0';
  }
  if(someInt == 3){
    delay(50);
    return 1;
  }
  else return 0;
}
int rlswitch() {
  while (Serial.available() > 0) {
    command = Serial.read();
    someInt = command - '0';
  }
  if(someInt == 1){
    delay(100);
    return 1;
  }
  else return 0;
}
int llswitch() {
  while (Serial.available() > 0) {
    command = Serial.read();
    someInt = command - '0';
  }
  if(someInt == 2){
    delay(100);
    return 1;
  }
  else return 0;
}
