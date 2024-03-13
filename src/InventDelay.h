/*
 */

#ifndef INVENT_DELAY_H
#define INVENT_DELAY_H
#include <Arduino.h>

static const int DELAY_TIME = 0x1F4;
static const int START_TIME = 0x000;

class InventDelay {
 private:
  unsigned long  _delayTime;
  unsigned long  _startTime;
  unsigned long  _timeSinceLast;

 public:
  InventDelay(void);
  InventDelay(unsigned long );
  void setDelayTime(unsigned long );
  void reset(void);
  bool expired(void);
  unsigned long  getTimeSinceLast(void);
};

#endif
