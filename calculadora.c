#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resultado;
    printf("Menu\n");
    printf("Escolha o primeiro numero: ");
    scanf("%d", &num1);
    printf("Escolha o segundo numero: ");
    scanf("%d", &num2);
    printf("Escolha uma das opcoes\n");
    printf("1   -   Soma\n");
    printf("2   -   Subtracao\n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        break;

    case 2:
        resultado = num1 - num2;
        break;

    default:
        printf("Opcao inválida!");
        break;
    }

    printf("Resultado: %d", resultado);

    return 0;
}
