int switchState = 0;


void setup() {
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (2, OUTPUT);

}

void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW){ //the button is not pressed
    digitalWrite (3, HIGH); //green light
    digitalWrite (4, LOW);  //red light
    digitalWrite (5, LOW);  //red light
  }

  else { //the button is pressed
    digitalWrite (3, LOW); //green light
    digitalWrite (4, LOW);  //red light
    digitalWrite (5, HIGH);  //red light
  

  delay(250); //wait for a quarter of second
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay (250);
  }
}
