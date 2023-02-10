//Escreve uma função que recebe três inteiros a, b, c e realize a troca entre eles. A sua função deve receber a, b, c por referência para que os valores na função main estejam alterados. A impressão dos valores a, b, c deve ser feita main. A troca deve seguir a seguinte ordem: b = a, c = b, a = c.

// sua funcao troca

/*int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // seu codigo 

   printf("%d %d %d", a, b, c);

    return 0;

} */

#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b, int *c)
{
    int x;
    x = *b;
    *b = *a;
    *a = *c;
    *c = x;

}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    troca(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
