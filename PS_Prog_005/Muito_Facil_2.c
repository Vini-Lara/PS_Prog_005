#include <stdio.h>
#define n 5
int main (){

    int horas, i;
    int v[n];
    printf("Converter: ");
    scanf("%d", &horas);

     v[0] = horas / 720; //contas para transformar em meses, semanas, minutos ...
     v[1] = horas / 168;
     v[2] = horas * 60;
     v[3] = horas * 3600;
     v[4] = horas * 3600000;

     if (v[0] < 1) { v[0]= 0; }
     if (v[1] < 1) { v[1]= 0;}
     printf("--> [");
     for (i = 0; i < n-1;i++){

        printf("%d, ", v[i]); //apresentação dos valores 
     }

    printf("%d]", v[4]);
 return 0;
}
