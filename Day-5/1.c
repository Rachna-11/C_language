#include<stdio.h>

int main()
{
        int a,b;
         
        printf("Enter a value of the first number:",a);
        scanf("%d",&a);
        printf("Enter a value of the second number:",b);
        scanf("%d",&b);

        if (a < b)
        {
            printf("%d  is MIN",a);
        }
        else{
            printf("%d  is MIN",b);
        }
        
}