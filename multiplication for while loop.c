#include <stdio.h>
int main() {
    int num,i=1;
    printf("Enterthe value of n: ");
    scanf("%d", &num);
    while (i <=15) {
    printf("%d*%d=%d\n",num,i,num*i); 
        i++;
    }
}
