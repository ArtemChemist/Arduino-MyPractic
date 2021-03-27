#define LED_PIN 13
#define BUTTON_PIN 12

boolean but_state;
boolean prev_state;
boolean led_state;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  but_state = digitalRead(BUTTON_PIN);
  
  if(    (but_state == HIGH)   &&   (prev_state == LOW)  ){
    led_state = !led_state;
    digitalWrite(LED_PIN,led_state);
  }
  
  prev_state = but_state;
  
  
}
  
