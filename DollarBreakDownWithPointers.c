#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main( ) {
	printf("Enter a dollar amount: ");

	int amount;

	scanf("%d", &amount);

	int twenties, tens, fives, ones;

	pay_amount(amount, &twenties, &tens, &fives, &ones);

	printf("$20 bills: %d\n", twenties);

	printf("$10 bills: %d\n", tens);

	printf("$5 bills: %d\n", fives);

	printf("$1 bills: %d\n", ones);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
	//printf("dollars: %d", dollars);

	*twenties = (dollars / 20);

	//update dollars
	dollars -= ( (*twenties) * 20);

	*tens = (dollars / 10);

	//update dollars
	dollars -= ((*tens) * 10);

	*fives = (dollars / 5);

	//update dollars

	dollars -= ((*fives) * 5);

	*ones = (dollars / 1);

	//update dollars
	dollars -= ((*ones) * 1);

	//ASSERTION: dollars == 0
	//ASSERTION dollars == [ (*twenties * 20) + (*tens * 10) + (*fives * 5) + (*ones * 1) ]

}
