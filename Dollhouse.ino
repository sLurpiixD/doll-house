// Initiate switch state, placed as 0 means it is always OFF at start
SwitchState1 = 0;
int SwitchState2 = 0;
int SwitchState3 = 0;
int SwitchState4 = 0;
int SwitchState5 = 0;
int SwitchState6 = 0;
int SwitchState7 = 0;

void setup() {
  // Switches
  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  // LEDs
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);

  // Motors
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
}

void loop() {
  SwitchState1 = digitalRead(13);
  SwitchState2 = digitalRead(12);
  SwitchState3 = digitalRead(11);
  SwitchState4 = digitalRead(10);
  SwitchState5 = digitalRead(9);
  SwitchState6 = digitalRead(8);
  SwitchState7 = digitalRead(7);

  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(A0, LOW);
  digitalWrite(A1, !LOW);

  // Evaluate each switch state
  if (SwitchState1 == LOW) {
    digitalWrite(6, HIGH);
  }
  if (SwitchState2 == LOW) {
    digitalWrite(5, HIGH);
  }
  if (SwitchState3 == LOW) {
    digitalWrite(4, HIGH);
  }
  if (SwitchState4 == LOW) {
    digitalWrite(3, HIGH);
  }
  if (SwitchState5 == LOW) {
    digitalWrite(2, HIGH);
  }
  if (SwitchState6 == LOW) {
    digitalWrite(A0, HIGH);
  }
  if (SwitchState7 == LOW) {
    digitalWrite(A1, !HIGH);
  }
}

