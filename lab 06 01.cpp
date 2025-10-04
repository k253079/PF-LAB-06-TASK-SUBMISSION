#include <stdio.h>

int main()
{
	int a , sum = 0;
	do{
		printf("Enter a number:");
		scanf("%d" , & a);
		printf("You entered %d\n" , a);
		sum = sum + a;
		if(a == 0){
			printf("The sum is %d", sum);
		}
	}while(a != 0);
}
