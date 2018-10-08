#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	int num;

	printf("Input an integer: \n");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is an even number.\n", num);
	}
	else 
	{ 
		printf("%d is an odd number.\n", num);	
	}
	system("pause");
	return 0;
}