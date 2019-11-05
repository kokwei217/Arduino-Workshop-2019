int button = 7;
int led = 8;
int led_state = LOW;
int previous_btn_state = LOW;
int current_btn_state = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(led, led_state);
}

void loop() {
  current_btn_state = digitalRead(button);
  Serial.print(previous_btn_state);
  Serial.print("\t");
  Serial.println(current_btn_state);
  if (previous_btn_state == LOW && current_btn_state == HIGH) {
    led_state = !led_state;  // change the current state of the led to its opposite (HIGH to LOW/ LOW to HIGH)
    digitalWrite(led, led_state);
  }
  previous_btn_state = current_btn_state; 
  
  /****************************************************************************
   Assigned current_state to prev_state *AT THE END* of the loop,
   so that at the *BEGINNING* of next loop, when we update current state again,
   previous_btn_state is still not updated yet and we can have a comparison
   between the two states.
  *****************************************************************************/
}
