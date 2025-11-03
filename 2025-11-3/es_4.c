#include <stdio.h>
#include <stdlib.h>

int n;

int main(){
    printf("inserire numero");
    scanf("%d", &n);
    if(n <= 10){
        printf("numero fuori intervallo");
    } else  if(n < 20 ) {
        printf("numero soddisfa l'intervallo");
    } else if(n >= 20){
        printf("numero fuori intervallo");
    }
    
    
    return 0;   }
    