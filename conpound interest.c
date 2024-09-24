#include <stdio.h>

int main() {
    float principal, rate, time, compound_interest;

    // get the principal amount from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    // get the interest rate from the user
    printf("Enter interest rate (in percentage): ");
    scanf("%f", &rate);

    // get the time period from the user
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // calculate the compound interest
    float x = 1 + (rate / 100);
    for (int i = 0; i < time; i++)
    {
        principal = principal * x;
    }
    compound_interest = principal - (principal / x);

    // print the result
    printf("Compound interest: %.2f\n", compound_interest);

    return 0;
}
