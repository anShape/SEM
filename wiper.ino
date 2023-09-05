#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int min = 0;
int max = 60;

void setup() {
  myservo.attach(9);  // (pin, min, max)
}

void loop() {
  for(int x=max; x>=min; x--){
    myservo.write(x);
    delay(10);
  }
  delay(200);
    
  for(int x=min; x<=max; x++){
    myservo.write(x);
    delay(10);
  }
  delay(1000);

}
