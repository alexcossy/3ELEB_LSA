#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiara le variabili della tensione e della corrente
    float tensione, corrente;

    //stampa il valore della tensione in Volt
    printf("inserirsci il valore della tensione in Volt: ");
    //memorizza il valore inserito nella variabile "tensione"
    scanf("%f", &tensione);

    //stampa il valore della corrente in Ampere
    printf("\n inserisci il valore della corrente in Ampere: ");
    //memorizza il valore inserito nella variabile "corrente"
    scanf("%f", &corrente);

    //calcola e stampa la potenza elettrica in Watt
    printf("potenza elettrica = V * I = %f Watt", tensione * corrente);

    return 0;
}