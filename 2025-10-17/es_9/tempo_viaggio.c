#include <stdio.h>
#include <stdlib.h>
int main(){

float distanza;
float velocita;
    printf("inserire distanza in km");
    scanf("%f", &distanza);
    printf("inserire velocita di km/h");
    scanf("%f", &velocita);
    printf("il tempo impiegato in minuti è %f*%f*60", distanza, velocita);
    

    return 0;
}