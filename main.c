#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");
    float n1, n2, soma, subtracao, vezes, divisao;
    char op;
    printf("Calculadora operações básicas\n\n");
    printf("Digite: número op número\n\n");
    scanf("%f %c %f", &n1, &op, &n2);
    soma=n1+n2;
    subtracao=n1-n2;
    vezes=n1*n2;
    divisao=n1/n2;
    switch (op)
    {
    case '+':
        printf("A soma dos números é %.2f\n",soma);
    break;
    case '-':
        printf("A subtração dos números é %.2f\n", subtracao);
    break;
    case '*':
        printf("A multiplicação dos números é %.2f\n", vezes);
    break;
    case '/':
        printf("A divisão dos números é %.2f\n", divisao);
    break;
    }

printf("Adicionando modificações no arquivo de calculadora, para aula de branches Tânia\n");
printf("Adicionando mais printfs ao arquivo para alterações");

    return 0;
}
