#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 5000.0;
    double rate;
    double amount = 0;
    unsigned int year;

    for (rate = 10; rate <= 12; rate++) {
        printf("Rate = %.1lf%%%\n", rate);
        printf("%4s%23s\n", "Year", "Amount on deposit");

        for (year = 1; year <= 15; ++year) {

            amount = principal * pow(1.0 + (rate / 100.0), year);

            printf("%4u%23.2f\n", year, amount);

        }
        rate = rate - 0.5;
        printf("\n");

    }

    return 0;
}