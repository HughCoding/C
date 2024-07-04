#include <cs50.h> 
#include <stdio.h>

int main(void)
{
    int min;
    do
    {
        min = get_int("menos numero:");
    }
    while (min < 1);
    int max;
    do
    {
        max = get_int("Maior número: ");
    }
    while (min >= max);

    printf("Números primos entre %d e %d:\n", min, max);
    for (int i = min; i <= max; i++)
    {
        bool primo = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                primo = false;
                break;
            }
        }

        if (primo)

        {
            printf("%d\n", i);
        }
    }

    return 0;
}