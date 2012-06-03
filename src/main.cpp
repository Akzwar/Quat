#include "Quat.h"
#include <stdio.h>

int main ( int argc, char** argv)
{
	Quat Q1( 10, Vect( 10, 10, 10 ) );
	Quat Q2( 20, Vect( 15, 15, 15 ) );
	Quat Q3 = Q1 + Q2;
	return 0;
}
