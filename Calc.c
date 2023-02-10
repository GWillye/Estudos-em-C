#include <stdio.h>
int main(void)
{
	int num1, num2, resu, ope, rest ;
	printf("Ola, seja bem-vindo a Calculadora de Gabriel Willye!!! \n Insira um numero: \n");
	scanf("%i", &num1);
	printf("Insira outro numero: \n");
	scanf("%i", &num2);
	printf("Selecione a operacao matematica desejada: \n Digite 1 para Soma \n Digite 2 para Subtracao \n Digite 3 para Multiplicacao \n Digite 4 para Divisao \n");
	scanf("%i", &ope);
	if (ope == 1)
	{
		resu = num1 + num2;
		printf("O resultado desta conta eh %i. \n Obrigado, volte sempre!", resu );
	}
	if (ope == 2)
	{
		resu = num1 - num2;
		printf("O resultado desta conta eh %i. \n Obrigado, volte sempre!", resu );
	}
	if (ope == 3)
	{
		resu = num1 * num2;
		printf("O resultado desta conta eh %i. \n Obrigado, volte sempre!", resu );
	}
	if (ope == 4)
	{
		resu = num1 / num2;
		rest = num1 % num2;
		printf("O resultado desta conta eh %i, com  um resto de %i. \n Obrigado, volte sempre!", resu, rest );
	}
	return 0;
}

