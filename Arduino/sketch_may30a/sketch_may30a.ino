#include <Servo.h>

Servo servo1;

void setup() {

  servo1.attach(10);
  // put your setup code here, to run oncsude:
  servo1.write(0);

}

void loop() {
  for(int i = 1; i <= 100; i++){
    if(i % 3 == 0 && i % 5 != 0){
      servo1.write(50);
      delay(500);
    }else if(i % 5 == 0 && i % 3 != 0){
      servo1.write(100);
      delay(500);
    }else if(i % 5 == 0 && i % 3 == 0){
      servo1.write(180);
      delay(500);
    }else{
      servo1.write(10);
      delay(500);
    }
    servo1.write(0);
    delay(500);
  }

  
  /*
  for(int k = 0; k < 360; k = k + 10){
    for(int j = 0; j < 3; j++){
      for(int i = 0; i <= k; i++){
       servo1.write(i);
       delay(j);
     }
      for(int i = k; i >= 0; i--){
        servo1.write(i);
       delay(j);
      }
      servo1.write(0);
      delay(10);
    }
  }*/

  // put your main code here, to run repeatedly:

}
