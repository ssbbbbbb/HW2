#include<stdio.h>


int accountNumber;
float beginningBal;	//balance at begining of month
float totalCharges; //charges this month
float totalOwed; 	//total customer needs to pay back
float creditLimit;
float balanceTot;

main(void) {
	printf("Enter account Number (-1 to end): ");
	scanf("%d", &accountNumber);


	while (accountNumber != (-1)) {

		printf("Enter beginning balance: ");
		scanf("%f", &beginningBal);

		printf("Enter total charges: ");
		scanf("%f", &totalCharges);

		printf("Enter total credits: ");
		scanf("%f", &totalOwed);

		printf("Enter credit limit: ");
		scanf("%f", &creditLimit);

		balanceTot = beginningBal + totalCharges - totalOwed;

		printf("Account: %d\n", accountNumber);
		printf("Credit limit: %.2f\n", creditLimit);
		printf("Balance: %.2f\n", balanceTot);

		if (balanceTot >= creditLimit) {
			printf("Credit limit exceeded\n");
		}

		printf("\n");
		printf("Enter account Number (-1 to end): ");
		scanf("%d", &accountNumber);
	}



}