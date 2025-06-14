//Chiedere all'utente di inserire il raggio di un cerchio e calcolarne l'area.

#include <stdio.h>
#define PI 3.14159

int main (){

    float raggio,area;

    printf ("insert raggio: ");
    scanf ("&f", &raggio);

    area = raggio * raggio * PI;

    printf ("area cerchio %f", area);

    return 0;
}