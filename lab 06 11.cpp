#include <stdio.h>
#include <math.h>

int main(){
	double H,theta;
	
	printf("Enter the Height:");
	scanf("%f",&H);
	
	printf("Enter the angle of suns elevation:");
	scanf("%f",&theta);
	
	double l=H/tan(theta);
	printf("The length is %.2f",l);
}
