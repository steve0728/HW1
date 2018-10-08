#include<stdio.h>
#include<stdlib.h>

int main()

{
	int a, b, c;
	
	printf("number\tsquare\tcube\n");
	
	for (a = 0; a <=10; a++){
		b = a*a;
		c = a*b;
		printf("%d\t", a);
		printf("%d\t",b);
		printf("%d\t", c);
		printf("\n");
	
	}

	
	
	







	system("pause");
	return 0;


}