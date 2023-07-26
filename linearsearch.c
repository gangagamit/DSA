#include<stdio.h>
#include<stdlib.h>
#define n 5
int linearsearch(int a[],int c)
{
    int i;
   for(i=0;i<n;i++)
    {
        if(c==a[i])
        {
            return i;
        }
       
    }
    return -1; 
}
int main()
{
    int a[n],i,c;
     for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("\n %d",a[i]);
    }
    printf("\n enter your searching element:");
    scanf("%d",&c);
    
int m=linearsearch(a,c);
    if(m==-1)
        printf("element is not found..");
    else
    printf("element is found at %d position",m);

    
}