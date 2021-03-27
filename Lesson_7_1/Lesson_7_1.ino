class Button {
  public:
   boolean click_happened = false;
   boolean but_pressed = false;
   void scanState();
   void setWait(byte wait);
   void setPin(byte pin);
  
  private:
   byte counter = 0;
   byte _pin=12;
   byte _wait=10;
};

Button but1;
Button but2;
#define LED_PIN 13
boolean led_state = false;

void setup() {

  but1.setPin(12); but2.setPin(11);
  but1.setWait(10); but2.setWait(10);

  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  //Reading buttons
  but1.scanState();
  but2.scanState();

  // Driving LED
  if (but1.click_happened){
    but1.click_happened = false;
    led_state = !led_state;
    digitalWrite(LED_PIN, led_state);
    }
  
  if (but2.click_happened){
    but2.click_happened = false;
    led_state = !led_state;
    digitalWrite(LED_PIN, led_state);
    }

    delay(2);

    }

void Button:: scanState(){
  
  if (but_pressed == !digitalRead(_pin)) {
    counter = 0;
  }
  else counter ++;

  if (counter > _wait){
    but_pressed = !but_pressed;
    click_happened = but_pressed;
    counter = 0;
  }  
}

void Button:: setPin(byte pin){
   _pin = pin;
   pinMode(pin, INPUT_PULLUP);
}

void Button:: setWait(byte wait){
   _wait = wait;
}
