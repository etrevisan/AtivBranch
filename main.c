#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"");
    float n1, n2, soma, subtracao, vezes, divisao;
    char op;
    printf("Calculadora opera��es b�sicas\n\n");
    printf("Digite: n�mero op n�mero\n\n");
    scanf("%f %c %f", &n1, &op, &n2);
    soma=n1+n2;
    subtracao=n1-n2;
    vezes=n1*n2;
    divisao=n1/n2;
    switch (op)
    {
    case '+':
        printf("A soma dos n�meros � %.2f\n",soma);
    break;
    case '-':
        printf("A subtra��o dos n�meros � %.2f\n", subtracao);
    break;
    case '*':
        printf("A multiplica��o dos n�meros � %.2f\n", vezes);
    break;
    case '/':
        printf("A divis�o dos n�meros � %.2f\n", divisao);
    break;
    }

printf("Adicionando modifica��es no arquivo de calculadora, para aula de branches T�nia\n");
printf("Adicionando mais printfs ao arquivo para altera��es");

    return 0;
}
