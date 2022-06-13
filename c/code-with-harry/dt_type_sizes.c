#include <stdio.h>

int main()
{
	int a1 = 7;
	unsigned short integer = 8;
	long integer1 = 8;
	short integer2 = 8;

	float b1 = 8.0;			   // 6 decimal precision
	double myfloat1 = 7.45;		   // 15 decimal precision
	long double myfloat2 = 7.43453455; // 19 decimal precision
	
	char c1 = 't';

	printf("The size of int is %ld bytes\n",sizeof(int));
	printf("The size of short is %ld bytes\n",sizeof(short));
	printf("The size of long is %ld bytes\n",sizeof(long));
	printf("The size of unsigned int is %ld bytes\n",sizeof(unsigned int));
	printf("The size of signed int is %ld bytes\n",sizeof(signed int));
	printf("The size of float is %ld bytes\n",sizeof(float));
	printf("The size of double is %ld bytes\n",sizeof(double));
	printf("The size of long double is %ld bytes\n",sizeof(long double));
	printf("The size of char is %ld bytes\n",sizeof(char));

}
