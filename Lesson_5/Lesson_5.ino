//Светодиод по внешней кнопке
//Диод и резистор на плате, кнопка аппрвтная

boolean buttonState;

void setup() {
pinMode(13, OUTPUT);//Use the built-in LED 
pinMode(12,INPUT_PULLUP);// The button is hooked up to pin12, use internal resistor, connects to GND

}

void loop() {
buttonState = digitalRead(12);//Read the pin
buttonState = !buttonState;
digitalWrite(13, buttonState); //Invert the signal, becasue it is conected to GND
  
}
