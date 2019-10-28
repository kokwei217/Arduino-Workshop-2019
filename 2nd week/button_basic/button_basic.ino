//Simple program to check if a button is working correctly

int button = 7;
int button_state;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop() {
  button_state = digitalRead(button);
  Serial.println(button_state);
}
