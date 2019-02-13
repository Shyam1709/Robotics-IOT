
#define trigPin 10
#define echoPin 13
 float duration, distance;
const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;
 
void setup() 
{
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //pinMode(pwm,OUTPUT);

}
 
void loop()
{

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
 distance = (duration / 2) * 0.0343;
  Serial.println(distance);
 
  
  if (distance <= 20) {
//stop();
delay(500);
 leftWard();
  
  }
  else{
    digitalWrite(leftForward ,HIGH);
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , LOW);
  digitalWrite(rightBackward ,HIGH);
  Serial.println("else"); 
  }
  }

    void stop(){
 digitalWrite(rightForward , HIGH);
 digitalWrite(rightBackward ,HIGH);
 digitalWrite(leftForward ,HIGH);
 digitalWrite(leftBackward ,HIGH);
      }
       void leftWard(){
 digitalWrite(rightForward , LOW);
 digitalWrite(rightBackward ,HIGH);
 digitalWrite(leftForward ,LOW);
 digitalWrite(leftBackward ,HIGH);
      }
     
    
