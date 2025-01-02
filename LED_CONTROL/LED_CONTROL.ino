int led = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, 255);
  delay(1000);
  analogWrite(led, 200);
  delay(1000);
  analogWrite(led, 150);
  delay(1000);
  analogWrite(led, 100);
  delay(1000);
  analogWrite(led, 50);
  delay(1000);
  analogWrite(led, 0);
  delay(1000);
}
