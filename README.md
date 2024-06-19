# Braitenberg-Vehicle
Braitenberg vehicle is a simple version of a robot that works on reaction to stimuli in its environment. The primary behaviors of these rudimentary robots: fear, aggression, love, and exploration are based on the straight or cross-connections between the two motors and sensors that elicit these excitatory or inhibitory movements.

A Braitenberg vehicle consists of a light sensor, a motor, and a battery. The sensor detects light and sends the signal to the motor, which causes the vehicle to move in a certain direction. By connecting the sensor and motor in a specific way, the vehicle can exhibit different behaviors.
                   
Fear is one of the behaviors exhibited. The left motor is connected to the left sensor and the right sensor is connected to the right motor. When the photoresistor senses light, the vehicle moves rapidly away from the light showing fear and cowardly behavior. For instance, if the sensor detects a light the vehicle immediately changes its direction. In simple words, if the high intensity light is sensed by the right photoresistor, the right motor runs fast resulting in the vehicle to move towards the left i.e. away from the light.

The next behavior is aggression. This is the type of the behavior in which the left sensor is connected to the right motor, and the right sensor is connected to the left motor. When the photoresistor senses light, the vehicle moves towards the light at a fast speed, appearing to chase the light aggressively. That is, if the high intensity light is sensed by the right photoresistor, the left motor starts to increase its pace resulting in the vehicle to move to the right i.e. towards the light with aggression.

Next the behavior of love is designed in such a way that when the sensor detects a light the vehicle move towards a light source. The vehicle moves around in random motion in the darkness until the photoresistor senses light, once it senses light the vehicle moves towards the light slowly and then stops near it which we can also say that the vehicle is admiring the light. After the light is removed the vehicle starts roaming around in random motion again.

In explorer behavior, the left sensor is wired to the right motor and the right sensor is wired to the left motor. Similar to love, the vehicle moves around randomly in the darkness but once the photoresistor senses the light the vehicle moves towards the light, stops there for a few seconds and then starts to wander around irrespective of if the light is still present or not. Thus, it displays behavior of exploration, in search of new sources of light.

The components used are:
Component                                 Quantity 
Arduino UNO                                  1
Photoresistors                               2 
Breadboard                                   1 
Jumper wires                                 15 
Chassis set (motors, chassis, wheels)        1 
LM298N Motor Driver                          1 
Lithium Battery (3.7V)                       2
                   
