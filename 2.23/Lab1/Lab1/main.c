#include <stdio.h>
#include<stdlib.h>
int main(void){
	int num1, num2, num3, min, max;
	printf("Input three integer numbers: ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	max = num1;
	if (num2 > max){
		max = num2;
	}
	if (num3 > max){
		max = num3;
	}
	printf("The biggest is %d\n", max);

	min = num1;
	if (num2 < min){
		min = num2;
	}
	if (num3 < min){
		min = num3;
	}
	printf("The smallest is %d\n", min);

	system("pause");
	return 0;
}