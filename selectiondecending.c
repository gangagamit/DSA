#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n];
int selectionsort()
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int i;
    for(i=0;i<n;i++)
    
        a[i]=rand()% 50+1;
        printf("\nrandam Array is:");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
        selectionsort();
        printf("\n sorted Array is:");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);   
}