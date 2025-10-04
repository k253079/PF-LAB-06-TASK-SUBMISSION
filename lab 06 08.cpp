#include <stdio.h>
#include<math.h>

int main()
{
	int I,S=1;
	printf("Enter the intensity of earthquake:");
	scanf("%d",&I);
	
	float M=log10(I/S);
	
	printf("The magnitude of the earthquake on Ritcher's Scale is %.2f.",M);
}
