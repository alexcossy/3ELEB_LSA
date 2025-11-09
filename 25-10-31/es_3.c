#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiaro due variabili a-b per memorizzare due valore reali
    float a, b;

    //chiede i due numeri all'utente e li memorizza nelle variabili a - b
    printf("inserisci il primo numero a: ");
    scanf("%f", &a);

    printf("\n inserisci il secondo numero b: ");
    scanf("%f", &b);

    if (a > b) {

        //se a > b stampa il messaggio
        printf("%f è maggiore di %f", a, b);

    }else if (a < b) {

        //se a < b stampa il messaggio opposto
        printf("%f è maggiore di %f", b, a);

    }
    return 0;
}