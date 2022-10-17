#include<stdio.h>

#define MAX 10

int main()
{
    int i, j, rows;
    int space = 0;

    printf("(A)\n");
    for (i = 0; i <= MAX; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n\n");


    printf("(B)\n");
    for (i = MAX; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n\n");


    printf("(C)\n");
    for (i = MAX; i >= 1; i--)
    {
        for (space = 1; space <= 10 - i; ++space)
        {
            printf(" ");
        }


        for (j = 1; j <= i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n\n");


    printf("(D)\n");
    for (i = 1; i <= MAX; i++)
    {
        for (space = 1; space <= 10 - i; ++space)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n\n");


    return 0;
}