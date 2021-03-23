//Светодиод по внешней кнопке
//Диод и резистор на плате, кнопка аппрвтная

boolean buttonState;

#define LED_PIN 13
#define BUTTON_PIN 12

void setup() {
pinMode(LED_PIN, OUTPUT);//Use the built-in LED 
pinMode(BUTTON_PIN,INPUT_PULLUP);// The button is hooked up to pin12, use internal resistor, connects to GND

}

void loop() {

digitalWrite(LED_PIN, ! digitalRead(BUTTON_PIN)); //Invert the signal, becasue it is conected to GND
  
}
