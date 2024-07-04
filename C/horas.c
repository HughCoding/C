#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


float calcular_horas(int horas[], int semanas, char saida);

int main(void)
{
    int semanas = get_int("Quantas semanas de estudo na CS50? ");
    int horas[semanas];

    for (int i = 0; i < semanas; i++)
    {
        horas[i] = get_int("Horas na semana %i: ", i);
    }

    char saida;
    do
    {
        saida = toupper(get_char("Digite T para o total ou M para a média de horas por semana: "));
    }
    while (saida != 'T' && saida != 'M');

    printf("%.1f horas\n", calcular_horas(horas, semanas, saida));

    return 0;
}

float calcular_horas(int horas[], int semanas, char saida)
{
    int total = 0;
    for (int i = 0; i < semanas; i++)
    {
        total += horas[i];
    }
    if (saida == 'T')
    {
        return total;
    }
    else if (saida == 'M')
    {
        return (float) total / semanas;
    }
    else
    {
        return -1;
    }
}