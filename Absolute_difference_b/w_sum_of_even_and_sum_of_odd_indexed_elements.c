#include<stdio.h>
int main()
{
    int n,i,od=0,ev=0,r;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i==2 || i%2==0 )
        {
            ev+=arr[i];
        }
        else
        {
            od+=arr[i];
        }
    }
    if(ev>od)
    {
        r=ev-od;
    }
    else
    {
        r=od-ev;
    }
    printf("%d",r);
}