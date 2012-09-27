/*

*/
#ifndef Timer_h
#define Timer_h

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class Timer
{
  public:
    void start( long milliseconds );
    bool fire();
  private:
    long _milliseconds;
    long _last;
};

#endif
