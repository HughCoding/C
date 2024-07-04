#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

string substituir(string entrada);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf(" Uso: ./sem_vogais palavra");
        return 1;
    }
    printf("%s\n", substituir(argv[1]));
}

string substituir(string entrada)
{
    string saida = entrada;
    for (int i = 0; i < strlen(entrada); i++)
    {
        {
            char t = tolower(entrada[i]);
            switch (t)
            {
                case 'a':
                    saida[i] = '6';
                    break;

                case 'e':
                    saida[i] = '3';
                    break;

                case 'i':
                    saida[i] = '1';
                    break;

                case 'o':
                    saida[i] = '0';
                    break;

                default:
                    saida[i] = entrada[i];
                    break;
            }
        }
    }
    return saida;
}