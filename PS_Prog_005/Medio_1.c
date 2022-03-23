#include <stdio.h>
#include <math.h>
typedef struct {
    
    float x;
    float y;
}cord;

int main ( ){
    
   cord cordenadas[1];
   float distancia, somax ,somay;
    for(int i = 0; i <= 1; i++ ){
           
           printf("Coordenada(");
        scanf("%f %f", &cordenadas[i].x, &cordenadas[i].y );
        printf(") ");
    }
  somax = cordenadas[1].x-cordenadas[0].x;
  somay = cordenadas[1].y-cordenadas[0].y;

   distancia = sqrt(pow(( somax),2) + pow((somay),2));
    
    printf("--> %.2f", distancia );
    return 0;
}
