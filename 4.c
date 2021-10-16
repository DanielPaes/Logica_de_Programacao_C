#include<stdio.h>

int main(int argc, char const *argv[])
{
    char rua[20];
    int numero;

    printf("Entre com o nome da sua rua: \n");
    fgets(rua, 20, stdin);

    printf("Entre com o número da rua: \n");
    scanf("%d", &numero);

    puts(rua);

    printf("%d\n", numero);

    return 0;
}


