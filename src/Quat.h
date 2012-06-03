#include "../../VectTest/src/Vect.h"

class Quat
{
 public:
	long double a;
	Vect V;

	Quat(){}

	Quat( const Quat& Q )
	{
		this->a = Q.a;
		this->V = Q.V;
	}

	Quat( long double _a, const Vect& _V )
	{
		this->a = _a;
		this->V = _V;
	}

	Quat operator + ( const Quat& Q )
	{
		Quat retQuat( this->a + Q.a, this->V + Q.V );
		return retQuat;
	}

	Quat operator * ( const Quat& Q )
	{
		Quat retQuat( (this->a * Q.a) - (this->V * Q.V), /*( Q.V * this->a ) +*/ ( this->V * Q.a ) + ( this->V % Q.V ) );
		return retQuat;
	}
			
};
