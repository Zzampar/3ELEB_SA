#include<stdio.h>
#include<stdlib.h>
int main(){

float base;
float altezza;


    printf("inserire base rettangolo");
    scanf("%f", &base);
    printf("inserire altezza rettangolo");
    scanf("%f", &altezza);
    printf("l'area del rettangolo è %f*%f", base, altezza);
    printf("il perimetro del rettangolo è %f*2+%f*2", base, altezza);

    return 0;
}