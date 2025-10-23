#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
   
    //dichiaro le variabili del raggio e dell'altezza e la costante M_PI
    float raggio, altezza; 
    float pi = M_PI;

    //stampa il valore del raggio del cilindro
    printf("inserire raggio del cilindro: ");
    //memorizza il valore inserito nella variabile "raggio"
    scanf("%f", &raggio);

    //stampa il valore dell'altezza del cilindro
    printf("\n inserire altezza del cilindro: ");
    //memorizza il valore inserito nella variabile "altezza"
    scanf("%f", &altezza);

    //calcola il volume usando le variabili e la costante
    float volume = pi * pow(raggio, 2) * altezza;
    //stampa il risultato del volume
    printf("\n il volume del cilindro è %f", volume); 

    return 0;
}