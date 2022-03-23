#include <stdio.h>

int main ( ){
     
     int i, cont2 =0,  j =0 ;
     printf("conta_uns:");
     scanf("%d", &i);
     float n = i;
     int conta=0; 

     while(n > 2){ // loop para saber o tamanho do vetor
        
         conta++;
        n =  n/2;
        
     }
     n =i;
     int v[conta] ; // vetor para armazenar os binarios 

    while (n > 1) // Nao entendi o motivo, porém nesse código ao utilizar o 1 invés do 2 aqui funciona :) 
    {   
    if(i%2 == 1){cont2++;} //loop para somar a repetição de uns e guardar os valores no vetor 
  
    v[j] = i%2;
    
     
    n =  n/2;
    i = i/2;
    j++;
    

    }

    printf("--> %d\n", cont2);
    
    for (j = conta; j >= 0 ; j--)
    {
        printf("%d  ", v[j]);
    }
   

    return 0;
}
