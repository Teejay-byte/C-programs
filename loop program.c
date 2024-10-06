#include <stdio.h>

int main() {
    int n, i = 1;

    /* Ask user for input */
    printf("Enter an integer: ");
    scanf("%d", &n);

    /* Display cube of numbers up to n */
    printf("Cube of numbers up to %d:\n", n);
    while (i <= n) {
        printf("number is: %d and cube of the %d is : %d.\n", i, i, i * i * i);
        i++;
    }

    return 0;
}