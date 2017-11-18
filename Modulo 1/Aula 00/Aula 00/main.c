#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int solucao;
    double divis;
    char oper;

    oper = 'o';

    printf("Digite o primeiro numero\n");
    scanf("%d", &a);
    printf("Digite o segundo numero\n");
    scanf("%d", &b);
    printf("Selecione a operacao\n");
    printf("a para adicao\n");
    printf("s para subtracao\n");
    printf("m para multiplicao\n");
    printf("d para divisao\n");
    scanf(" %c", &oper);

    if (oper == 'a')
    {
    solucao = a + b;
    printf("%d = %d + %d\n", solucao, a, b);
    }

    if (oper == 's')
    {
    solucao = a - b;
    printf("%d = %d - %d\n", solucao, a, b);
    }

    if (oper == 'm')
    {
    solucao = a * b;
    printf("%d = %d * %d\n", solucao, a, b);
    }

    if (oper == 'd')
    {
    divis = (double)a / (double)b;
    printf("%u= %d / %d\n", divis, a, b);
    }
}
