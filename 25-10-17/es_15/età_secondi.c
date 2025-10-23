#include<stdio.h>
#include<stdlib.h>


int main () {

    //dichiara la variabile anni
    int anni;

    //stampa il valore in anni
    printf("inserire un'età in anni: ");
    //memorizza il valore inserito nella variabile "anni"
    scanf("%d", &anni);

    //calcola la conversione in secondi
    int secondi = anni * 365 * 24 * 60 * 60;

    //stampa la conversione da anni a secondi
    printf("%d anni sono: %d secondi", anni, secondi);
  
   
    return 0;

}