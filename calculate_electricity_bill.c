#include <stdio.h>
int main(void)
{
	double units, bill = 0.0;
	printf("Enter units consumed: ");
	if (scanf("%lf", &units) != 1 || units < 0) {
		printf("Invalid input.\n");
		return 1;
	}
	if (units <= 100) {
		bill = units * 5;
	} else if (units <= 200) {
		bill = 100 * 5 + (units - 100) * 7;
	} else if (units <= 300) {
		bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
	} else {
		bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
	}
	printf("Electricity bill: [0m₹%.2f\n", bill);
	return 0;
}
