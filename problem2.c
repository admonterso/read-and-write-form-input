#include <stdio.h>

int main() {
    // i wrote all of this
    int i, j, n, e, middle;
    
    scanf("%d", &e);
    n = 2*e + 1; 
    
    middle = n/2 + 1;
   
    for(i=1; i<=n; i++)
        {
          printf("\n") ; 
          
          for(j = 1; j<=n; j++)
            {
               if(i == 1 || i == n || j==1 || i == middle && j <= middle)
               printf("*");
               else
               {
                   printf(" ");
               }
            }
        }
    printf("\n%d", n);
    

    return 0;
}
