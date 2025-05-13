#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
 if (num % 7 == 2)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
