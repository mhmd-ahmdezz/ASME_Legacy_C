#include <stdio.h>
void main(void)
{
    long long number;
    scanf("%lld",&number);
    printf("%lld",1ll*number*(number+1)/2);
}
