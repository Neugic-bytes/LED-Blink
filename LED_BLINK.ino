#define my_led 13

void setup() {
  Serial.begin(9600);
 pinMode(my_led,OUTPUT);

}

void loop() {
  digitalWrite(my_led,HIGH);
  Serial.println("LED is ON");
  digitalWrite(my_led,LOW);
  Serial.println("LED is OF");
  delay(1000);

}