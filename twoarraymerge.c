#include<stdio.h>
int main()
{
    int n,m,k,i;
    printf("\n enter n:");
    scanf("%d",&n);
    printf("\n enter m:");
    scanf("%d",&m);
 
    int a[n],b[m],c[n];
    printf("\n element of array 1:");
    for(i=0;i<n;i++)
    {
        printf("\nenter element 1:");
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    k=i;
    printf("\n element of array 2:");
    for(i=0;i<m;i++)
    {
       printf("\nenter element 2:");
        scanf("%d",&b[i]);
        c[k++]=b[i];
    }
    for(i=0;i<k;i++)
    {
        printf("\n %d",c[i]);
    }
}