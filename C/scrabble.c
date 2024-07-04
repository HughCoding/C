#include <cs50.h> 
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int PONTOS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calcular_pontuacao(string word);

int main(void)
{

    string palavra1 = get_string("Jogador 1: ");
    string palavra2 = get_string("Jogador 2: ");

    int pontuacao1 = calcular_pontuacao(palavra1);
    int pontuacao2 = calcular_pontuacao(palavra2);

    if (pontuacao1 > pontuacao2)
    {
        printf("O jogador 1 venceu!\n");
    }
    else if (pontuacao1 < pontuacao2)
    {
        printf("O jogador 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }
}

int calcular_pontuacao(string palavra)
{

    int pontuacao = 0;
    for (int i = 0; i < strlen(palavra); i++)
    {
        int numero_letra = palavra[i];
        if (isalpha(palavra[i]))
        {
            if (isupper(palavra[i]))
            {
                pontuacao += PONTOS[numero_letra - 65];
            }
            else
            {
                pontuacao += PONTOS[numero_letra - 97];
            }
        }
    }
    return pontuacao;
} 
