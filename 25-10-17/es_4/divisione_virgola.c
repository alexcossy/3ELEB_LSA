#include<stdio.h>
#include<stdlib.h>

//attribuisco a v1 e v2 dei valori interi
int v1 = 34;
int v2 = 9;

int main () {
     
    //con float ottengo il risultato con la parte decimale
    float risultato = (float)v1 / v2;

    //mostra a video i valori e il loro rapporto
    printf("il rapporto tra %d e %d è %f", v1, v2, risultato);
  

    return 0;

}