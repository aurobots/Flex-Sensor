//Flex sensor robotic hand controller 
//This code is for controlling a robotic hand with
//a flex sensor glove.
//
//© Au Robots 27.3.2017



//Including servo library
#include <Servo.h> 

//Naming servos
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

//Configuring analog inputs for the sensors
const int flexpin2 = 4; 
const int flexpin3 = 0; 
const int flexpin4 = 1; 
const int flexpin5 = 3; 
const int flexpin6 = 2; 

void setup() 
{ 
//Configuring PWM pins for servos
servo2.attach(10); // pinky
servo3.attach(11); //ring
servo4.attach(3); // middle
servo5.attach(6); //index
servo6.attach(5); //thumb
} 


void loop() 
{ 
  //Declaring servo position and flex position
  int flexposition2;   
  int servoposition2;   

  //Flex position is equal to the sensor value
  flexposition2 = analogRead(flexpin2);

  //Mapping the sensor value to servo position
  //servoposition = map(flexposition, min(sensor), max(sensor), min(servo), max(servo));
  servoposition2 = map(flexposition2, 550, 810, 38, 180);

  //Servo position is a value between min(servo), max(servo)
  servoposition2 = constrain(servoposition2, 38, 180);

  //Writing servo position
  servo2.write(servoposition2);
  
  /////////////////////////////////////////////////////////////
  
  int flexposition3;   
  int servoposition3;   

  flexposition3 = analogRead(flexpin3);

  servoposition3 = map(flexposition3, 560, 800, 10, 148);
  servoposition3 = constrain(servoposition3, 10, 148);

  servo3.write(servoposition3);

  /////////////////////////////////////////////////////////////  
    
  int flexposition4;   
  int servoposition4;   

  flexposition4 = analogRead(flexpin4);

  servoposition4 = map(flexposition4, 550, 780, 0, 89);
  servoposition4 = constrain(servoposition4, 0, 89);

  servo4.write(servoposition4);
   
  /////////////////////////////////////////////////////////////

  int flexposition5;   
  int servoposition5;   
  
  flexposition5 = analogRead(flexpin5);

  servoposition5 = map(flexposition5, 550, 800, 16, 180);
  servoposition5 = constrain(servoposition5, 16, 180);

  servo5.write(servoposition5);

  /////////////////////////////////////////////////////////////
  
  int flexposition6;   
  int servoposition6;   

  flexposition6 = analogRead(flexpin6);

  servoposition6 = map(flexposition6, 560, 740, 16, 180);
  servoposition6 = constrain(servoposition6, 16, 180);

  servo6.write(servoposition6);

  delay(20);
} 

