int speed = 9;
int directionClockwise = 5;
int directionAnticlockwise = 6;

void setup() {
pinMode(speed,OUTPUT);
pinMode(directionClockwise,OUTPUT);
pinMode(directionAnticlockwise,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(speed,160); // can be set from 0 to 255
digitalWrite(directionClockwise,HIGH);
digitalWrite(directionAnticlockwise,LOW);
 delay(3000);
 digitalWrite(directionClockwise,LOW);
digitalWrite(directionAnticlockwise,LOW);
delay(2000);
digitalWrite(directionClockwise,LOW);
digitalWrite(directionAnticlockwise,HIGH);
delay(3000);
digitalWrite(directionClockwise,LOW);
digitalWrite(directionAnticlockwise,LOW);
delay(2000);
}
