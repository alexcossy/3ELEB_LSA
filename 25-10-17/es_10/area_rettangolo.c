#include<stdio.h>
#include<stdlib.h>



int main () {

    //dichiaro le variabili con float per consentire misure decimali
    float base, altezza;

    //stampa il valore della base
    printf("inserire valore base del rettangolo: ");
    //memorizza il valore inserito nella variabile base
    scanf("%f", &base);

    //stampa il valore dell'altezza
    printf("\n inserire valore altezza del rettangolo: ");
    //memorizza in valore inserito nella variabile altezza
    scanf("%f", &altezza);

    //calcola il perimetro
    float perimetro = (base + altezza) * 2;

    //stampa il perimetro e l'area del rettangolo
    printf("\n il perimetro del rettangolo è %f", perimetro);
    printf("\n l'area del rettangolo è %f", base * altezza);

    return 0;

}