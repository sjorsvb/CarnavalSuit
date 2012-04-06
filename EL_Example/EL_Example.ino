#include "EL_Escudo.h"

char pin = 1;
void setup()
{
byte pinNumber;
// Set pins 0,1,2,4,5,6,7,8,9,10,11,12 as outputs
for (pinNumber = 2; pinNumber < 11; pinNumber ++)
{
  pinMode(pinNumber, OUTPUT);  
}
//Show that the shield is connected
digitalWrite(STATUS,HIGH);
}
void loop()
{
  EL.off(pin);
pin++;
if(pin > EL_C) pin = EL_A;
//digitalWrite(pin, HIGH);
//digitalWrite(3, HIGH);
EL.pulse(pin);

delay(1000);
}
