#include <stdio.h>

int main(){
	int cents;
	int quarters,dimes,nickels,pennies;
	quarters=dimes=nickels=pennies=0;
	printf("Enter the amount in cents:");
	scanf("%d",&cents);
	
	while(cents>=25)
	{
		quarters++;
		cents-=25;
	}
	while(cents>=10)
	{
		dimes++;
		cents-=10;
	}
	while(cents>=5)
	{
		nickels++;
		cents-=5;
	}
	while(cents>=1)
	{
		pennies++;
		cents-=1;
	}
	printf("The minnimum number of coins you will need are:%d\n",quarters+nickels+dimes+pennies);
	printf("Quarters:%d\n",quarters);
	printf("Dimes:%d\n",dimes);
	printf("Nickels:%d\n",nickels);
	printf("Pennies:%d\n",pennies);
}
