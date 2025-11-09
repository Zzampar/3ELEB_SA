#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int c;

int main(){
    printf("inserire numero 1");
    scanf("%d", &a);
    printf("inserire numero 2");
    scanf("%d", &b);
    printf("inserire numero 3");
    scanf("%d", &c);
    if(a > b){
    }if(b > c) {
        printf("a è il numero maggiore");
    }if(c > a){
        printf("c è il numero maggiore");
    }else{
        printf(" b è il numero maggiore")
    }
    
    
    return 0;   }