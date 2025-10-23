#include <stdio.h>
#include <stdlib.h>

float  A;

int main(){
    printf("inserire lunghezza in metri");
    scanf("%f", &A);
    printf("in centimetri è %f," A/100);
    printf("in millimetri è %f," A/1000);
    printf("in chilometri è %f," A*1000);
    // equivalenze
    
    
    return 0;

}
