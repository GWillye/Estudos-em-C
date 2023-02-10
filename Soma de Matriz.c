//Faça um programa que leia uma matriz de tamanho 5 x 5. Os números inteiros serão lidos linha por linha. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5], cont, counter, soma;
    for(cont = 0; cont < 5; cont++)
    {
        for(counter = 0; counter < 5; counter++)
            scanf("%d", &mat[cont][counter]);
    }
    cont = 0;
    soma = mat[0][1];
    soma = soma + mat[0][2];
    soma = soma + mat[0][3];
    soma = soma + mat[0][4];
    soma = soma + mat[1][2];
    soma = soma + mat[1][3];
    soma = soma + mat[1][4];
    soma = soma + mat[2][3];
    soma = soma + mat[2][4];
    soma = soma + mat[3][4];
    printf("%d", soma);
    return 0;
}


