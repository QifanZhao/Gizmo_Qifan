#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define MIN_PULSE_WIDTH 1000
#define MAX_PULSE_WIDTH 2350
#define DEFAULT_PULSE_WIDTH 1500
#define FREQUENCY 50   // use pwm to drive the three servo motors

int inputPin = 2;      // connect Hall sensor to the Pin 2            
int val = 0;           // setup the initial status of hall sensor      
uint8_t servonum = 1;

void setup() 
{
pinMode(inputPin, INPUT);
Serial.begin(9600);
pwm.begin();
pwm.setPWMFreq(FREQUENCY);
}
int pulseWidth(int angle)
{
int pulse_wide, analog_value;
pulse_wide = map(angle, 0, 180, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH); // set the angle 
analog_value = int(float(pulse_wide) / 1000000 * FREQUENCY * 4096);
Serial.println(analog_value);
return analog_value;
}

void loop() {
  val = digitalRead(inputPin);   // use hall sensor to detect whether there is a phone
  if(val == HIGH) {               
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); //  status "swipe"

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); 
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); //  status "swipe"

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); //  status "swipe"

     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(500); //  status "double click" to like the post on the instagram

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(2000);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200); //  status "hesitation"

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); 

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); 

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); 

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); 

     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(30));
     delay(200);
     pwm.setPWM(0, 0, pulseWidth(0));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(45));
     delay(200);
     pwm.setPWM(4, 0, pulseWidth(0));
     delay(200); 

    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(30));
    delay(200);
    pwm.setPWM(4, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(4, 0, pulseWidth(45));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(30));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(4, 0, pulseWidth(45));
    delay(200);
    pwm.setPWM(4, 0, pulseWidth(0));
    delay(200); // status "keep swiping"
    
  } else {
    pwm.setPWM(0, 0, pulseWidth(18));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(15));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(12));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(9));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(6));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(3));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(3000);
    pwm.setPWM(0, 0, pulseWidth(5));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(5));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(5));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200); 
    pwm.setPWM(0, 0, pulseWidth(18));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(15));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(12));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(9));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(6));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(3));
    delay(300);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(3000);
    pwm.setPWM(0, 0, pulseWidth(5));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(5));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(5));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0));
    delay(200); // status "sleepy"
   
    pwm.setPWM(3, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(60));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(40));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0)); 
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(60));
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(0));
    delay(500);
    pwm.setPWM(3, 0, pulseWidth(60));
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(40));
    delay(200);
    pwm.setPWM(0, 0, pulseWidth(0)); 
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(60));
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(0));
    delay(200);
    pwm.setPWM(3, 0, pulseWidth(60));
    delay(500);//  status "look around"
        
  }
}
