#include <stdio.h>

int main()
{
	int number,or_number,sum_of_cubes=0,digit;
	printf("Enter the Number:");
	scanf("%d",&number);
	
	or_number=number;
	
	while(number>0)
	{
		digit=number%10;
		sum_of_cubes += digit*digit*digit;
		number/=10;
	}
	if(sum_of_cubes==or_number)
	{
		printf("%d is an Armstrong Number",or_number);
	}
	else
	{
		printf("%d is not an Armstrong Number",or_number);
	}
		
}
