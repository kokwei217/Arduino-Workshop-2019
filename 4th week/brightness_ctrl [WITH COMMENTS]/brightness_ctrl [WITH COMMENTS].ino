//
int pt = A0; //declaring A0 as the analogue input pin. Check this pin in the arduino and make sure you connect the output of the potentiometer and the LDR to this pin
int potentvalue; //Variable to store the potentiometer value

int ledvalue; //normal LED brightness value
int led = 9; //declare 9 as the output pin to power the LED and that it is chosen because it is a PWM pin

void setup() 
{
  pinMode(pt, INPUT); //Declaration of the pin roles
  pinMode(led, OUTPUT); //Declaration of the pin roles
  Serial.begin(9600); //Initialising the serial monitor
}

void loop() 
{
  potentvalue = analogRead(pt); //Reading the input in the analog pins
  ledvalue = map(potentvalue, 0, 1023, 0, 255); //mapping function
  analogWrite(led, ledvalue); //Writing PWM value onto the LED to control the brightness
  Serial.print(ledvalue); //Printing values
  Serial.print("\t"); //tab
  Serial.println(potentvalue); //Printing values
}
