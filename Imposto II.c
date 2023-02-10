#include <stdio.h>
#include <stdlib.h>

int main()
{
char est;
int valor, cont = 0;

while (cont < 4)
{
printf("Digite um valor");
scanf("%d", &valor);

switch( est )
{
case 'MG': total = valor/100*7+valor; printf("O preco final com imposto eh %d \n", total); break;
case 'SP': total = valor/100*12+valor; printf("O preco final com imposto eh %d \n", total); break;
case 'RJ': total = valor/100*15+valor; printf("O preco final com imposto eh %d \n", total); break;
case 'PR': total = valor/100*8+valor; printf("O preco final com imposto eh %d \n", total); break;
default: printf("Estado nao encontrado \n");
}
cont++;
}

return 0;
} 
