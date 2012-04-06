/*
  EL_Escudo.h - EL Escudo library
  Written by Ryan Owens for SparkFun Electronics

  This library is released under the 'Beer Me' license, so use it however you
  with. Just buy me a beer if we ever meet!
*/

#ifndef EL_Escudo_h
#define EL_Escudo_h

#include <inttypes.h>

#define EL_A  2
#define EL_B  3
#define EL_C  4
#define EL_D  5
#define EL_E  6
#define EL_F  7
#define EL_G  8
#define EL_H  9
#define STATUS  10
#define pulse_width  10

class EL_EscudoClass
{
  public:
    void on(char);
    void off(char);
	void all_on(void);
	void all_off(void);
	void fade_in(char);
	void fade_out(char);
	void pulse(char);
};

extern EL_EscudoClass EL;

#endif

