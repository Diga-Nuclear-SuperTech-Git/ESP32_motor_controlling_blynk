const int IN3 = 10;
const int IN4 = 11;

void setup() {
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Continuous forward rotation
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void loop() {
  // Nothing here
}