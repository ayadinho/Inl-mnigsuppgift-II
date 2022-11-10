#include <stdio.h>
/********************************************************************************
* double*: pekaren till flyttalet z
*            
********************************************************************************/
void substract(double x, double y, double* z)
{
	*z = x - y;
	return;
}

/********************************************************************************
* main: testar beräknigarna som vi har angivit
* &c: detta är addresen av c, så den ger addresen där pekaren är på
********************************************************************************/
int main()
{
	double a = 3.4;
	double b = 6.8;
	double c;

	substract(a, b, &c);
	printf("%lg - %lg = %lg\n", a, b, c);
}