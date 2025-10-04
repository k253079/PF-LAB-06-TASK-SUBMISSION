#include <stdio.h>
#include <math.h>

int main()
{
	int principal;       
    float rate;            
    int n_compounded;       
    int years;
    float future_value;    
	              
	printf("Enter your Principal Amount:");
	scanf("%d",&principal);
	
	printf("Enter Annual Interest Rate (e.g 0.05 for 5%):");
	scanf("%f",&rate);
	
	printf("Enter the number of times interest is compounded per year: ");
    scanf("%d",&n_compounded);

    printf("Enter the number of years invested for: ");
    scanf("%d",&years);

    future_value=principal*pow(1+(rate/n_compounded),n_compounded*years);
    
    printf("The future value will be %.2f",future_value);
}
