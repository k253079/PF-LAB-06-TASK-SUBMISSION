#include <stdio.h>

int main()
{
	int num,factorial=1;
	printf("Enter the number for which you want the factorial to be:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		factorial*=i;
	}
	printf("The total number of arrangments can be %d",factorial);
}
