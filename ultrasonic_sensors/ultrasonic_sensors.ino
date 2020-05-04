//Defiining corresponding pins for echo and trig
#define echoPin 7
#define trigPin 8

//Declaring variables 
long duration;
long distance; 


void setup() {
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  
}

void loop() {
  digitalWrite (trigPin, LOW); 
  delayMicroseconds(2); 

  digitalWrite (trigPin, HIGH); 
  delayMicroseconds(10); 

  digitalWrite (trigPin, LOW); 

  duration = pulseIn(echoPin, HIGH); 

  // In cm
  distance = duration/58.2; 

  Serial.println(distance); 

  delay(500);  
   

}
