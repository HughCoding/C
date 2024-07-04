#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int letras = 0;
int palavras = 0;
int frases = 0;

int main(void)
{
    string texto = get_string("Texto: ");

    for (int i = 0, comprimento = strlen(texto); i < comprimento; i++)
    {
        if (isupper(texto[i])  islower(texto[i]))
        {
            letras += 1;
        }
        if (texto[i] == '.'  texto[i] == '?' || texto[i] == '!')
        {
            palavras += 1;
        }
        if (texto[i] == ' ')
        {
            frases += 1;
        }
    }

    palavras += 1;

    float L = (float) letras / palavras * 100;
    float S = (float) frases / palavras * 100;

    int indice = round(0.0588 * L - 0.296 * S - 15.8);

    if (indice < 1)
    {
        printf("Abaixo do grau 1\n");
    }
    if (indice >= 16)
    {
        printf("Grau 16+\n");
    }
    if (indice > 1 && indice < 16)
    {
        printf("Grau %i\n", indice);
    }
}