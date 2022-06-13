#include <stdio.h>

int sum(int a, int b){
	return a+b;
}

float average(float a, float b){
	return (a+b)/2;
}

int main(){
	printf("The sum of 100 and 299 is %d\n",sum(100,299));
	printf("The average of 100 and 299 is %f\n",average(100,299));
	return 0;
}
