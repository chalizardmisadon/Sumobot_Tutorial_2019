int num;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Starts the serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  num = analogRead(A0);
  Serial.println(num);
}
