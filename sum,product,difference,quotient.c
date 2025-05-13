#include<stdio.h>
int main(){
    int a, b,  sum, difference, product, quotient;
    printf("enter the value for a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("%d\n%d\n%d\n%d\n",sum,difference,product,quotient);
    return 0;
}
