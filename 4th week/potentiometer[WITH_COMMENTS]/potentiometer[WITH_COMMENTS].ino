int pt = A0; //declaring A0 as the analogue input pin. Check this pin in the arduino and make sure you connect the output of the potentiometer and the LDR to this pin
int potentvalue; //Variable to store the potentiometer value
 
void setup() {
  // put your setup code here, to run once:
  pinMode(pt, INPUT); //Declaration of the pin roles
  Serial.begin(9600); //Initialising the serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  potentvalue = analogRead(pt);  //Reading the input in the analog pins
  Serial.println(potentvalue); //Printing values
}

//This in theory should work for LDR as well as the two work in the same way when it comes to arduino. All you need to do is make the new connections
