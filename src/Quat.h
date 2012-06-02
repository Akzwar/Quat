#include "../../VectTest/src/Vect.h"

class Quat
{
 public:
	long double a;
	Vect V;

	Quat(){}

	Quat( Quat& Q )
	{
		this->a = Q.a;
		this->V = Q.V;
	}

	Quat( int _a, Vect& V )
	{
		this->a = _a;
		this->V = _V;
	}

	Quat& operator + ( Quat& Q )
	{
		return Quat( this->a + Q.a, this->V + Q.V );
	}

	Quat& operator * ( Quat& Q )
	{
		return Quat( (this->a * Q.a) - (this->V * Q.V), Q.V * this->a + this->V * Q.a + this->V % Q.V );
	}
			
};
