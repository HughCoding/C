#include <cs50.h>
#include <stdio.h> 
#include <string.h>

const int BITS_NO_BYTE = 8;

void imprimir_lampada(int bit);

int main(void)
{
    string mensagem = get_string("Mensagem: ");

    for (int i = 0; i < strlen(mensagem); i++)
    {
        char m = mensagem[i];

        int ASCII = (int) m;

        for (int j = BITS_NO_BYTE - 1; j >= 0; j--)
        {

            int bit = (ASCII >> j) & 1;

            imprimir_lampada(bit);
        }
    }

    printf("\n");
}

void imprimir_lampada(int bit)
{
    if (bit == 0)
    {
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        printf("\U0001F7E1");
    }
}