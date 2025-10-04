#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter an integer: ");
	scanf("%d", &num);
    
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }

    printf("The number has %d 1s in it",count);

    return 0;
}
