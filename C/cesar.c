#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
       printf("Uso: ./cesar chave\n");
        return 1;
    }

    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Uso: ./cesar chave\n");
        return 1;
        }
    }
        int k = atoi(argv[1]);

        string textopuro = get_string ("Texto puro: ");
        printf("Texto cifrado: ");

        for (int o = 0; o < strlen(textopuro); o++)
        {
            if (isupper(textopuro[o]))

        {
            printf("%c", (textopuro[o] -65 + k) % 26 + 65);
        }
        else if (islower(textopuro[o]))
        {
             printf("%c", (textopuro[o] -97 + k) % 26 + 97);
        }
        else
        {
            printf("%c",textopuro[o]);
        }
    }
      printf("\n");
}