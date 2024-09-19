#include <stdio.h>

int main()
 {
    char ch = 'A';
    int i, j;

    for (i = 1; i <= 5; i++)
     {
        for (j = i; j >= 1; j--) 
        {
            printf("%c ", ch + j - 1);
        }
        printf("\n");
    }

}