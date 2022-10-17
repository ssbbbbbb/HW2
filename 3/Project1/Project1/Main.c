#include <stdio.h>
#include <stdbool.h>

int main() {
    int days;
    float principal, rate, interest;

    while (true) {
        printf("Enter the loan principal (-1 to end): ");
        scanf("%f", &principal);
        if (principal == -1) {
            return 0;
        }
        printf("Enter interest rate: ");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365;
        printf("The interest charge is $%.2f\n", interest);
        printf("\n");
    }

    return 0;
}