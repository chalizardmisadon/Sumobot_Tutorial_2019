#define pinPWM 9

int num;

void setup() {

  Serial.begin(9600); //Starts the serial communication

  //we do not need pinMode(pinPWM, OUTPUT); command since
  //analogWrite() function automatically set pin to output
  analogWrite(pinPWM, 127);
}

void loop() {
  // put your main code here, to run repeatedly:
  num = analogRead(A0);
  Serial.println(num);
}
