#include <stdio.h>
#include <math.h>


int main ( ){
    
    int n;
    printf("CrossBots: ");
    scanf("%d", &n);

    if (n%3 == 0 && n%5 ==0 ){printf(" -- > \"CrossBots\" "); return 0;}
    if (n%3 == 0 ){printf(" -- > \"Cross\" "); return 0;}
    if (n%5 == 0 ){printf(" -- > \"Bots\" "); return 0; }
    else {printf(" -- > %d", n);}


return 0;
}
