#include <stdio.h>
#include <string.h>
//Caracteres aleatorios

/*2)	Crie uma fun��o que recebe uma string e transforma alguns dos caracteres em
mai�sculos e outros em min�sculos. Fa�a sorteios com a fun��o rand() para gerar
n�meros aleat�rios em C, que ser�o usados para escolher os �ndices dos caracteres
que ser�o alterados. Como par�metro deve ser recebida a quantidade de sorteios que
devem ser executados  */

void transforma(char [], int);

int main(){

    char frase;
    int num;

    printf("Insira a frase:");
    scanf("%[^\n]s", frase);

    printf("Insira a quantidade de sorteios:");
    scanf("%d", num);

    transforma(frase, num);

}

void transforma(char frase[], int qtde_sorteios){

    printf("%s", frase);
}
