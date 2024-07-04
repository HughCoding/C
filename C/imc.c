#include <cs50.h>
#include <stdio.h>

int main()
{
    float peso = 74.0;
    float altura = 1.90;

    float imc = peso / (altura * altura);

    printf("O seu índice de massa corpórea é: %.2f\n", imc);

    if (imc < 20)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc < 25)
    {
        printf("Peso normal\n");
    }
    else if (imc < 30)
    {
        printf("Acima do peso\n");
    }
    else if (imc < 35)
    {
        printf("Obeso\n");
    }
    else
        printf("(muito obeso)");
}