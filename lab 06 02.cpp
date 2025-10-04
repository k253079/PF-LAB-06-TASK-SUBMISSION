#include<stdio.h>

int main(){
	
	int table,ans=0;
	
	printf("Enter the number you want table for:");
	scanf("%d", &table);

	for(int i=1;i<=10;i++)
	{
		printf("%d",table);
		printf(" x ");	
		printf("%d  = ",i);
		ans=ans+table;
		printf("%d",ans);
		printf("\n");
	}
}
