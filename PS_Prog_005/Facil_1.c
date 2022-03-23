#include <stdio.h>

int main ( ){
     
     int i, n ;
       char repetir[100];

    printf("A repetir:");
     scanf("%[^\n]s ", repetir );
    printf("Quantas vezes:");
     scanf("%d ", &n );
     
     printf("--> [");

     for (i=0; i<n; i++){ //estrutura de repetição para fazer o "vetor" de palavras

    if(i == n-1){  printf("%s]", repetir); break;  }

       printf("%s, ", repetir);
 
     }

    return 0;
}
