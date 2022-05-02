#include<stdio.h>
int main()
{
    int n,i;
    int a[1000],b[1000],c[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}