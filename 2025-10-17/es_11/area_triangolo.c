#include <stdio.h>
#include <stdlib.h>
int main(){

float base;
float altezza;

    printf("inserisci base triangolo");
    scanf("%f", &base);
    printf("inserisci base triangolo");
    scanf("%f", &altezza);
    printf("l'area del triangolo è %f", base*altezza/2.00);

    // mettere 2.00 rende il risultato con 2 cifre decimali

    return 0;
}