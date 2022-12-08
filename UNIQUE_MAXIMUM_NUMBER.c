#include<stdio.h>
int main()
{
    int n,i,j,c,m=0,tm;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c+=1;
                tm=arr[i];
            }
        }
        if(c==1){
            if(tm>m){
                m=tm;
            }
        }
    }
    if(m==0)
        printf("-1");
    else
        printf("%d",m);
    
}