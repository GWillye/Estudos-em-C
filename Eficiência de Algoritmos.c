/* Dado um inteiro x e um vetor ordenado v de N inteiros distintos, projete um algoritmo com o melhor tempo possível no pior caso para encontrar, se existirem, os índices i e j tal que (v[i] + v[j]) == x. Apresente o tempo de execução do seu algoritmo para a operação mais importante em um comentário na linha do código. A entrada consiste em um inteiro indicando a quantidade de elementos N do vetor, os N números e por fim o inteiro x. A saída deve ser os índices i e j se existir caso contrário -1 e -1 conforme exemplo abaixo:

Exemplo 1:

input = 6 2 3 5 6 11 12 9

output = 1 3



Exemplo 2:

input = 6 2 3 5 6 11 12 100

output = -1 -1 */

#include <stdio.h>
int main()
{
    int vet[100], num, x;
    scanf("%d", &num);
    for(int cont = 0; cont < num; cont++)
        scanf("%d", &vet[cont]);
    scanf("%d", &x);
    if (num == 2)
    {
        if (vet[0] + vet[1] == x)
        printf("%d %d", vet[0], vet[1]);
        else
        printf("-1 -1");
    }
    else
    {
        int dir, esq;
        dir = num - 1;
        esq = 0;
        while(dir > esq)
        {
                if (vet[dir] + vet[esq] == x)
                // Custo t(n) = n
                {
                    printf("%d %d", esq, dir);
                    break;
                }
                else if(vet[dir] + vet[esq] > x)
                //Custo t(n) = n
                    dir--;
                else
                    esq++;
        }
        if (dir < esq)
            printf("-1 -1");
    }
    return 0;
}
