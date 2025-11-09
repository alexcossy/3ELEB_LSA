#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiaro 3 variabili a - b - c per memorizzare 3 valori reali
    float a, b, c;

    //chiede all'utente 3 valori e li memorizza nelle variabili "a - b - c"
    printf("inserisci 3 valori: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a > b && a > c) {

        //se a > b e a > c stampa questo messaggio
        printf("%f è il numero maggiore fra i 3", a);
    
    }else if (b > a && b > c) {

        //se b > a e b > c stampa questo messaggio
        printf("%f è il numero maggiore fra i 3", b);
    
    }else if (c > a && c > b) {

        //se c > a e c > b stampa questo messaggio
        printf("%f è il numero maggiore fra i 3", c);
    }
    return 0;
}