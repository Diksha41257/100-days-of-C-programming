 #include <stdio.h>
int main(void)
{
	float cost_price, selling_price, percentage;
	printf("Enter cost price: ");
	scanf("%f", &cost_price);
	printf("Enter selling price: ");
	scanf("%f", &selling_price);
	if (selling_price > cost_price) {
		percentage = ((selling_price - cost_price) / cost_price) * 100;
		printf("Profit percentage = %.2f%%\n", percentage);
	} else if (cost_price > selling_price) {
		percentage = ((cost_price - selling_price) / cost_price) * 100;
		printf("Loss percentage = %.2f%%\n", percentage);
	} else {
		printf("No profit, no loss.\n");
	}
	return 0;
}
