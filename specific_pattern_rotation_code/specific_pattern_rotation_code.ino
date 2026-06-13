const int IN3 = 25;
const int IN4 = 26;

void setup() {
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {

  // Forward for 10 seconds
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(10000);

  // Stop for 5 seconds
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(5000);

  // Backward for 10 seconds
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(10000);

  // Stop for 5 seconds
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(5000);
}