#include<stdio.h>
#include<stdlib.h>


int main () {

   //dichiara le variabili della forza e dell'area
   float forza, area;

   //stampa il valore della forza in Newton
   printf("inserisci forza in Newton: ");
   //memorizza il valore inserito nella variabile "forza"
   scanf("%f", &forza);

   //stampa il valore dell'area in m²
   printf("\n inserisci area in m²: ");
   //memorizza il valore inserito nella variabile "area"
   scanf("%f", &area);

   //calcola e stampa il risultato della pressione in Pa
   printf("\n la pressione tra forza = %.2f e area = %.2f è %.2f Pa", forza, area, forza/area);

    return 0;

}
