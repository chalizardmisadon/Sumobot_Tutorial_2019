#define trigPin 12
#define echoPin 13

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT); //Sets the trigPin as an output
  pinMode(echoPin, INPUT); //Sets the echoPin as an input
  Serial.begin(9600); //Starts the serial communication
}

int getUltrasonicDistance(){
  Serial.println("getUltrasonicDistance() is called");
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
  
  //Prints the distance on the Serial Monitor
  int num = getUltrasonicDistance();
  Serial.print("Distance (cm): ");
  Serial.println(distance);
}
