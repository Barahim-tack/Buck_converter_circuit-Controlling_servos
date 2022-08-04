# Buck_converter_circuit-Controlling_servos
Section1:

Buck converter circuit and a design of how to controlling multiple servos

Buck converter is a step-down converter that is more efficient than the linear volt regulators.

The buck converter circuit is based on LM2576T-ADJ, which can produce output voltage from 1.2V - 55V adjusted by a potentiometer. 
So that it can be used for producing 5V or 3.3V using for sensors and controllers. 

The circuit can be designed as shown in attached file, or can be bought as a module such as LM2596 Dc-Dc converter. 

______________________________________________________________________________________________________________________

Section2:

Disable power of servos is not a practical way becuase it is not designed for such that, however, disable power for motors generally must be down via a relay or MOSFET due to the high current drain by the motor - stalling current can be as high as 500 mA or more. 

In this section, I used MOSFET N-channel (IRF520) for disable the power to the servo, as well as detach() function to disable sending PWM signal. 

Again, when need to move the servo, two things should be done, enable power & PWM signal via attach() function. 
