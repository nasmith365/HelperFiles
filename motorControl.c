/*
* motorControl.c
*
* Created: 7/4/2016 7:43:20 PM
*  Author: badge
*/

#include "motorControlHeader.h"

//Initializes everything that is needed for motorcontrol
void InitializeMotorControl(void)
{
	//initialize port D as an output
	DDRD = 0xFF;
	
	//Motor1 (Positive) - PIND1
	//Motor1 (Negative) - PIND3
	
	//Motor2 (Positive) - PIND2
	//Motor2 (Negative) - PIND4
	
	//Start off with neither motor moving
	PORTD = 0x00;
}

void Stop(void)
{
	//Motor1
	PORTD = (0<<PIND1)|(0<<PIND3);
	
	//Motor 2
	PORTD |= (0<<PIND2)|(0<<PIND4);
}

//Holds the code to move the robot forward
void Forward(void)
{
	//Motor1
	PORTD = (1<<PIND1)|(0<<PIND3);
	
	//Motor 2
	PORTD |= (1<<PIND2)|(0<<PIND4);
}

//holds the code to move the robot backwards
void Backward(void)
{
	//Motor1
	PORTD = (0<<PIND1)|(1<<PIND3);
	
	//Motor 2
	PORTD |= (0<<PIND2)|(1<<PIND4);
}

//Holds the code to turn the robot left
void TurnLeft(void)
{
	//Motor1
	PORTD = (0<PIND1)|(1<<PIND3);
	
	//Motor 2
	PORTD |= (1<<PIND2)|(0<<PIND4);
}

//Holds the code to turn the robot right
void TurnRight(void)
{
	//Motor1
	PORTD = (1<<PIND1)|(0<<PIND3);
	
	//Motor 2
	PORTD |= (0<<PIND2)|(1<<PIND4);

}
