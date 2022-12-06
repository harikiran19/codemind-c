#include<stdio.h>
int main()
{
    int n,i,j,c,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                //arr[i]=-1;
                c++;
            }
        }
        if(c==1)
        {
            s=1;
            printf("%d ",arr[i]);
        }
    }
    if(s==0)
    {
        printf("-1");
    }
    /*for(i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        {
            printf("%d",arr[i]);
        }
    }*/
}