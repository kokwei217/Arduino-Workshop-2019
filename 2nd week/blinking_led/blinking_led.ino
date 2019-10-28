//A different approach to blinking LED

int led = 8;
int led_state = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  digitalWrite(led, led_state);
  delay(500);
  //change the led_state to the opposite of its initial state 
  led_state = !led_state;

}
