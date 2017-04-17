void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println(analogRead(2));
delay(10);
}

