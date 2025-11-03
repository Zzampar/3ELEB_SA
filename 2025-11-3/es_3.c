#include <stdio.h>
#include <stdlib.h>

int a;
int b;

int main(){
    printf("inserire 1 numero");
    scanf("%d", &a);
    printf("inserire 2 numero");
    scanf("%d", &b);
    if(a > b){
        printf("%d", a);
    } else { 
        printf("%d", b);
    }
    
    
    return 0;},