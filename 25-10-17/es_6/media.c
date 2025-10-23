#include<stdio.h>
#include<stdlib.h>

//attribuisco a v1 e v2 dei valori interi
int v1 = 4;
int v2 = 7;
int valori = 2; //numero di valori di cui si vuole calcolare la media


int main () {

    //calcolo la somma dei due numeri
    int somma = v1 + v2;

   //stampo la media tra i valori usando float per ottenere un risultato decimale
   printf("la media tra %d e %d è %f", v1, v2, (float)somma / valori);

    return 0;

}