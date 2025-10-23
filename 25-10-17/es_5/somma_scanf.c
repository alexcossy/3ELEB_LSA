#include<stdio.h>
#include<stdlib.h>



int main () {

    //dichiaro due variabili intere per memorizzare i numeri inseriti
    int v1, v2; 

    //chiede all'utente di inserire il primo numero
    printf("inserisci primo numero: ");
    //memorizza il numero inserito in v1
    scanf("%d", &v1);

    //chiede all'utente di inserire il secondo numero
    printf("\n inserisci secondo numero: ");
    //memorizza il numero inserito in v2
    scanf("%d", &v2);

    //calcola e mostra la somma e il prodotto dei due valori inseriti
    printf("la somma tra %d e %d è %d", v1, v2, v1+v2);
    printf("\n il prodotto tra %d e %d è %d", v1, v2, v1*v2);

    return 0;

}