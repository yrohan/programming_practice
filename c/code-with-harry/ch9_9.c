#include <stdio.h>

typedef struct date{
	unsigned short dt;
	unsigned short month;
	unsigned short year;
}date;

void display(date d)
{
	printf("The date is %02d/%02d/%04d\n", d.dt, d.month, d.year); 
}

int dtcmp(date d1, date d2)
{
	if(d1.year > d2.year)
	{
		return 1;
	}
	if(d1.year < d2.year)
	{
		return -1;
	}

	if(d1.month > d2.month)
        {
                return 1;
        }
        if(d1.month < d2.month)
        {
                return -1;
        }

	if(d1.dt > d2.dt)
        {
                return 1;
        }
        if(d1.dt < d2.dt)
        {
                return -1;
        }
	return 0;
}

int main()
{
	// program to store date and compare them
	date d1 = {5, 7, 2022};
	date d2 = {6, 8, 2023};
	display(d1);
	display(d2);
	int val = dtcmp(d1, d2);
	printf("\nThe value of date comparision is %d\n", val);
	return 0;
}
