#define pinLED 13
int dutyCycle, increment;

void setup() {
  dutyCycle = 0;
  increment = 1;
  Serial.begin(9600); //Starts the serial communication
}

void loop() {
  //set dutyCycle for LED
  dutyCycle += increment;
  analogWrite(pinLED, dutyCycle);

  //decrease dutyCycle when reach 255
  if (dutyCycle >= 255){
    increment = -1;
  }
  //increase dutyCycle when reach 0
  if (dutyCycle <= 0){
    increment = 1;
  }
  Serial.println(dutyCycle); //print out brightness
  //Serial.println(analogRead(A0)); //print out analog
}

/*
//below is the code for LED with set brightness
#define pinLED 13

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  //set dutyCycle for LED
  analogWrite(pinLED, 255); //full brightness
  delay(1);
  analogWrite(pinLED, 127); //half brightness
  delay(1);
  analogWrite(pinLED, 63); //one-quarter brightness
  delay(1);
}
*/
