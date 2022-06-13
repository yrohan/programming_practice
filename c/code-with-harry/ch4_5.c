#include <stdio.h>

int main(){
	// program to find sum of first ten natural numbers
	int sum = 0, i=1;
	while(i<11)
	{
		sum+=i;
		i++;
	}
	printf("The sum of first ten natural numbers is %d\n", sum);

	return 0;
}
