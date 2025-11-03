#include <stdio.h>
#include <stdlib.h>

int  X ;

int main(){
    printf("inserire numero");
    scanf("%f", &X);
    if(X %2 == 0){
        printf("il numero è pari");
    } else { 
        printf("il numero  è dispari");
    }
    
    
    return 0;},