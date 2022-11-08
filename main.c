#include <stdio.h>
int main()
{   /* H�r skapade jag en array som heter data och vilka tal det finns i den*/

	double data[] = { 7,0.5,2,0.3,0.1,0.0,-10,528.2,8.0,7.2,2.3,1100,222 };
	double number = 0;

	/* kollar hur stor arrayen ska bli*/
	int length = sizeof(data) / sizeof(data[0]);

	/* Hur arrayen ser ut fr�n b�rjan*/
	printf("Array Osorterad\n");
	for (int i = 0; i < length; i++)
	{
		printf("%lg", data[i]);
	}

	/* Sorterar arrayen h�r s� att det blir fr�n minsta talet f�rst*/

	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{

			if (data[i] > data[j])
			{
				number  = data[i];
				data[i] = data[j];
				data[j] = number;
			}
		}
	}


	/* Hur arrayen ser ut n�r den blir sorterad*/
	printf("\nArray sorterad\n");
	
	for (int i = 0; i < length; i++)
	{
		printf("%lg ", data[i]);
	}

	return 0;

}