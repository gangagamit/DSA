#include<stdio.h>
int main()
{
    int a[5],i,n=5  ,c;
    for(i=0;i<n;i++)
    {
        printf("\n enter value a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    c=a[0];
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=c;
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
}