#include <stdio.h>

void electrical_set(double* voltage, double* current, double* resistance)
{
	*voltage = 3.4;
	*current = 6.8;
	*resistance = *voltage / *current;
}


/*******************************************************************************
* electrical_print: skriver ut till oss v�ran str�m, sp�nning och �ven resistansen genoma att dividera sp�nningen med str�mmen
*******************************************************************************/
void electrical_print(double *voltage, double *current, double *resistance)
{
	printf("---------------------------------------------------------\n");
	printf("Voltage: %lg V\n", *voltage);
	printf("Current: %lg mA\n",*current);
	printf("Resistance: %lg kOhm\n", *resistance);
	printf("---------------------------------------------------------\n");
}

/*******************************************************************************
* main: H�r s� kommer v�ra v�rden in fr�n electrical_print och electrical_set funktionen samt aktiverar v�ran funktion
*******************************************************************************/

int main()
{
	double voltage;
	double current;
	double resistance;
    
	electrical_set(&voltage, &current, &resistance);
	electrical_print(&voltage, &current, &resistance);
}