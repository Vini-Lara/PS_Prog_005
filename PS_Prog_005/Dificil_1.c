#include <stdio.h>
#include <stdlib.h>
 
 int melhor_caminho (int k, char m , char p,  int *mapa){
   int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    int caminho = 0, direcao =0;

    for(int i =0; i < k; i++){
      
       if(p == mapa[0][0] ){
         return 0;
       }
      if(p == mapa[0][0] ){
         return 0;
       }
     
      if(mapa[i] == mapa[k-1][k-1]){
          return caminho;
      }

    
    }
   return 0;
 }

int main ( ){
     int k,i,j;
     scanf("%d", &k);
    int mapa[k][k] ;

   
for(  i = 0; i < k; i++){
        for( j =0; j < k; j++){
          
          scanf("%d", mapa[i][j]); 
        }
    }
for(  i = 0; i < k; i++){
       

         if (mapa[i][j] == 'M'){}



    


return 0;
}
