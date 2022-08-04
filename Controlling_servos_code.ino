#include "HCPCA9685.h"

#define  I2CAdd 0x40  //this is the default address of PCA9685 Servo Driver. 
                      //you should check the address of yours
HCPCA9685 HCPCA9685(I2CAdd);

int servo0En = 2;
int servo1En = 3;
int servo2En = 4;
int servo3En = 5;

void setup() {
  for(int i=2;i<6;i++){
    pinMode(i,OUTPUT);
  }

 HCPCA9685.Init(SERVO_MODE);
 HCPCA9685.Sleep(false);
}

void loop() {

 digitalWrite(servo0En,HIGH);
 HCPCA9685.Servo(0, 45);
 delay(1000);
 HCPCA9685.Servo(0, 0);
 delay(1000);
 digitalWrite(servo0En,LOW);

 digitalWrite(servo1En,HIGH);
 HCPCA9685.Servo(1, 45);
 delay(1000);
 HCPCA9685.Servo(1, 0);
 delay(1000);
 digitalWrite(servo1En,LOW);

 digitalWrite(servo2En,HIGH);
 HCPCA9685.Servo(2, 45);
 delay(1000);
 HCPCA9685.Servo(2, 0);
 delay(1000);
 digitalWrite(servo2En,LOW);

 digitalWrite(servo3En,HIGH);
 HCPCA9685.Servo(3, 45);
 delay(1000);
 HCPCA9685.Servo(3, 0);
 delay(1000);
 digitalWrite(servo3En,LOW);
}
