#include <stdio.h>
void main(void)
{
    float number;
    scanf("%f",&number);
    int number_IntegerPart=number;
    if(number==number_IntegerPart)
    {
        printf("Integer");
    }
    else
    {
        printf("Float");
    }
}
