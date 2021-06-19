/*
 * motorControlHeader.h
 *
 * Created: 7/4/2016 7:43:53 PM
 *  Author: badge
 */ 


#ifndef MOTORCONTROLHEADER_H_
#define MOTORCONTROLHEADER_H_

#include "mainHeader.h"

void InitializeMotorControl(void);

void Stop(void);
void Forward(void);
void Backward(void);
void TurnRight(void);
void TurnLeft(void);


#endif /* MOTORCONTROLHEADER_H_ */