#include <stdio.h>
#include <stdlib.h>
int main(){
    
unsigned long int eta;
    // unsigned serve per aumentare il range numero della costante togliendolo d aquello negativo
    // long aumenta la grandezza del numero
    printf("inserisci età in anni");
    scanf("%d", &eta);
    printf("l'età in secondi è %d", eta*31 536 000);

    return 0;
}