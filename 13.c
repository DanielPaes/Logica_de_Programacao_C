#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_camisa[50];
    int qtd_jogadores;
    int i1, i2;
    int time_A[25];
    int time_B[25];
    int ia = 0;
    int ib = 0;

    printf("Informe a quantidade de jogadores -> ");
    scanf("%d", &qtd_jogadores);

    for(i1 = 0; i1 < qtd_jogadores; i1++){
        printf("Informe o numero da camiseta do jogador %d-> ", i1+1);
        scanf("%d", &num_camisa[i1]);
        if(num_camisa[i1] % 2 == 0){
            time_A[ia] = num_camisa[i1];
            ia++;
        } else {
            time_B[ib] = num_camisa[i1];
            ib++;
        }
    }

    return 0;
}
