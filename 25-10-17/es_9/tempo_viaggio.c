#include<stdio.h>
#include<stdlib.h>

//stabilisco la distanza e la velocità
float distanza = 100;
float velocità = 35;

int main () {

    //calcolo il tempo di viaggio in minuti
    float minuti =  (distanza / velocità) * 60;

    //stampo il tempo di viaggio in minuti
    printf("il tempo di viaggio in minuti è %f", minuti);

    return 0;

}