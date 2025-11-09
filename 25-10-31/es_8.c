#include<stdio.h>
#include<stdlib.h>
 
int main () {
 
    //dichiaro due variabili x - y per memorizzare due valori reali
    float x, y;
 
    //chiede i valori all'utente e li memorizza nelle variabili "x" "y"
    printf("inserisci valore di x: ");
    scanf("%f", &x);
 
    printf("\n inserisci il valore di y: ");
    scanf("%f", &y);
 
    if (x > 0 && y > 0) {
 
        //se i valori sono maggiori di 0 stampa questo messaggio
        printf("x e y sono maggiori di 0");
 
    }else if(x > 0 && y < 0 || x < 0 && y > 0){
 
        //se almeno un valore è maggiore di 0 stampa questo messaggio
        printf("solo un valore tra x e y è positivo");
 
    }
 
    return 0;
}
 