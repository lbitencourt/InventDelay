/**
  * @file InventDelay.cpp
  * @brief Implementation of InventDelay class to manage timing delays.
  * @author Leandro Bitencourt
  * @date June 2024  
 */

#include "InventDelay.h"

InventDelay::InventDelay() {
}
InventDelay::InventDelay(uint32_t delayTime) {
  this->setDelayTime(delayTime);
}

void InventDelay::setDelayTime(uint32_t delayTime) {
  this->_delayTime = delayTime;
}
void InventDelay::reset(void) {
  this->_startTime = millis();
}
uint32_t InventDelay::getTimeSinceLast(void) {
  return _timeSinceLast;
}

bool InventDelay::hasExpired(void) {
  _timeSinceLast = (millis() - this->_startTime);
  if (_timeSinceLast >= this->_delayTime) {
    this->reset();
    return true;
  }
  return false;
}
