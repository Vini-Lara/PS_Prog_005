#include <stdio.h>
#include <math.h>


int main ( ){
     int nums[] = {1, 2, 3, 4,5 ,6,7,8,9},  cont = 0 , i,j,n=2,k=2,tem =0;
       
       int sudoku[n][k] ;

     for( i =0; i < 2; i++){
        for( j =0; j < 2; j++){
          
          scanf("%d", sudoku[i][j]);
           printf("%d", sudoku[i][j]);
        }
    }
    
    for(  i =0; i < 2; i++){
        for(  j =0; j < 2; j++){
          
           printf("%d", sudoku[i][j]);

        }
    }


return 0;
}
