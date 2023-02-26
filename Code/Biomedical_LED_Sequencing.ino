#define LED1 13
#define LED2 12
#define LED3 14
#define Button 27

void setup() {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (Button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  
  //Sequences LEDs on and off for 1 second 5 times on the press of the button
  
  if (digitalRead(Button) == LOW) {
    for(int i = 0; i<5; i++) {
      digitalWrite (LED1, HIGH);
      delay(100);
      digitalWrite (LED1, LOW);
      delay(100);
      digitalWrite (LED2, HIGH);
      delay(100);
      digitalWrite (LED2, LOW);
      delay(100);
      digitalWrite (LED3, HIGH);
      delay(100);
      digitalWrite (LED3, LOW);
      delay(100);
    }
   exit(0);
  }
}
