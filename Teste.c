#include <stdio.h>
int main(void)
{
	int num1, num2, men;
	
	printf("Por favor, insira o primeiro numero: \n");
	scanf("%i", &num1);
	if (num1 < 0) 
	{
		printf("Por favor, digite apenas numeros inteiros positivos. \n");
	}
	if (num1 > 0)
	{
		printf("Por favor, insira agora o segundo numero: \n");
		scanf("%i", &num2);
		if (num2 < 0)
		{
				printf("Por favor, digite apenas numeros inteiros positivos. \n");
		}
		if (num2 > 0) 
		{
			men = num1 + num2 - num1 % num2;
			printf("O menor numero inteiro maior que %i e multiplo de %i eh: %i", num1, num2, men);
		}
	}
	return 0;
}
