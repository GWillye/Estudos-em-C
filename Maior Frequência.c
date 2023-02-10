//Escreva um programa que leia certa quantidade de números (n > 0), imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser lida pelo usuário. Você não pode usar vetor ou armazenar os números.

Entradas:

3 8 7 8

4 7 7 7 7

Respostas:

8 2

7 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, maior = -9999999999, var, rep = 1, menor;
    
    printf("Digite quantos numeros voce vai inserir: ");
    scanf("%d", &num);
    for(cont = 0; cont < num; cont++)
    {
        scanf("%d", &var);
        if (var >= maior)
        {
            menor = maior;
            maior = var;
            if (menor == maior)
            rep++;
        }
    }
    printf("O maior numero lido e %d e foi lido %d vezes", maior,rep);
}
/* Não está lendo negativo ssksksks */
