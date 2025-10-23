#include <stdio.h>
#include <stdlib.h>
int main(){

    float tensione;
    float corrente;

    printf("inserire tensione volt");
    scanf("%f", &tensione);
    printf("inserire corrente in ampere");
    scanf("%f", &corrente);
    printf(" la potenza elettrica in watt è %f", tensione*corrente);
    // P=V*I



    return 0;
}