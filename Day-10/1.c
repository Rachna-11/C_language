//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1

#include <stdio.h>

int main() 
{
    int i, j, k;

    for (i = 1; i <= 5; i++) 
    {
       for (j = 5; j > i; j--)
        {
            printf("  "); 
        }

        for (k = i; k >= 1; k--) 
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}
