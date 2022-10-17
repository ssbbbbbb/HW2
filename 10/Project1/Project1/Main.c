#include <stdio.h>


main(void)
{
	int star=1,space, length,breadth,i,j,k,l;
	printf("Enter breadth(odd):");
	scanf("%d", &breadth);
	printf("Enter length(odd):");
	scanf("%d", &length);
	space = breadth / 2;
	for (i = 1; i <= length; i++)
	{
		if (i <= (length / 2 + 1))
		{
			for (k = 1; k <= space; k++)
				printf(" ");
			for (l = 1; l <= star; l++)
				printf("*");
			printf("\n");
			if (i != (length / 2 + 1))
			{
				space--;
				star = star + 2;
			}
		}
		else if (i > (length / 2 + 1))
		{
			star = star - 2;
			space++;
			for (k = 1; k <= space; k++)
				printf(" ");
			for (l = star; l >= 1; l--)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}