#include<stdio.h>
#include<stdlib.h>

int anni = 16;


int main(){
    // il codice mostra a video la mia presentazione. SEMPRE COMMENTARE!!!
    printf("Ciao io sono Alex Cossar e ho ");
    printf("%d", anni);
    printf(" anni\n"); 
    printf(" il 3 agosto compirò ");
    // il ++ anni somma 1 alla variabile già nella stringa in cui viene scritto il codice
    printf("%d\n", ++ anni );

    // qua mostra a video già la variabile anni sommata
    printf("%d", anni); 

 
    return 0;
}