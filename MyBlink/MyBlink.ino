/*
 * Pin D06 has an LED connection on Flora
 * 2016_0328 PePo
 */

#define LED 13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("LED on");
  digitalWrite(LED, HIGH);
  delay(1000);
  Serial.println("LED off");
  digitalWrite(LED, LOW);
  delay(1000);
}
