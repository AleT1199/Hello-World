//Chiedere all'utente di inserire una base e un esponente interi e calcolare il risultato dell'elevamento a potenza.

#include <stdio.h>

int main (){

    int base, esponenete, risultato

    printf ("Insert base ");
    scanf ("%d",&base);

    printf ("Insert esponente ");
    scanf ("%d",&esponenete);

    for ( int i=0, i<esponenete, i++){
        risultato = base * base;
    }

    printf ("risultato = %d", risultato);

    return 0;
}