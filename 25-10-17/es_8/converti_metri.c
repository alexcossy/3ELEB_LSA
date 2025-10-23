#include<stdio.h>
#include<stdlib.h>

//attribuisco un numero decimale di metri
float metri = 123.4;

int main () {

   //stampa la conversione da metri a centimetri
   printf("%f metri sono: %f centimetri", metri, metri * 100);

   //stampa la conversione da metri a millimetri
   printf("\n %f metri sono: %f millimetri", metri, metri * 1000);

   //stampa la conversione da metri a chilometri
   printf("\n %f metri sono: %f chilometri", metri, metri / 1000);


    return 0;

}