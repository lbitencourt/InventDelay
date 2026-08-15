/**
  * @file InventDelay.cpp
  * @brief Implementation of InventDelay class to manage timing delays.
  * @author Leandro Bitencourt
  * @date June 2024  
 */

#include <Arduino.h>

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
  this->_expired = false;
}
uint32_t InventDelay::getTimeSinceLast(void) {
  return (millis() - this->_startTime);
}

bool InventDelay::hasExpired(void) {
  if (_expired) {
    return true;
  }
  if ((millis() - this->_startTime) >= this->_delayTime) {
    this->_expired = true;
    return true;
  }
  return false;
}
