//Desenvolva um programa que leia uma matriz com N x N números reais (float) e calcule a sua transposta sem usar uma matriz auxiliar. A implementação deste programa deve considerar a dimensão fornecida pelo usuário (Dica: represente a matriz através de variáveis do tipo float **, usando alocação dinâmica de memória). Imprima a matriz transposta com duas casas decimais (printf("%.2f", var)) e as posições separadas por vírgula, por exemplo:

/*1,2

3,4 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    float x = 0;
    float **mat;  
    
    scanf("%d", &n);
    mat = malloc(n*sizeof(float *));
    for(i = 0; i < n; i++)
    {
        mat[i] = (float *) malloc(n*sizeof(float));
        for(j = 0; j < n; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j > i)
            {
                x = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = x;
            }
        }
    }
    //Print matriz
    for(i = 0; i <  n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == 0 && j == 0)
                printf(" %.2f,", mat[i][j]);
            else if(j+1 < n)
                printf("%.2f,", mat[i][j]);
            else
            printf("%.2f", mat[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
    mat = NULL;
    
    return 0;
}
