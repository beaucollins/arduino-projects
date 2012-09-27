#include "Timer.h"

void Timer::start( long milliseconds )
{
  _last = -1;
  _milliseconds = milliseconds;
}

bool Timer::fire()
{
  long current = millis();
  if(_last == -1 || current - _last > _milliseconds )
  {
    _last = current;
    return true;
  } else {
    return false;
  }
}