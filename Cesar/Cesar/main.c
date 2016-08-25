#include <stdio.h>
#include <stdlib.h>

void code_cesar(char[], int);
void decode_cesar(char[], int);

int main()
{
    char *frase;
    int dec, pos=3,i,n=0;

    printf("Insira a frase:\n");

    scanf("%s", frase);

    printf("Insira 1 para codificar\n, 2 para decodificar\n, 3 para encerrar:\n");
    scanf("%d", &dec);

    switch (dec)
    {
    case (1):
        for (i=0, frase[i]=! '\0', i++){
            code_cesar(frase[n], pos);
            n++;
        }
        n=0;
        break;
    case (2):
        for (i=0, frase[i]=! '\0', i++)
        {
            decode_cesar(frase[n], pos);
            n++;
        }
        n=0;
        break;
    case (3):
        printf("%s", frase);
        break;
    }



    return 0;
}

void code_cesar(frase[x], int pos)
{

    frase[x] += 3;
}

void code_cesar(frase[x], int pos)
{

    frase[x] -= 3;
}
