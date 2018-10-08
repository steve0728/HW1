#include<stdio.h>
#include<stdlib.h>
int main(void)
//Display the following pyramid pattern with five printf statements
{
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");
// display the same pattern using a single printf statement.
	
	int a = 4, b = 4;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (j <= a&& j >= b)printf("*");
			else printf(" ");

		}
		printf("\n");
		a=a+1; b=b-1;
	}

	system("pause");
	return 0;

}