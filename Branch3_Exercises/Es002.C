//Chiedere all'utente di inserire tre numeri interi e calcolare il loro prodotto.

#include <stdio.h>
int main (){
 int a,b,c,p;

    printf ("inserisci il primo numero");
    scanf ("%d",&a);

    printf ("Inserisci il secodno nnumero");
    scanf ("%d",&b);

    printf ("Inserisci iò terzo numero");
    scanf ("%d",&c);

    p=a*b*c;

    printf ("il prodotto  e' %d",&p);

    return 0;
}