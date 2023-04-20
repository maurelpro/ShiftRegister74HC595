#include <ShiftRegister74HC595.h>

/*
    
    Exemple with const REG_?_PIN_?

*/



// create a global shift register object
// parameters: <number of shift registers> (data pin, clock pin, latch pin)
ShiftRegister74HC595<1> sr(0, 1, 2);


// Leds
const char LED_1 = REG_1_PIN_0 ;
const char LED_2 = REG_2_PIN_0 ;

// CMD
const char CMD_1 = REG_1_PIN_1 ;
const char CMD_2 = REG_2_PIN_1 ;

void setup()
{
    sr.setAllLow(); // set all pins LOW

}

void loop()
{
    // with const variable

    sr.set(CMD_1, HIGH);
    sr.set(LED_1, HIGH);
    delay(1000);

    sr.set(CMD_2, HIGH);
    sr.set(LED_2, HIGH);
    delay(1000);


    sr.set(CMD_1, LOW);
    sr.set(LED_1, LOW);
    delay(1000);

    sr.set(CMD_2, LOW);
    sr.set(LED_2, LOW);
    delay(1000);


    // With directly name REG_?_PIN_?
    sr.set(REG_2_PIN_3, HIGH);
    delay(1000);
    sr.set(REG_2_PIN_3, LOW);
    delay(1000);


    sr.setAllLow(); // set all pins LOW


}