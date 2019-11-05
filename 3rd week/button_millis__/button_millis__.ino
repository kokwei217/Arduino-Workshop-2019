//millis function - to return the time since we run this arduino sketch
//Open your serial monitor and long press the button to see the outcome


//unsigned long is another data type like int,char,byte etc... However, it can store a larger number than int
unsigned long current_time;
unsigned long press_time;
unsigned long release_time;
unsigned long time_difference;

int button = 7;
int previous_btn_state = LOW;
int current_btn_state = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop() {
  current_time = millis();
  current_btn_state = digitalRead(button);
  if (previous_btn_state == LOW && current_btn_state == HIGH) {
    //record the time when I pressed the button
    press_time = current_time;
    Serial.print(press_time);
    Serial.print("\t"); //print a tab space (4 spaces)
  }
  else if (previous_btn_state == HIGH && current_btn_state == LOW) {
    //Record the time when I released the button, and find how long I have been holding on to the button
    release_time = current_time;
    time_difference = release_time - press_time;
    Serial.println(release_time);
    Serial.print("Total time of holding on to button is ");
    Serial.println(time_difference);
  }

  previous_btn_state = current_btn_state;
}
