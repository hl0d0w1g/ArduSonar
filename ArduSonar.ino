#include <Servo.h>

const int servoPin = 11;
const int trigPin = 6;
const int echoPin = 5;

int duration;
int distance;

Servo servo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  servo.attach(servoPin);
  
  Serial.begin(9600);
}

void loop() {

  for(int angle = 5; angle <= 175; ){
    if(Serial.read() == 1){
      servo.write(angle);
      delay(25);
      distance = calculateDistance();
      printData(angle, distance);
      angle++; 
    }
  }
  
  for(int angle = 175; angle >= 5; ){  
    if(Serial.read() == 1){
      servo.write(angle);
      delay(25);
      distance = calculateDistance();
      printData(angle, distance);
      angle--; 
    }
  }
    
}

// Calculate the distance to the nearest object
int calculateDistance(){ 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  return distance;
}

// Put the information in the serial port
int printData(int angle, int distance){ 
  Serial.print(angle);
  Serial.print(";");
  Serial.println(distance);
}
