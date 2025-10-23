#include <stdio.h>
#include <stdlib.h>
int main(){

    float voltaggio;
    float resistenza;

    printf("inserire forza in volt");
    scanf("%f", &voltaggio);
    printf("inserire resistenza in ohm");
    scanf("%f", &resistenza);
    printf(" l'intensità' è %f", voltaggio/resistenza);
    // I=V/R



    return 0;
}