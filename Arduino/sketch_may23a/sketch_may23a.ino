//korewoutu sudo chmod a+rw /dev/ttyACM0  


void setup() {
	pinMode(10, OUTPUT);
	//analogWrite(10, 204);
}

void loop() {
  for(int i = 0; i < 256; i++){
    analogWrite(10, i);
    delay(1);
  }
  delay(40);
  for(int i = 255; i > 0; i--){
    analogWrite(10, i);
    delay(1);
  }
  delay(40);
  // put your main code here, to run repeatedly:
}
