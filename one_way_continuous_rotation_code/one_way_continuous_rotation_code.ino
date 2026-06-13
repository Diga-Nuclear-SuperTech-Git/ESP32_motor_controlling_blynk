const int IN3 = 25;
const int IN4 = 26;

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