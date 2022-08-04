# Buck_converter_circuit-Controlling_servos
Section1:

Buck converter circuit and a design of how to controlling multiple servos

Buck converter is a step-down converter that is more efficient than the linear volt regulators.

The buck converter circuit is based on LM2576T-ADJ, which can produce output voltage from 1.2V - 55V adjusted by a potentiometer. 
So that it can be used for producing 5V or 3.3V using for sensors and controllers. 

The circuit can be designed as shown in attached file, or can be bought as a module such as LM2596 Dc-Dc converter. 

______________________________________________________________________________________________________________________

Section2:

Arduino Uno and Nano has only 6 PWM pins for controlling servos, so by using PCA9685 servo driver module, 16 servos can be controlled by using one Arduino board.

The communication between the driver module and Arduino is based on I2C, so that only two pins are needed for connections (A4 and A5).

Digital pins (2 3 4 5) are used along Transistor NPN 
