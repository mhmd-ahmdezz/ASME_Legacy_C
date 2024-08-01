#include <stdio.h>
#include <math.h>
void main(void)
{
    int num1,num2,num3,num4;
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    int counter=0;
    if(abs(num2-num1)==1&&abs(num3-num2)==1&&abs(num4-num3)==1&&abs(num4-num1)==3)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
