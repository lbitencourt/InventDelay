/**
 * @file InventDelay.h
 * @brief Header file for IDelay interface and InventDelay class to manage timing delays.
 * @author Leandro Bitencourt
 * @date June 2024
 */

#ifndef INVENT_DELAY_H
#define INVENT_DELAY_H

#include "Arduino.h"

class IDelay {
public:
  virtual ~IDelay() = default;
  virtual void setDelayTime(uint32_t) = 0;
  virtual void reset(void) = 0;
  virtual bool hasExpired(void) = 0;
  virtual uint32_t getTimeSinceLast(void) = 0;
};

class InventDelay : public IDelay {
private:
  uint32_t _delayTime = 0;
  uint32_t _startTime = 0;
  uint32_t _timeSinceLast = 0;
  bool _expired = false;

public:
  InventDelay(void);
  InventDelay(uint32_t);
  void setDelayTime(uint32_t) override;
  void reset(void) override;
  bool hasExpired(void) override;
  uint32_t getTimeSinceLast(void) override;
};

#endif
