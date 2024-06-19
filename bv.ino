#define leftSensorPin  A0 //left sensor is connected to a0
#define rightSensorPin A1 //right sensor is connected to a1
#define leftMotorPin1  5  //left motor is connected to pin 5 for forward direction
#define leftMotorPin2  6  //left motor is connected to pin 5 for reverse direction
#define rightMotorPin1  10  //right motor is connected to pin 5 for forward direction
#define rightMotorPin2  9 //right motor is connected to pin 5 for reverse direction

//to store sensor readings
int leftSensorValue = 0;
int rightSensorValue = 0;

//to store motor speed values
int leftMotorSpeed = 0;
int rightMotorSpeed = 0;

void setup() {
  //  to set the pin mode of a specific pin to either INPUT or OUTPUT
 	pinMode(leftSensorPin, INPUT);
  	pinMode(rightSensorPin, INPUT);
 	pinMode(leftMotorPin1, OUTPUT);
  	pinMode(leftMotorPin2, OUTPUT);
  	pinMode(rightMotorPin1, OUTPUT);
 	pinMode(rightMotorPin2, OUTPUT);

  // initialisation: sets the initial motor speeds to 0
  	analogWrite(leftMotorPin1, 0);
  	analogWrite(leftMotorPin2, 0);
  	analogWrite(rightMotorPin1, 0);
  	analogWrite(rightMotorPin2, 0);
}

void loop() //code to run repeatedly
 { // To read analog input values from sensors
  	leftSensorValue = analogRead(leftSensorPin);
  	rightSensorValue = analogRead(rightSensorPin);
 	 explorer(); //calling a function from fear, aggression, love, and explorer.
}

void fear()
{
  if (leftSensorValue < 512 && rightSensorValue < 512  ) {
    leftMotorSpeed = 75;;
    rightMotorSpeed = 75;
  } //When the light intensity readings from both sensors are below 50%, the robot moves at a slower speed.
  else if (leftSensorValue > 512 && rightSensorValue < 512) {
    leftMotorSpeed = 150;
    rightMotorSpeed = 100;
  }//with respect to the robot, the bot will move clockwise
  else if (leftSensorValue < 512 && rightSensorValue > 512) {
    leftMotorSpeed = 100;
    rightMotorSpeed = 150;
  }//with respect to the robot, the bot will move anti-clockwise
  else {
    leftMotorSpeed = 200;
    rightMotorSpeed = 200;
  }//When the light intensity readings from both sensors exceed 50%, the bot moves at a higher speed.
  // excitatory connections but in c# 
 //values will be taken according to the light intensity condition
  analogWrite(leftMotorPin1, rightMotorSpeed);//forward direction
  analogWrite(leftMotorPin2, 0);//reverse direction
  analogWrite(rightMotorPin1, leftMotorSpeed);//forward direction
  analogWrite(rightMotorPin2, 0);//reverse direction 
}


void aggression()
{
  if (leftSensorValue < 512 && rightSensorValue < 512) {
    leftMotorSpeed = random(50, 70);//selects a random value from 50-70
    rightMotorSpeed = random(50, 70);//selects a random value from 50-70
  }//When the light intensity readings from both sensors are below 50%, the robot moves at a slower speed.
  else if (leftSensorValue > 512 && rightSensorValue < 512) {
    leftMotorSpeed = 100;
    rightMotorSpeed = 50;
  }//with respect to the robot, the bot will move anti-clockwise
  else if (leftSensorValue < 512 && rightSensorValue > 512) {
     leftMotorSpeed = 50;
    rightMotorSpeed =100;
  }//with respect to the robot, the bot will move clockwise
  else {
    leftMotorSpeed = 220;
    rightMotorSpeed = 220;
  }//When the light intensity readings from both sensors exceed 50%, the bot moves at a higher speed.
  //excitatory connections but in c#
  //values will be taken according to the light intensity condition
  analogWrite(leftMotorPin1, rightMotorSpeed);//forward direction
  analogWrite(leftMotorPin2, 0);//reverse direction
  analogWrite(rightMotorPin1, leftMotorSpeed);//forward direction
  analogWrite(rightMotorPin2, 0);//reverse direction 
}

void love()
{
  if (leftSensorValue < 512 && rightSensorValue < 512) {
    leftMotorSpeed = 200;
    rightMotorSpeed = 200;
  }//When the light intensity readings from both sensors are below 50%, the robot moves at a higher speed.
  else if (leftSensorValue > 512 && rightSensorValue < 512) {
    leftMotorSpeed = 75;
    rightMotorSpeed = 150;
  }//with respect to the robot, the bot will move anti-clockwise
  else if (leftSensorValue < 512 && rightSensorValue > 512) {
    leftMotorSpeed = 150;
    rightMotorSpeed = 75;
  }//with respect to the robot, the bot will move clockwise
  else {
    leftMotorSpeed = 0;
    rightMotorSpeed = 0;
 }//When the light intensity readings from both sensors exceed 50%, the bot stays idle.
  //inhibitory connections but in c#
  //values will be taken according to the light intensity condition
  analogWrite(leftMotorPin1, leftMotorSpeed);//forward direction
  analogWrite(leftMotorPin2, 0);//reverse direction
  analogWrite(rightMotorPin1, rightMotorSpeed);//forward direction
  analogWrite(rightMotorPin2, 0);//reverse direction
}

void explorer()
{
  if (leftSensorValue < 512 && rightSensorValue < 512)
  {rightMotorSpeed=200;
  leftMotorSpeed=200;
  }// If both sensors recieve less than 50% light, it moves with high speed
  else if (leftSensorValue > 512 && rightSensorValue < 512) {
  leftMotorSpeed=150;
  rightMotorSpeed=75;
  }//with respect to the bot, the mot will move clockwise
  else if (leftSensorValue < 512 && rightSensorValue > 512) {
  leftMotorSpeed=75;
  rightMotorSpeed=150;
  }//with respect to the bot, the bot will move anti-clockwise
  else {//when intensity of light is more than 50% in both the sensors
  rightMotorSpeed=0;
  leftMotorSpeed=0;
  }//there will be no movement
  analogWrite(leftMotorPin1, rightMotorSpeed);//forward direction
  analogWrite(leftMotorPin2, 0);//reverse direction
  analogWrite(rightMotorPin1, leftMotorSpeed);//forward direction
  analogWrite(rightMotorPin2, 0);//reverse direction  
}



