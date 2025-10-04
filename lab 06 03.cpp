#include<stdio.h>

int main(){
	int balance=50000,withdrawal_amount;
	printf("Your balance:%d\n" ,balance);	
	while (balance>0)
	{
		printf("Enter the amount you want to withdraw:");
		scanf("%d",&withdrawal_amount);
		if(withdrawal_amount<=balance)
		{
			balance-=withdrawal_amount;
			printf("Balance left:%d\n", balance);
		}
		else
		{
			printf("Insufficient Balance\n");		
		} 
	}
}
