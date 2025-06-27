//Chiedere all'utente di inserire due numeri interi e calcolare la loro somma.

#include <stdio.h>

int miain(){
    int a,b, somma;

    printf ("inserisci il primo numero");
    Scanf ("%d", &a);

    printf ("inserisci il secondo numero");
    Scanf ("%d", &b);

    somma = a+b;

    printf ("la somma è: %d", somma);

    return 0;
}

