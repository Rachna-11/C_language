#include<stdio.h>

int main(){

      int a,b,c;
      
      printf("Enter the value of A :");
      scanf("%d",&a);
      printf("Enter the value of B :");
      scanf("%d",&b);

      c = a ;
      a = b ;
      b = c ;

      printf("value of A : %d \n",a);
      printf("value of B : %d",b);
}