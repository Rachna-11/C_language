#include <stdio.h>

int main() {
    int N, sum = 0;

    // Input the value of N
    printf("Enter a number: ");
    scanf("%d", &N);

    // Calculate the sum using a for loop
    for(int i = 1; i <= N; i++) {
        sum += i;
    }

    // Print the sum
    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}
