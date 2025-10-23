#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main () {

    //dichiara le variabili della massa e velocità
    float massa, velocità;

    //stampa il valore della massa in kg
    printf("inserisci valore della massa in kg: ");
    //memorizza il valore inserito nella variabile "massa"
    scanf("%f", &massa);

    //stampa il valore della velocità in m/s
    printf("\n inserisci valore della velocità in m/s: ");
    //memorizza il valore inserito nella variabile "velocità"
    scanf("%f", &velocità);

    //calcola l'energia cinetica
    float energia = 0.5 * massa * pow(velocità, 2);

    //stampa il risultato dell'energia cinetica in joule 
    printf("\n l'energia cinetica risultante è: %f Joule", energia);

   
    return 0;

}
