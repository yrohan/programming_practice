#include <stdio.h>

int main(){
	// program to check if number is prime or not
	int n=45, prime = -1;
	
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0) 
		{
			prime = 1;
			break;
		}
	}
	
	if(prime==1 && n!=2) 
	{
		printf("This is not a prime number\n");
	}
	else 
	{
		printf("This is a prime number\n");
	}
	return 0;
}
