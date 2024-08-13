#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool BinarySearch(int arr[],int column,int target)
{
    int st=0;
    int en=column-1;
    int mid=st+en/2;
    while(st<=en)
    {
        if(arr[mid]==target)
        {
            return true;
        }
        else if(arr[mid]>target)
        {
           en=mid-1;
        }
        else
        {
            st=mid+1;
        }
        mid=st+en/2;
    }
    return false;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int **arr=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        arr[i]=(int*)malloc(m*sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x;scanf("%d",&x);
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(BinarySearch(arr[i],m,x))
        {
            ++counter;
            printf("will not take number");
            break;
        }
    }
    if(counter==0)
    {
        printf("will take number");
    }
    return 0;
}
