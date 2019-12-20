const int SENSOR = A5;
const int SPEAKER = 13;
const int LED = 14;

void setup() {
  Serial.begin(9600);
  while(!Serial);
}

void loop() {
  byte var;
  int value = analogRead(SENSOR);*/
  Serial.println(value);
  delay(500);
  var = Serial.read();
  if (var == '1'){
    tone(SPEAKER, 256, 1000);
    delay(500);
  }else{
    analogWrite(LED, HIGH);
    delay(2500);
    analogWrite(LED, LOW);
    delay(500);
  }
  delay(1000);
}
