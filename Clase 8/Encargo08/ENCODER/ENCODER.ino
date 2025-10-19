#include <RotaryEncoder.h>

#define ARDUINO_AVR_UNO

int valorAEnviar = 0;

#if defined(ARDUINO_AVR_UNO) || defined(ARDUINO_AVR_NANO_EVERY)
// Example for Arduino UNO with input signals on pin 2 and 3
#define PIN_IN1 2
#define PIN_IN2 3

#elif defined(ESP8266)
// Example for ESP8266 NodeMCU with input signals on pin D5 and D6
#define PIN_IN1 D5
#define PIN_IN2 D6

#endif

RotaryEncoder encoder(PIN_IN1, PIN_IN2, RotaryEncoder::LatchMode::TWO03);

void setup() {
  Serial.begin(9600);
  while(! Serial);
  Serial.println("SimplePollRotator example for the RotaryEncoder library.");
}

void loop() {

  static int pos = 0;
  encoder.tick();

  int newPos = encoder.getPosition();
   if (pos != newPos) {
    pos = newPos;
   } //if
   
  valorAEnviar =newPos;
  
  Serial.println(valorAEnviar);
  
} //loop
