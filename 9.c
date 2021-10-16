#include<stdio.h>

float nota(float y){
    float nota;

    nota = (6*7) - y;

    return nota;
}

int main(){
    
    float notas[6] = {9.2, 5.6, 7.8, 7, 7.2, 0};
    int i;
    float soma = 0;
    float media;
    float x;

    for(i = 0; i < 6; i++){
        soma = soma + notas[i];
    }

    media = soma / 6;

    x = (7*6)-soma;

    if (media >= 7) {
        printf("Media das notas: %.2f\nVc esta dentro da media.\n", media);

    } else {
        printf("Media das notas: %.2f\nVc esta abaixo da media.\n", media);
        x = nota(soma);
        printf("Para ficar na media, sua nota 6 deve ser igual ou maior que: %.2f\n", x);
    }

    return 0;
} 




