#include<stdio.h>
int main()
{
    int x,i,f=0;
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
    if(x==i*i)
    {
        f=1;
    }
    }
    if(f==1)
    {
        printf("True");
    }
     else
    {
        printf("False");
    }
}