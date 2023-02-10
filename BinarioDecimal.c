//Conversor de Binário para Decimal
#include <stdio.h>
int main() 
{
	int bin, dec, pot2;
	printf("Digite um numero em binario: ");
	scanf("%d", &bin);
	dec = 0;
	pot2 = 1;
	for(;bin |= 0; bin = bin / 10 )
	{
	dec = dec + (bin % 10) * pot2;
	pot2 = pot2 * 2;
	}
	printf("%d", dec);
	return 0;
}
