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
* main: testar ber�knigarna som vi har angivit
* &c: detta �r addresen av c, s� den ger addresen d�r pekaren �r p�
********************************************************************************/
int main()
{
	double a = 3.4;
	double b = 6.8;
	double c;

	substract(a, b, &c);
	printf("%lg - %lg = %lg\n", a, b, c);
}