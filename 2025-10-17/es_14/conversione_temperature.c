#include <stdio.h>
#include <stdlib.h>
int main(){

float temparatura;

    printf("inserisci temperatura in gradi celsius");
    scanf("%f", &temperatura);
    printf("in farenait sono %f\n", temperatura*1.8+32);
    printf("in kelvin sono %f", temperatura+273.15);
    // senza & non verrebbe registrato ilnumero inseriro ma la sua cella


    return 0;
}