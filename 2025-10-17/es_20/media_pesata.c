#include <stdio.h>
#include <stdlib.h>
int main(){

    
    float numero1;
    float numero2;
    float numero3;
    float massa1;
    float massa2;
    float massa3;

    printf("inserire massa1");
    scanf("%f", &massa1);
    printf("inserire massa2");
    scanf("%f", &massa2);
    printf("inserire massa3");
    scanf("%f", &massa3);
    printf("inserire numero1");             //
    scanf("%f", &numero1);
    printf("inserire numero2");
    scanf("%f", &numero2);
    printf("inserire numero3");
    scanf("%f", &numero3);
    printf(" la madia pesata è %f", (numero1*massa1+numero2*massa2+numero3*massa3)/massa1+,massa2+massa3);
    
    return 0;
}