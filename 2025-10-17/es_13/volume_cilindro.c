#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

float ragggio;
float altezza;

    printf("inserisci raggio cilindro");
    scanf("%f", &raggio);
    printf("inserisci altezza cilindro");
    scanf("%f", &altezza);
    printf("il volume è %f", M_PI*raggio*raggio*altezza);
    // math.h include delle costanti come il p greco
    
    return 0;
}