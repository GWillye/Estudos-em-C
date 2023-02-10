#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, cont, vetor[100];
    double media = 0, desvio_padrao = 0;
    
    scanf("%d", &n);
    if (n > 100) 
    printf("Quantidade excedida");
    
    for(cont = 0; cont < n ;cont++)
    {
        scanf("%i", &vetor[cont]);
    }
    for(cont = 0; cont < n; cont++)
    {
        media = vetor[cont] + media;
    }
    media = media/n;
    cont = 0;
    while ( cont < n)
    {
        desvio_padrao = pow((vetor[cont] - media),2) + desvio_padrao;
        cont+=1;
    }
    desvio_padrao = desvio_padrao/n;
    desvio_padrao = sqrt(desvio_padrao);
    printf("%.2f", desvio_padrao);
    return 0;
}