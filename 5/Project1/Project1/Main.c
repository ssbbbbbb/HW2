#include <stdio.h>
int main() {
    int i, j, N,M;
    printf("Enter number of length: ");
    scanf("%d", &N);
    printf("Enter number of breadth: ");
    scanf("%d", &M);
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= M; j++) {
            if (i == 1 || i == N || j == 1 || j == M) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
