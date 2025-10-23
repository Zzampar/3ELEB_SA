#include <stdio.h>
#include <stdlib.h>
int main(){

    float forza;
    float area;

    printf("inserire forza in Newton");
    scanf("%f, &forza");
    printf("inserire area in metri quadratri");
    scanf("%f, &area");
    printf(" la pressione è %f", forza/area);
    // P=F/A



    return 0;
}