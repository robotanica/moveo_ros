#include <Servo.h> 

Servo gripper;

const int MAX_ANGLE = 160;
const int MIN_ANGLE = 50;

int i=0;
int duty_cycle = MIN_ANGLE;

void setup() {
  // put your setup code here, to run once:
  // Configure gripper servo
  gripper.attach(11);
  
  digitalWrite(13, 1); //toggle led
  Serial.begin(115200);
}

void loop() {
  if((++i % 50) == 0) duty_cycle++;
  if(duty_cycle >= MAX_ANGLE) {
    duty_cycle = MIN_ANGLE;
    i = 0;
  }
  Serial.println(duty_cycle);
  
  // put your main code here, to run repeatedly:
  gripper.write(duty_cycle);
  
  digitalWrite(13, HIGH-digitalRead(13)); //toggle led
}
