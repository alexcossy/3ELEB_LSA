#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiaro una variabile per memorizzare un valore reale
    float valore; 

    //chiede un valore all'utente
    printf("inserisci un valore: ");
    //legge il numero reale inserito e lo memorizza nella variabile "valore"
    scanf("%f", &valore);

    if (valore > 0){

        //se il valore è maggiore di 0 stampa il messaggio
        printf("il valore è positivo");

    }else{

        
    }
    return 0;
}