#include<stdio.h>

int main(){

        const float pi=3.14;
        float r, area;

        printf("enter the radius of the circle:");
        scanf("%f",&r);

        area = (pi * r *r);
        
        printf("Area of the circle:%f",area);


}