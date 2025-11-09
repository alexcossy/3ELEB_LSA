#include<stdio.h>
#include<stdlib.h>

int main () {

    //dichiaro una variabile k per memorizzare un valore intero
    int k;

    //chiede un numero intero all'utente e lo memorizza nella variabile "k"
    printf("inserisci un numero intero: ");
    scanf("%d", &k);

    if (k > 0 && k % 3 == 0) {

        //se il valore inserito è maggiore di 0 e se, :3, da r = 0, stampa questo messaggio
        printf("%d rientra in questi parametri", k);
    }
    return 0;
}