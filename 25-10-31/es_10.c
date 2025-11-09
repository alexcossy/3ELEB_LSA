#include<stdio.h>
#include<stdlib.h>
 
int main () {

   //dichiaro 3 variabili per memorizzare 3 valori reali
   float a, b, c;

   //chiede un valore reale all'utente e lo memorizza nella variabile "a"
   printf("inserisci il valore del 1° lato: ");
   scanf("%f", &a);

   //chiede un valore reale all'utente e lo memorizza nella variabile "b"
   printf("\n inserisci il valore del 2° lato: ");
   scanf("%f", &b);

   //chiede un valore reale all'utente e lo memorizza nella variabile "c"
   printf("\n inserisci il valore del 3° lato: ");
   scanf("%f", &c);

   if (a < b+c && b < a+c && c < a+b) {

    // se i valori inseriti rispettano queste condizioni il triangolo puo esistere, quindi stampa questo messaggio

    printf("triangolo valido");

   }

return 0;

}
 