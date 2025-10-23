#include<stdio.h>
#include<stdlib.h>

//attribuisco a v1 e v2 due valori decimali
float v1 = 4.4;
float v2 = 5.5;

int main () {

   //stampa la somma, differenza, prodotto e rapporto tra i valori decimali usando float
   
   printf("la somma tra %f e %f è %f", v1, v2, v1 + v2);

   printf("\n la differenza tra %f e %f è %f", v1, v2, v1 - v2);

   printf("\n il prodotto tra %f e %f è %f", v1, v2, v1 * v2);
   
   printf("\n il rapporto tra %f e %f è %f", v1, v2, v1 / v2);


    return 0;

}