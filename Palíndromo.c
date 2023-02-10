//Faça um programa que leia uma string e imprima "sim" se ela é um palíndromo ou "nao" caso contrário. Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, cont;
    char str1[100];
    char str2[100];
    gets(str1);
    for( i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[strlen(str1)-1-i];
    }
    int a = strcmp(str1, str2);
    (a == 0) ? printf("sim") : printf("nao");
    
    return 0;
}

