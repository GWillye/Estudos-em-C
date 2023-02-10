//Crie um programa que organiza um campeonato de futebol. Cada time é representado pelo nome, número de pontos obtidos (3 pontos por vitória e 1 ponto por empate), número de vitórias, empates e derrotas, gols marcados e gols sofridos. Crie uma estrutura (struct) que representa e armazena as informações de cada time. Em seguida, leia a quantidade de times e o nome cada um deles. Para isso, crie um vetor de structs com alocação dinâmica. Por fim, leia o número de jogos do campeonato e os resultados dos jogos que são compostos por dois nomes de time, número de gols do primeiro time e número de gols do segundo time. Como saída, imprima a tabela na ordem em que os times foram inseridos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING 35

typedef struct {
    char nome[MAX_STRING];
    int pontos, vit, emp, der, gmar, glev;
} times;

void imprime_time(times p)
{
    printf("%s,%d,%d,%d,%d,%d,%d \n", p.nome, p.pontos, p.vit, p.emp, p.der, p.gmar, p.glev);
}

void imprime(times *p, int alfa)
{
    int cont = 0;
    while (cont < alfa)
    {
        imprime_time(p[cont]);
        cont++;
    }
}

int main()
{
    times * p;
    int numtime;
    scanf("%d", &numtime);
    p = (times *) malloc(numtime * sizeof(times));
    
    for(int cont = 0; cont < numtime; cont++)
    {
        setbuf(stdin, NULL);
        fgets(p[cont].nome, MAX_STRING, stdin);
        p[cont].pontos = 0;
        p[cont].vit = 0;
        p[cont].emp = 0;
        p[cont].der = 0;
        p[cont].gmar = 0;
        p[cont].glev = 0;
    }
    int numjogos;
    setbuf(stdin, NULL);
    scanf("%d", &numjogos);
    for(int contador = 0; contador < numjogos; contador++)
    { 
        int gf1, gf2, gl1, gl2, cont, conta;
        char time1[MAX_STRING], time2[MAX_STRING];
        setbuf(stdin, NULL);
        fgets(time1, MAX_STRING, stdin);
        cont = 0;
        int val = strcmp(time1, p[cont].nome);
        while (val != 0)
        {
            cont++;
            val = strcmp(time1, p[cont].nome);
        }
        setbuf(stdin, NULL);
        fgets(time2, MAX_STRING, stdin);
        conta = 0;
        val = strcmp(time2, p[conta].nome);
        while (val != 0)
        {
            conta++;
            val = strcmp(time2, p[conta].nome);
        }
        scanf("%d", &gf1);
        scanf("%d", &gf2);
        gl1 = gf2;
        gl2 = gf1;
        p[cont].gmar = gf1 + p[cont].gmar;
        p[conta].gmar = gf2 + p[conta].gmar;
        p[cont].glev = gl1 + p[cont].glev;
        p[conta].glev = gl2 + p[conta].glev;
        if(gf1 > gf2)
        {
            p[cont].pontos = p[cont].pontos + 3;
            p[cont].vit++;
            p[conta].der++;
        }
        else if(gf1 < gf2)
        {
            p[conta].pontos = p[conta].pontos + 3;
            p[conta].vit++;
            p[cont].der++;
        }
        else
        {
            p[cont].pontos = p[cont].pontos + 1;
            p[conta].pontos = p[conta].pontos + 1;
            p[cont].emp++;
            p[conta].emp++;
        }
    }
    imprime(p, numtime);
    
    free(p);
    p = NULL;
    
    return 0;
}


