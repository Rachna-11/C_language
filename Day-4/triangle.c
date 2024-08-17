#include<stdio.h>

int main(){ 

            int angle1,angle2,angle3;

            printf("Enter the value of Angle-1 is :");
            scanf("%d",&angle1);
            
            printf("Enter the value of Angle-2 is :");
            scanf("%d",&angle2);

            angle3 = 180 - (angle1 + angle2);

            printf("Value of Angle-3: %d",angle3);

}