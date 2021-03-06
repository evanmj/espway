#pragma once

extern "C" {
#include "q16.h"
#include "pwm.h"
}

void motorInit(uint32_t period = 2500);
void setMotorSpeed(int channel, int dirPin, q16 speed);
void motorCommit();

