void setup() {
  pinMode(1, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  int tilt = digitalRead(1); 

  if (tilt == 1) {
    
    digitalWrite(4, 1);
  } else {
    
    digitalWrite(4, 0);
  }
}
