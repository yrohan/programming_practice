#include <stdio.h>

int reverse(int num) 
{
	int rev = 0, rem;
	while(num) 
	{
		rem = num%10; // get last digit of number
		rev = rev*10 + rem; // generate reverse number by adding last digit of number
		num = num/10;
	}
	return rev;
}

int main() 
{
	// program to reverse digits of a number
	int num = 543;
	int rev=reverse(num);
	printf("%d\n", rev);
	return 0;
}
