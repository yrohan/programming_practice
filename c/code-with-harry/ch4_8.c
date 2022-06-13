#include <stdio.h>

int main(){
	// program to calculate the factorial of a given number
	int n=4, factorial=1;
	for(int i=1;i<=n;i++)
	{
		factorial *=i;
	}
	printf("The factorial of %d is %d\n", n, factorial);

	return 0;
}
