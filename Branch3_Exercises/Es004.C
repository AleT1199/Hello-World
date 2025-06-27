//Chiedere all'utente di inserire due numeri interi e calcolare il resto della divisione tra di essi.

#include <stdio.h>
int main (){

    int a,b,resto;

    printf ("insert 1st number ");
    scanf ("%d",&a);

    printf ("Insert 2nd number");
    scanf ("%d",&b);

    resto = a%b;

    printf ("il resto della divisione %d", resto);

    return 0;
}
