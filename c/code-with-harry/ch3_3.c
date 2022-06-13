#include <stdio.h>

int main(){
	// program to calculate income tax roughly no deductions
	float income,tax = 0;
	printf("Enter your income : ");
	scanf("%d", &income);

	if(income>=250000 && income<=500000)
	{
		tax = tax + 0.05 * (income - 250000);
	}
	if(income>=500000 && income<=1000000)
	{
                tax = tax + 0.20 * (income - 250000);
        }
	if(income>=1000000 && income<=500000)
	{
                tax = tax + 0.30 * (income - 250000);
        }
	printf("Your net income tax to be paid is %.2f\n", tax);

	return 0;
}
