#include <stdio.h>

int main() {
    float hra, da, ta, gross_salary, base_salary;

    printf("Enter the base salary: ");
    scanf("%f", &base_salary);
    
    printf("Enter the HRA percentage: ");
    scanf("%f", &hra);
    
    printf("Enter the DA percentage: ");
    scanf("%f", &da);
    
    printf("Enter the TA percentage: ");
    scanf("%f", &ta);

    hra = (hra / 100) * base_salary;
    da = (da / 100) * base_salary;
    ta = (ta / 100) * base_salary;
    
    gross_salary = base_salary + hra + da + ta;
    
    printf("The gross salary is: %.2f\n", gross_salary);

    return 0;
}
