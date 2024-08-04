#include <stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int spaces=n-1;
    for(int i=1;i<=n;i++)
    {
        int temp=spaces;
        while(temp--)
        {
            printf(" ");
        }
        int k=2*i-1;
        while(k--)
        {
            printf("*");
        }
        printf("\n");
        if(i!=n)
        {
            spaces-=1;
        }
    }
    for(int i=n;i>=1;i--)
    {
        int temp1=spaces;
        while(temp1--)
        {
            printf(" ");
        }
        int j=2*i-1;
        while(j--)
        {
            printf("*");
        }
        spaces+=1;
        if(i!=1)
        {
            printf("\n");
        }
    }
    return 0;
}
