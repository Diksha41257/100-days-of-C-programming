#include <stdio.h>
int main(void)
{
	int late_days;
	int fine = 0;
	printf("Enter the number of late days: ");
	if (scanf("%d", &late_days) != 1 || late_days < 0) {
		printf("Invalid input.\n");
		return 1;
	}
	if (late_days > 30) {
		printf("Membership Cancelled.\n");
	} else if (late_days <= 5) {
		fine = late_days * 2;
		printf("Library fine: ₹%d\n", fine);
	} else if (late_days <= 10) {
		fine = (5 * 2) + ((late_days - 5) * 4);
		printf("Library fine: ₹%d\n", fine);
	} else {
		fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
		printf("Library fine: ₹%d\n", fine);
	}
	return 0;
}
