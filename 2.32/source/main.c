#include<stdio.h>
#include<stdlib.h>

int main()
{
	float w, h, bmi,a;
	printf("Input your height(The unit is centimeters): ");
	scanf_s("%f", &h);
	printf("Input your weight(The unit is kilograms): ");
	scanf_s("%f", &w);
	
	
	a = h / 100;
	bmi = w / (a*a);
	printf("%.2f\n", bmi);
	if (bmi < 18.5)
		printf("Underweight\n");
	if (bmi >= 18.5 && bmi <= 24.9) 
		printf("Normal\n");
	if (bmi>25 && bmi<=29.9)
		printf("Overweight\n");
	if (bmi > 30)
		printf("Obese\n");
	

	system("pause");
	return 0;










}