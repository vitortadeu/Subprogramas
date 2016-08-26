#include <stdio.h>
#include <string.h>
//Caracteres aleatorios

/*2)	Crie uma função que recebe uma string e transforma alguns dos caracteres em
maiúsculos e outros em minúsculos. Faça sorteios com a função rand() para gerar
números aleatórios em C, que serão usados para escolher os índices dos caracteres
que serão alterados. Como parâmetro deve ser recebida a quantidade de sorteios que
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
