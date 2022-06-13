#include <stdio.h>

typedef struct complex{
	int real;
	int img;
} comp;

void display(comp cnum)
{
                printf("The real value for num is %d\n", cnum.real);
                printf("Enter the imaginary value for num is %d\n", cnum.img);
}

int main()
{	
	// program to create complex numbers and display them
	comp cnums[5];
	// taking value of real part and imaginary part for complex numbers as input from user
	for(int i=0; i<5; i++)
	{
		printf("Enter the real value for %d num : ", i+1);
		scanf("%d", &cnums[i].real);

		printf("Enter the imaginary value for %d num : ", i+1);
                scanf("%d", &cnums[i].img);
	}
	// displaying the complex numbers inputted by user
	for(int i=0; i<5; i++)
	{
		display(cnums[i]);
	}

	return 0;
}
