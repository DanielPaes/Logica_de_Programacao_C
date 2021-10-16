#include<stdio.h>

int main(int argc, char const *argv[])
{
    char rua[20];
    char nome[20];

    printf("Entre com o nome da sua rua: \n");
    fgets(rua, 20, stdin);

    printf("Nome da rua: %s\n", rua);

    printf("Entre com o seu nome: \n");
    fgets(nome, 20, stdin);

    puts(nome);



    return 0;
}
