#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiaro le variabili dei numeri e dei loro pesi
    float n1, n2, n3;
    float p1, p2, p3;

    //stampa i valori del numero 1 e del suo peso
    printf("inserisci numero1, peso1: ");
    //memorizza i valori del numero 1 e del suo peso nelle variabili
    scanf("%f, %f", &n1, &p1);

    //stampa i valori del numero 2 e del suo peso
    printf("\n insersci numero2, peso2: ");
    //memorizza i valori del numero 2 e del suo peso nelle variabili
    scanf("%f, %f", &n2, &p2);

    //stampa i valori del numero 3 e del suo peso
    printf("\n inserisci numero3, peso3: ");
    //memorizza i valori del numero 3 e del suo peso nelle variabili
    scanf("%f, %f", &n3, &p3);

    //calcola la media pesata
    float mediap = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

    //stampa la media pesata
    printf("la media pesata è %.2f", mediap);

    return 0;

}