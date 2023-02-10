#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, sum;
    printf("Enter the first number a:\n");
    scanf("%d", &a);

    printf("Enter the first number b:\n");
    scanf("%d", &b);
// takes out the sum
    sum = a+b;

    printf("The sum is %d \n", sum);

    return 0;
}
