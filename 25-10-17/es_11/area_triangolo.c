#include<stdio.h>
#include<stdlib.h>

//attribuisco alla base e all'altezza due valori decimali
float base = 4.321;
float altezza = 7.654;

int main () {

    //calcola il risultato dell'area
    float risultato = (base * altezza) / 2;

    //stampa la base e l'altezza del triangolo
    printf("la base del triangolo è %f", base);
    printf("\n l'altezza del triangolo è %f", altezza);

    //stampa il risultato dell'area con 2 cifre decimali
    printf("\n l'area del triangolo è ");
    printf("%.2f", risultato);

    
    return 0;

}