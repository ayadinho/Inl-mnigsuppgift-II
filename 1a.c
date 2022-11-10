#include <stdio.h>

/********************************************************************************
* double: Den gör så att du kan använda flyttal.
*calculate: Beräknar summan, differensen, produkten eller kvoten av tal.
* 
* 
********************************************************************************/

double subtract(double a, double b)  
{
	return a - b; 
}
/********************************************************************************
* main: Testar subtraktion av de flyttal vi har skrivit in 
*       3.4 och 6.8. 
* printf: skriver ut beräkningen och svaret.
********************************************************************************/


int main()
{
	double a = 3.4;
	double b = 6.8;
	
    double c = subtract(a, b);

	printf("%lg - %lg = %lg\n",a,b, c);

	return 0;
}