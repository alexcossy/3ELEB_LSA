#include<stdio.h>
#include<stdlib.h>


int main () {

    //dichiara la variabile della temperatura
    float temperatura;

    //stmpa la temperatura in °C
    printf("inserisci temperatura in °C: ");
    //memorizza il valore inserito nella variabile "temperatura"
    scanf("%f", &temperatura);

    //stampa le conversioni da °C a °F e Kelvin
    printf("\n sono: %f °F", temperatura * 1.8 + 32);
    printf("\n sono %f Kelvin", temperatura + 273.15);


    return 0;
}