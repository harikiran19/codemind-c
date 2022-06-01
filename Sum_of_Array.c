#include<stdio.h>
int main()
{
    int n,i,ev=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ev+=arr[i];
    }
    printf("%d",ev);
}