#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {

    //dichiaro le variabili dei cateti con float per poter inserire valori decimali
    float c1, c2;

    //stampa il valore del cateto 1
    printf("inserire valore cateto 1: ");
    //memorizza il numero inserito nella variabile c1
    scanf("%f", &c1);

    //stampa il valore del cateto 2
    printf("\n inserire valore cateto 2: ");
    //memorizza il numero inserito nella variabile c2
    scanf("%f", &c2);

    //calcolo l'ipotenusa usando la radice quadrata e i quadrati dei cateti 
    printf("\n l'ipotenusa del triangolo rettangolo è: %f", sqrt(pow(c1, 2) + pow(c2, 2)));
    
    return 0;

}