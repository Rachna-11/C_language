// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1

#include<stdio.h>

int main(){ 

    int i,k,j;

        for (i = 5; i >= 1; i--)
    {
             for (k = 5; k > i ;k--)
          {
                     printf("  ");
         }
       for (j = i; j >= 1; j--)
       {
            printf("%d ",j );
       }

       printf("\n");
    }
    
}