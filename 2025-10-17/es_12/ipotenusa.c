#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    
float A;
float B;
    
    printf("inserire primo cateto");
    scanf("%f", &A);
    printf("inserire secondo cateto");
    scanf("%f", &B);
    printf("l'ipotenusa è %f", sqrt(A*A+B*B));
    
    // sqrt è la radice quadrata 


    return 0;
}