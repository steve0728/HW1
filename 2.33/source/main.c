#include<stdio.h>
#include<stdlib.h>
int main()
{
	float b, a, c, d, e;
	float sum;
	printf("Input total miles driven per day: ");
	scanf_s("%f", &b);
	printf("Input cost per liter/gallon of gasonline: ");
	scanf_s("%f", &a);
	printf("Input average miles per liter/gallon: ");
	scanf_s("%f", &c);
	printf("Input parking fees per day: ");
	scanf_s("%f", &d);
	printf("Input tolls per day: ");
	scanf_s("%f", &e);
	
	sum = (b / c)*a + d + e;
	
	
	
	

	printf("The cost of driving to work today is %.2f dollars \n",sum);
	system("pause");
	return 0;
}