// Por Músico Nerd
// www.musiconerd.com

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val = 15;    // variable to read the value from the analog pin
int pos = 0;    // variable to store the servo position

void setup() {

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object


}

void loop() {

  int reading = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(reading, 0, 1023, 1000, 100);     // scale it to use it with the servo (value between 0 and 180)

  if (reading > 60) {
    myservo.write(45);              // tell servo to go to position in variable 'pos'
    delay(val);
    myservo.write(0);              // tell servo to go to position in variable 'pos'
    delay(100);
    Serial.println(reading);
  }


}
