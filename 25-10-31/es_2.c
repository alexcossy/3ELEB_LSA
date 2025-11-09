#include<stdio.h>
#include<stdlib.h>

int main () {
    
    //dichiaro una variabile per memorizzare un valore intero
    int valore;

    //chiede un valore intero all'utente
    printf("inserisci un numero intero: ");
    //legge il numero intero inserito e lo memorizza nella variabile "valore"
    scanf("%d", &valore);

    if (valore % 2 == 0){

        //se il valore :2 da r = 0, allora stampa il messaggio
        printf("il numero %d è pari", valore);

    } else {

        //sennò stampa " il numero è dispari"
        printf("il numero %d è dispari", valore);

    }
    return 0;
}