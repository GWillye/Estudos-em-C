//Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings. A sua função main deve ler as duas string e imprimir "Sim" caso a segunda string ocorra dentro da primeira ou "Nao" caso contrário.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificar(char *str1, char *str2)
{
    int x, y = 0, c = 0;
for(x = 0; x < strlen(str1)-1; x++)
    {
        if(y < strlen(str2)-1)
        {
            while(y < strlen(str1)-1)
            {
                if(*(y+str2) == *(x+str1))
                {
                    y++;
                    break;
                }
                else if(y > 0)
                {
                    y = 0;
                    x--;
                    break;
                }
                else
                    break;
            }
        }
        else
        {
            c = 1;
            break;
        }
    }
    if(c == 0)
        printf("Nao");
    else
        printf("Sim");
}
int main()
{
    char str1[50], str2[49];
    fgets(str1, 50, stdin);
    fgets(str2, 49, stdin);
    verificar(str1, str2);
    return 0;
}
