//Leia uma matriz de tamanho 10 x 3 com as notas de 10 alunos em três provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont = 0, contador, mat[10][3], men0 = 0, men1 = 0, men2 = 0, menores = 0, val = 0, menor;
	
	while (cont < 10)
	{
	    for(contador = 0;contador < 3;contador++)
	    {
	        scanf("%d", &mat[cont][contador]);
	    }
	    cont++;
	}
    for (contador = 0;contador < 10;contador++)
    {
        for(cont = 0; cont < 3; cont++)
        {
            if (val == 0)
            {
                menor = 999999;
                val++;
            }
            if (menor > mat[contador][cont])
            {
                menor = mat[contador][cont];
                menores = cont;
            }
        }
        if (menores == 0)
            men0+=1;
        else if (menores == 1)
            men1+=1;
        else if (menores == 2)
            men2+=1;
        val = 0;
        menores = 0;
    }
printf("%d %d %d", men0, men1, men2);
    
    return 0;
}

