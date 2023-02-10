#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("Insira tres numeros diferentes: \n");
	scanf("%i %i %i", &num1, &num2, &num3);
	if (num1 > num2 )
	{
		if (num1 > num3)
		{
			if (num2 > num3)
				{
				printf("A sequencia, do menor para o maior, eh %i, %i, %i", num3, num2, num1);
				}
			if (num3 > num2)
				{
				printf("A sequencia, do menor para o maior, eh %i, %i, %i", num2, num3, num1);
				}
		}
		if (num3 > num1) 
		{
				printf("A sequencia, do menor para o maior, eh %i, %i, %i", num2, num1, num3);
		}
	}
	if (num2 > num1)
	{
		if (num2 > num3)
		{
			if (num1 > num3)
			{
				printf("A sequencia, do menor para o maior, eh %i, %i, %i", num3, num1, num2);
			}
			if (num3 > num1)
			{
				printf("A sequencia, do menor para o maior, eh %i, %i, %i", num1, num3, num2);
			}
		}
		if (num3 > num2)
		{
				printf("A sequencia, do menor para o maior, eh %i, %i, %i", num1, num2, num3);
		}
	}
	return 0;
}
