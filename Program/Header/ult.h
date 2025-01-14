#ifndef ULT_H
#define ULT_H

#include "includes.h"

#define ULTRASONIC_CONST	0.01724f

#define StartTmr()			TCCR0  	|= _BV(CS01)
#define StopTmr()			TCCR0  	&= ~_BV(CS01)


		float	MeasDist	(int8u disp);
static	void	tmr0init	(void);
static	void	calcdist	(void);
		void	ultinit		(void);
		
float	measdist	(void);
		
#endif