#include <stdio.h>

int main(){
	int num,digit;
	printf("Enter the number you want to reverse:");
	scanf("%d", &num);
	printf("Reversed number:");
	while(num>0){
		digit=num%10;
		num=num/10;
		printf("%d",digit);
	}
}
