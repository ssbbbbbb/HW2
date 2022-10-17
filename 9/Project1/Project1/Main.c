#include<stdio.h>

main() {
	int i, b, c;
	double a, b1, c1, d;
	printf("Enter paycode:");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("Enter weekly salary:");
		scanf("%lf", &a);
		printf("Manager salary is %.2lf\n", a);
		break;
	case 2:
		printf("Enter work hour:");
		scanf("%d", &b);
		printf("Enter Hourly salary:");
		scanf("%lf", &b1);
		if (b <= 40)
			printf("Hourly worker salary is %.2lf\n", b * b1);
		if (b > 40)
			printf("Hourly worker salary is %.2lf\n", (b - 40) * b1 * 1.5 + 40 * b1);
		break;
	case 3:
		printf("Enter gross weekly salas:");
		scanf("%lf", &d);
		printf("Comission worker salary is:%.2lf\n", d * 0.057 + 250);
		break;
	case 4:
		printf("Enter product amount:");
		scanf("%d", &c);
		printf("Enter product price:");
		scanf("%lf", &c1);
		printf("Pieceworker salary is %.2lf\n", c * c1);
		break;
	}
	return 0;
}
