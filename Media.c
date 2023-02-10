#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float met, dec, cent, mil;
	
	printf("Digite uma medida em metros: \n");
	scanf ("%f", &met);
	dec = met / 10;
	cent = met / 100;
	mil = met / 1000;
	printf("Esta quantia de metros eh igual a: \n Decimetros: %f \n Centimetros %f \n Milimetros %f \n", dec, cent, mil);
	return 0;
}
