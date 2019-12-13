const int SENSOR = A5;
const int SPEAKER = 13;
const int LED = 14;

void setup() {
  Serial.begin(9600);
  while(!Serial);
}

void loop() {
  byte var;
  /*int value = analogRead(SENSOR);*/
  /*Serial.println(value);*/
  //Serial.println(5);
  delay(500);
  var = Serial.read();
  if (var == '1'){
    //analogWrite(SPEAKER, HIGH);
    Serial.println("200");
    delay(500);
  }else{
    Serial.println("404");
    /*analogWrite(LED, HIGH);
    delay(2500);
    analogWrite(LED, LOW);*/
    delay(500);
  }
  delay(1000);
}
