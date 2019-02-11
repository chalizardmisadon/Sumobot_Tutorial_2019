#define trigPin 12
#define echoPin 13

long duration;
int distance, num;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT); //Sets the trigPin as an output
  pinMode(echoPin, INPUT); //Sets the echoPin as an input
  Serial.begin(9600); //Starts the serial communication
}

int getUltrasonicDistance(){
  //Clear the trig pin for 2ms
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  //Sets the trigPin on HIGH state for 10ms
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //Reads the echoPin, returns the soundwave travel time in ms
  duration = pulseIn(echoPin, HIGH); //detect when echoPin is HIGH
  //Calculate the distance
  distance = duration * 0.034/2; //distance in cm
  return distance;
}

void loop() {
  // put your main code here, to run repeatedly:
  //Call getUltrasonicDistance() function
  num = getUltrasonicDistance();
  //Prints num on the Serial Monitor
  Serial.print("Distance (cm): ");
  Serial.println(num);
}
