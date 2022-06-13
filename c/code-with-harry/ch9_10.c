#include <stdio.h>

typedef struct time{
	unsigned short hours;
	unsigned short minutes;
	unsigned short seconds;
}time;

void display(time t)
{
	printf("The date is %02d/%02d/%02d\n", t.hours, t.minutes, t.seconds); 
}

int timeCmp(time t1, time t2)
{
	if(t1.hours > t2.hours)
	{
		return 1;
	}
	if(t1.hours < t2.hours)
	{
		return -1;
	}

	if(t1.minutes > t2.minutes)
        {
                return 1;
        }
        if(t1.minutes < t2.minutes)
        {
                return -1;
        }

	if(t1.seconds > t2.seconds)
        {
                return 1;
        }
        if(t1.seconds < t2.seconds)
        {
                return -1;
        }
	return 0;
}

int main()
{
	// program to store time and compare them
	time t1 = {5, 7, 23};
	time t2 = {6, 8, 45};
	display(t1);
	display(t2);
	int val = timeCmp(t1, t2);
	printf("\nThe value of time comparision is %d\n", val);
	return 0;
}
