#include <stdio.h>
void main(void)
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int sum=num1+num2;
    int subtraction=num1-num2;
    long long multiplication=num1*num2;
    double division=1.0*num1/num2;
    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d - %d = %d\n",num1,num2,subtraction);
    printf("%d * %d = %lld\n",num1,num2,multiplication);
    printf("%d / %d = %lf",num1,num2,division);
}
