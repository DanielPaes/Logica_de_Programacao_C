#include<stdio.h>

int main(int argc, char const *argv[])
{
    char porta_1[25] = "Tigre_de_Bengala";
    char porta_2[25] = "Tigre_Siberiano";
    char porta_3[25] = "Tigre_Dente_de_Sabre";
    char porta_4[25] = "Tigre_Sumatra";
    int porta;

    printf("Escolha uma porta entre 1 e 4: ");
    scanf("%d", &porta);

    if(porta == 1){
        printf("Perigo!!! O %s esta atras da porta!\n", &porta_1);
    } else if(porta == 2){
        printf("Perigo!!! O %s esta atras da porta!\n", &porta_2);
    } else if(porta == 3){
        printf("Boa escolha, o %s esta extinto.\n", &porta_3);
    } else {
        printf("Perigo!!! O %s esta atras da porta!\n", &porta_4);
    }

    return 0;
}


