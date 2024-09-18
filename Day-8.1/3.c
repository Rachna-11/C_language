#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    last_digit = num % 10;

    int temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    first_digit = temp;

    sum = first_digit + last_digit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}