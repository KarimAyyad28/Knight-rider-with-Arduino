#include <SPI.h>
void setup() {

  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A0, INPUT);

}


void loop() {
  // connecting a potentiometer as an input on analog pin A0
  int time = analogRead(A0);
  Serial.print (time);
  // loop from the lowest pin to the highest:
  for (int pin = 2; pin <= 6; pin++)
  { digitalWrite(pin, HIGH);
    time = analogRead(A0);
    delay(time);
    digitalWrite(pin, LOW);
  }
  
  // loop from the highest pin to the lowest:
  for (int pin = 6; pin >= 2; pin--)
  { digitalWrite(pin, HIGH);
    time = analogRead(A0);
    delay(time);
    digitalWrite(pin, LOW);
  }
}
