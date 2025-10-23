#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiara le variabili della tensione e della resistenza
    float tensione, resistenza;

    //stampa il valore della tensione in Volt
    printf("inserirsci il valore della tensione in Volt: ");
    //memorizza il valore inserito nella variabile "tensione"
    scanf("%f", &tensione);

    //stampa il valore della resistenza in Ohm
    printf("\n inserisci il valore della resistenza in Ohm: ");
    //memorizza il valore inserito nella variabile "resistenza"
    scanf("%f", &resistenza);

    //calcola e stampa la corrente in Ampere
    printf("corrente = V / R = %.2f Ampere", tensione/resistenza);

    return 0;
}