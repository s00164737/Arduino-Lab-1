/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 10 Jan 2024
  by Mary Loftus
  modified 23 Jan 2024
  by Hubert Jabloniec

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
// the setup function runs once when you press reset or power the board
int LED_1=1;      //initialize variable for LED to correspond with Digital Port 1
int LED_2=2;      //initialise variable for LED to correspond with Digital Port 2


//Custom variables
const int DELAY_LENGTH = 500;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_1, OUTPUT);
  pinMode(LED_1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  blink_led1();
  blink_led2();
}

//Method for blinking
void blink_led2()
{
  digitalWrite(LED_2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(DELAY_LENGTH);                      // wait for a second
  digitalWrite(LED_2, LOW);   // turn the LED off by making the voltage LOW
  delay(DELAY_LENGTH);                      // wait for a second
}

void blink_led1()
{
  digitalWrite(LED_1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(DELAY_LENGTH);                      // wait for a second
  digitalWrite(LED_1, LOW);   // turn the LED off by making the voltage LOW
  delay(DELAY_LENGTH);                      // wait for a second
}

