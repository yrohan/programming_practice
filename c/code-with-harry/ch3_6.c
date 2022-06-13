#include <stdio.h>

int main(){
	// program to find greatest of 4 numbers
	int num1, num2, num3, num4, max = -1;
	printf("Enter number 1 : ");
	scanf("%d", &num1);
	printf("Enter number 2 : ");
        scanf("%d", &num2);
	printf("Enter number 3 : ");
        scanf("%d", &num3);
	printf("Enter number 4 : ");
        scanf("%d", &num4);

	if(num1 > max){
		max = num1;
	}
	if(num2 > max){
		max = num2;
	}
	if(num3 > max){
                max = num3;
        }
	if(num4 > max){
                max = num4;
        }

	printf("The greatest of four numbers is %d\n", max);
	return 0;
}
