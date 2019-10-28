//Control LED on a different circuit by using the button state

int button = 7;
int button_state;
int led = 8;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  button_state = digitalRead(button);
  Serial.println(button_state);
  digitalWrite(led, button_state);
}
