#include<stdio.h>
#include<stdlib.h>
 
int main () {

    //dichiaro una variabile per memorizzare un valore intero
    int n;

    //chiede un valore intero all'utente e lo memorizza nella variabile "n"
    printf("inserisci un numero intero n: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 100) {

        //se  1 <= n <= 100, stampa che n rientra nell'intervallo
        printf("%d è maggiore di 1 e minore di 100", n);

    }else if (n < 0) {

        //se n <= 0, stampa che n è minore di 0
        printf("%d è minore di 0", n);

    }
 
    return 0;
}
 