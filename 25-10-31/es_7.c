#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiaro una variabile "numero" per memorizzare un valore intero
    int numero;

    //chiede il numero all'utente e lo memorizza nella variabile "numero"
    printf("inserisci valore intero: ");
    scanf("%d", &numero);

    if (numero > 0){

    //se il valore inserito è maggiore di 0 stampa questo messaggio
    printf("il valore inserito è positivo");

}else if (numero < 0){

    //se il valore inserito è minore di 0 stampa questo messaggio
    printf("il valore inserito è negativo");

}else {

    //se il valore inserito è uguale a 0 stampa questo messaggio
    printf("il valore inserito è nullo");

}

return 0;

}