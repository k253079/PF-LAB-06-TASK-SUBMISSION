#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int result_by_2 = num << 1;
    int result_by_4 = num << 2;
    int result_by_8 = num << 3;
    printf("multiplied by 2 is: %d\n",result_by_2);
    printf("multiplied by 4 is: %d\n",result_by_4);
    printf("multiplied by 8 is: %d\n",result_by_8);

    return 0;
}
