/*
  Blink-Drummer
  Designed for inclusive music sessions: 
  simple blink sensor with threshold determined by a dial.

  Sends a digital on/off to control a solenoid.
  Connect infrared sensor to A0, sensitivity dial to A1

  Sketch by Charles Matthews, concept by Conrad Popko
  with thanks to Milieux Education Makers, Ann-Louise Davidson, Bora Bodur.
*/

#define actuator 8; //set output pin

void setup() {
  pinMode(actuator, OUTPUT);
}

void loop() {
  //add code for time threshold/debounce here, but nice & simple for now
  digitalWrite(actuator, analogRead(A0) < analogRead(A1));
}
