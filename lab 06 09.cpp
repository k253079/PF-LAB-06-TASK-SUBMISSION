#include <stdio.h>
#include <math.h>

int main()
{
	int people;
	printf("Enter the number of people in the group:");
	scanf("%d", &people);
	
	float price=people*250.50;
	int final_price=ceil(price);
	
	printf("Minimum Total cost:%d",final_price);
}
