#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

bool valid(string senha);

int main(void)
{
    string senha = get_string("Digite sua senha: ");
    if (valid(senha))
    {
        printf("Sua senha é válida!\n");
    }
    else
    {
        printf(" A senha precisa de 1 letra maiúscula, 1 letra minúscula, 1 número e 1 símbolo!\n");
    }
}

bool valid(string senha)
{
    bool minuscula = false;
    bool maiuscula = false;
    bool numero = false;
    bool simbolo = false;

    for (int i = 0; i < strlen(senha); i++)
    {
        if (islower(senha[i]))
        {
            minuscula = true;
        }
        if (isupper(senha[i]))
        {
            maiuscula = true;
        }
        if (isdigit(senha[i]))
        {
            numero = true;
        }
        if (!isalnum(senha[i]))
        {
            simbolo = true;
        }
    }
    if (minuscula == true && maiuscula == true && numero == true && simbolo == true)
    {
        return true;
    }
    return false;
}