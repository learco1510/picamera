void setup() {
  pinMode(12, OUTPUT); 
  digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level) 
  delay(3000); // wait for a second
  digitalWrite(12, LOW); // turn the LED off by making the voltage LOW 
  delay(2000); // wait for a second 
  digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level) 
  delay(3000); // wait for a second 
  digitalWrite(12, LOW); // turn the LED off by making the voltage LOW 
  delay(2000); // wait for a second
}

void loop() {
  digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level) 
  delay(1000); // wait for a second 
  digitalWrite(12, LOW); // turn the LED off by making the voltage LOW 
  delay(1000); // wait for a second

}
