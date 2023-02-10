//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:

For maior que 20% do salário, imprima: ”Emprestimo nao concedido.”
Caso contrário, imprima: ”Emprestimo concedido.”

#include <stdio.h>

int main()
{
float var_sal, var_prest;

printf("Insira o salario do trabalhador: ");
scanf("%f", &var_sal);
printf("\nInsira o valor da prestacao do emprestimo: ");
scanf("%f", &var_prest);

(var_prest > var_sal/5) ? printf("Emprestimo nao concedido.") : printf("Emprestimo concedido.");

return 0;
}

