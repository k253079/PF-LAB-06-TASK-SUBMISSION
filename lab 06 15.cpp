#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("After Swapping\n");
    printf("First number  = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
