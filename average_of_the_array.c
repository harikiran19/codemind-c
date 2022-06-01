#include<stdio.h>
int main()
{
    int n,i;
    float av;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        av+=arr[i];
    }
    av=av/n;
    printf("%.2f",av);
}
