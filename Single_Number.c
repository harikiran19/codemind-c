#include<stdio.h> 
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int t=0,x=a[i];
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
        if(t==1)
        {
            printf("%d",x);
        }
    }
}