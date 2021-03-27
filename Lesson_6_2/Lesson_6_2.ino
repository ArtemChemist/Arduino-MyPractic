#define LED_PIN 13
#define BUTTON_PIN 12
#define WAIT

boolean but_pressed = false;
boolean click_happened = false;
byte Counter = 0;
boolean lead_state = false;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
//Reading button
  
  if (but_pressed == !digitalRead(BUTTON_PIN)){
    Counter = 0;
  }
  else Counter ++;
  
  if (Counter >= WAIT){
    but_pressed = !but_pressed;
    click_happened = true;
  }


// Driving LED
  if (click_happened){
    click_happened = false;
    lead_state = !lead_state;
    digitalWrite(LED_PIN, lead_state)
  }
  
  delay(2)
  
}
  
