#include "Quat.h"
#include <stdio.h>
#include <math.h>
int main ( int argc, char** argv)
{
	Quat Q1( cos(M_PI/4), Vect( 0, 0, sin(M_PI/4) ) );
	Quat Q2( cos(M_PI/4), Vect( 0, 0, -sin(M_PI/4)) );
	Quat V( 0, Vect( 1, 1, 0 ) );
	Quat res = Q1 * V * Q2;
	res.V.print();
	
	return 0;
}
