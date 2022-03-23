#include <stdio.h>
#include <math.h>
int main (){

    int rad;
    float ang ;
   printf(" radianos_graus:");
   scanf("%d", &rad);


    ang = (180* rad)/ M_PI;


   printf("--> %.1f" ,ang );




return 0;
}
