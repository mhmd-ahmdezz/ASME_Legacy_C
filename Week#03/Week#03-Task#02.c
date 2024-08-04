#include <stdio.h>
int main()
{
    int n;scanf("%d",&n);
    while(n--)
    {
        int num;scanf("%d",&num);
        int counter=0;
        while(num!=0)
        {
            if(num%2==1)
            {
                ++counter;
            }
            num/=2;
        }
        printf("%d\n",counter);
    }
    return 0;
}
