
#include<stdio.h>

int main(){

        int x,y,z;
    
        printf("value of x:");
        scanf("%d",&x);

        printf("value of y:");
        scanf("%d",&y);

        z=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);

        printf("Ans: %d \n",z);
    
}