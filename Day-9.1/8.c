#include<stdio.h>

int main(){
    int x=1;

    for (int i = 1; i <= 5 ; i++)
    {
        for (int j = 5; j >= i ; j--)
        {
            printf("%d ",x);
            x=x+1;
        }
            printf("\n");
    }
    
}