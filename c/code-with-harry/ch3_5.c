#include <stdio.h>

int main(){
	// program to check if character entered by user is lowercase or not
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);

	if(ch >= 'a' && ch <= 'z')
	{
		printf("The character entered is lowercase\n");
	}
	else
	{
		printf("The character entered is not lowercase\n");
	}

	return 0;
}
