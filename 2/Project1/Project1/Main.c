#include <stdio.h>
#include <stdbool.h>

int main() {
    float sales, commission, earnings;

    while (true) {
        printf("Enter sales in dollars ( -1 to end ): ");
        scanf("%f", &sales);

        if (sales == -1) {
            return 0;
        }

        commission = sales / 100 * 9;
        earnings = commission + 200;

        printf("Salary is %.2f\n\n", earnings);
    }

    return 0;
}