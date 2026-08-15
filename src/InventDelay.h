/**
 * @file InventDelay.h
 * @brief Header file for InventDelay class to manage timing delays.
 * @author Leandro Bitencourt
 * @date June 2024
 */

#ifndef INVENT_DELAY_H
#define INVENT_DELAY_H

#include "Arduino.h"

class InventDelay {
private:
  uint32_t _delayTime = 0;
  uint32_t _startTime = 0;
  uint32_t _timeSinceLast = 0;
  bool _expired = false;

public:
  InventDelay(void);
  InventDelay(uint32_t);
  void setDelayTime(uint32_t);
  void reset(void);
  bool hasExpired(void);
  uint32_t getTimeSinceLast(void);
};

#endif
