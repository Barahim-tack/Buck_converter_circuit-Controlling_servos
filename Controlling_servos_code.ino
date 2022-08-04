#include <Servo.h>

Servo myServo; 
int servoEn = 2;

void setup() {
 pinMode(servoEn,OUTPUT);
}

void loop() {
  
 myServo.attach(9);               //Enable sending PWM signal via pin 9
 digitalWrite(servoEn,HIGH);      //Enable power to servo
 myServo.write(45);
 delay(1000);
 myServo.write(0);
 delay(1000);
 myServo.detach(9);              //Disable sending PWM signal via pin 9
 digitalWrite(servoEn,LOW);      //Disable power to servo 
 delay(5000);
 /*be aware that when disable power and PWM signal 
   the servo cannot keep the poistion when some force applied to the shaft*/
}
