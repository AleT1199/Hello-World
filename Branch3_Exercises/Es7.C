//Chiedere all'utente di inserire una temperatura in gradi Celsius e convertirla in gradi Fahrenheit.

#include <stdio.h>
int main (){
    float tempC,tempF;

    printf ("insert tempC ");
    scanf ("%f", &tempC);

    tempF = (tempC * 9 / 5) + 32;

    printf ("la temp in gradi Fahrenheit è %f",tempF);

    return 0;
}

