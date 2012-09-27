#ifndef LED13_H
#define LED13_H

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif

class LED13 { 
public:
	LED13();
	~LED13();
    void on();
	void off();
	void blink(int time);
};

#endif