#include<stdio.h>
int main()
{
    int n,i,od=0,ev=0,r;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==2 || arr[i]%2==0)
        {
            ev+=arr[i];
        }
        else
        {
            od+=arr[i];
        }
    }
    r=ev-od;
    if(r<0)
    {
        r=r*-1;
    }
    printf("%d",r);
}