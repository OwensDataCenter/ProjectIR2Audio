/*
  ProjectIR2Audio

  This is ProjectIR, Its a IR light logger, Use it for Weather, Science or just for fun!
  Made by Owen Hurst
  All code here is tested.
  This is a IR Light to Audio (Tone changes to IR Light intensity) Program.

  The 2021 IR Project
*/

const int tonePin = 11;

const int irPin = A0;

void setup() {
}

void loop() {
  
  int var = analogRead(irPin);
  
senseTone = constrain(var, 31, 1023);

tone(tonePin, senseTone):

}
