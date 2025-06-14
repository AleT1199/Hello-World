//Chiedere all'utente di inserire due numeri interi e calcolare la divisione intera tra di essi.

#include <stdio.h>

int main (){

    int a,b,r;

    printf ("inserisci il primo numero");
    scanf ("%d",&a);

    printf ("inserisci il secondo numero");
    scanf ("%d",&b);

    r=a/b;

    printf ("il risultato del divisore è %d ",r);

    return 0;
}
