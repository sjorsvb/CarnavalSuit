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

digitalWrite(10,HIGH);
}
void loop()
{
  EL.off(pin);
pin++;
if(pin > 4) pin = 0;
//digitalWrite(pin, HIGH);
//digitalWrite(3, HIGH);
EL.fade_in(pin);


}
