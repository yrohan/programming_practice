#include <stdio.h>

int main(){
	// program to check if person is pass or fail in 3 subjects based on entered marks 
	int physics, chemistry, maths;
	float total;
	printf("Enter Physics Marks : ");
	scanf("%d", &physics);
	
	printf("Enter Chemistry Marks : ");
        scanf("%d", &chemistry);
	
	printf("Enter Maths Marks : ");
        scanf("%d", &maths);

	total = (physics + maths + chemistry)/3;
	if((total<40) || physics<33 || maths<33 || chemistry<33)
	{
		printf("Your total percentage is %.2f and you are fail\n", total);
	}
	else{
		printf("Your total percentage is %.2f and you are pass\n", total);
	}
	return 0;
}
