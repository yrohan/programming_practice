#include <stdio.h>

int main(){
	// program to find if year is leap year
	int year;
	printf("Enter year : ");
	scanf("%d", &year);

	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("Year %d is a leap year\n",year);
			}
			else
			{
				printf("Year %d is not a leap year\n",year);
			}
		}
		else
		{
			printf("Year %d is not a leap year\n",year);
		}
	}
	else
	{
		printf("Year %d is not a leap year\n",year);
	}

	return 0;
}
