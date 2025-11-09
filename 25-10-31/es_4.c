#include<stdio.h>
#include<stdlib.h>

int main () {

   //dichiaro una variabile n per memorizzare un valore reale
   float n;

   //chiede un numero reale all'utente e lo memorizza nella variabile "n"
   printf("inserisci numero n: ");
   scanf("%f", &n);

   if (n >= 10 && n <= 20) {

   //se 10<= n <= 20, stampa il messaggio
    printf("%f rientra nell'intervallo 10-20", n);

   }else {

   //sennò stampa che il numero inserito è esterno all'intervallo
    printf("%f è esterno all'intervallo", n);

   }
   return 0;
}