#include<stdio.h>
#include<stdlib.h>

//attribuisco a v1 e v2 dei valori interi
int v1 = 10;
int v2 = 5;

int main () {
  
    //mostra a video i valori e la loro somma, differenza, prodotto e rapporto
    printf("la somma di %d e %d è %d \n", v1, v2, v1 + v2);

    printf("la differenza di %d e %d è %d \n", v1, v2, v1-v2);

    printf("il prodotto tra %d e %d è %d \n", v1, v2, v1 * v2);
    
    printf("il rapporto tra %d e %d è %d \n", v1, v2, v1 / v2);
  

    return 0;

}