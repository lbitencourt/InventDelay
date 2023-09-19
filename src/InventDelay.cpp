#include "InventDelay.h"

InventDelay::InventDelay()
{
}
InventDelay::InventDelay(unsigned long delayTime)
{
  this->setDelayTime(delayTime);
}

void InventDelay::setDelayTime(unsigned long delayTime)
{
  this->_delayTime = delayTime;
}
void InventDelay::reset(void)
{
  this->_startTime = millis();
}
unsigned long InventDelay::getTimeSinceLast(void)
{
  return _timeSinceLast;
}

bool InventDelay::expired(void)
{
  _timeSinceLast = (millis() - this->_startTime);
  if (_timeSinceLast >= this->_delayTime)
  {
    this->reset();
    return true;
  }
  return false;
}
