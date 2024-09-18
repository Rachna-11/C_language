#include<stdio.h>

int main()
{
    int first,second;

    printf("Enter the first number:");
    scanf("%d",&first);
    printf("Enter the second number:");
    scanf("%d",&second);

        while (first <= second)
        {
           if (first %4 == 0 )
           {
           printf("%d ",first);
           }

             first++;
        }
        
  

}