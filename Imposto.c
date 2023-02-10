#include <stdio.h>
#include <stdlib.h>

int main()
{
char est;
int valor, cont = 0, total;

while (cont < 4)
{
printf("Digite um valor:");
scanf("%d", &valor);
printf("Digite o estado:");
scanf("%c", &est);

switch( est )
{
case 'M': total = valor/100*7+valor; printf("O preco final com imposto eh %d \n", total); break;
case 'S': total = valor/100*12+valor; printf("O preco final com imposto eh %d \n", total); break;
case 'R': total = valor/100*15+valor; printf("O preco final com imposto eh %d \n", total); break;
case 'P': total = valor/100*8+valor; printf("O preco final com imposto eh %d \n", total); break;
default: printf("Estado nao encontrado \n");
}
cont++;
}

return 0;
} 
