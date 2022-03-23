
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main (){ // pi =  4* o número de pontos dentro do círculo/ número de pontos gerados
    float cont =0, n = 1000;
   float pi ,r = 1;
   srand(time(NULL));
    for(int i = 0; i < n; i++){
      
   
    float x =  rand()%101; // por estar fazendo em c nao consegui usar a rand para dar um numero menor que 1 
    x = x/100;
    float y = rand()%101;
    y = y/100;
    
    if(pow(x,2 ) + pow(y,2) < r){

         cont++;
    }
    }
     
    pi = 4* (cont/ n);

  printf("%f",pi); 

    return 0;
}