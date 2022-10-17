#include<stdio.h>
main() {
    int a, b, c;
    for (c = 1; c <= 500; c++)
    {
        for (b = 1; b <= 500; b++)
        {
            for (a = 1; a <= 500; a++)
            {
                if((a*a)+(b*b)==(c*c))
                    if ((a > b) && (a < c))
                    {
                        printf("%4d  %4d  %4d\n", b, a, c);
                    }
            }
        }
    }
}