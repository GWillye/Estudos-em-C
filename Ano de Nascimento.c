//Faça um programa em C que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. A idade e ano atual devem ser lidos do teclado. Você pode assumir que a pessoa já fez aniversário no ano atual.

#include <stdio.h>

int main()
{
int var_ano_nasc, var_ano_atual, var_idade;

printf("\nInsira a sua idade: ");
scanf("%i", &var_idade);
printf("Insira em que ano voce esta: ");
scanf("%i", &var_ano_atual);

var_ano_nasc = var_ano_atual - var_idade;

printf("\nVoce nasceu no ano %i", var_ano_nasc);

return 0;
}
