#include <stdio.h>

int main(){
	// program to find area of rectangle
	int length, breadth;
	printf("\nEnter length of the rectangle : ");
	scanf("%d",&length);   // taking length as input from user
	printf("\nEnter breadth of the rectangle : ");
        scanf("%d",&breadth);  // taking breadth as input from user
	printf("\nThe area of rectangle is : %d\n", length * breadth);  // printing area of rectangle
	return 0;
}
