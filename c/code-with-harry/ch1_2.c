#include <stdio.h>

int main(){
	// program to find area of circle and volume of cylinder
	int radius = 3;
	const float pi = 3.1415;
	printf("The area of this circle is %f\n", pi * radius * radius);  // printing area of circle
	int height = 3;
	printf("Volume of this cylinder is %f\n", pi * radius * radius * height);  // printing volume of cylinder
	return 0;
}
