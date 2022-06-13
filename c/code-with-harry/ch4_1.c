#include <stdio.h>

int main(){
	// program to print multiplication table of a number
	int n;
	printf("Enter number : ");
	scanf("%d", &n);
	for(i=1;i<11;i++)
	{
		printf("%d * %d = %d\n", n, i, n*i);
	}
	return 0;
}
