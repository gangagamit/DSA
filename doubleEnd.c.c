#include<stdio.h>
#define n 5
int f=-1,r=-1;
int a[n];
int display()
{
    int i;
    if(f<0)
        printf("\n Queue is Empty");
    else
    {
    for(i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    }
    printf("\n");
}

int insertEnd(int val)
{
    if(r>=n-1)
        printf("\n Queue is full");
    else if(r<0)
        {
            f=r=0;
            a[r]=val;
        }
        else
        {
            r++;
            a[r]=val;
        }
}
int deleteFirst()
{
 if(f<0)
   printf("\n Queue is Empty");
else if(f==r)
    f=r=-1;  
else 
    ++f;
}
int insertfirst(int val)
{
    int i;
    if(f<0)
    {
        f=r=0;
        a[f]=val;
    }
    else if(f==0)
        printf("\n not added to this position");
  
    else
    {
       f--;
       a[f]=val;
    }
}
int fdelete()
{
    int i;
    if(r<0)
        printf("\n Queue is Empty");
    else if(f==r)
        f=r=-1;
    else
        r--;    
}
int main()
{
    int ch,m;
    printf("\n1.insertEnd");
    printf("\n2.deletefirst");
    printf("\n3.insertfirst");
    printf("\n4.fdelete");
    printf("\n5.display");
    printf("\n0.exit");
  do
  {
    printf("\nEnter your choice:");
    scanf("\n %d",&ch);
    switch (ch)
    {
    case 1:
        printf("\n Enter element:");
        scanf(" %d ",&m);
        insertEnd(m);
        break;
    case 2:
        deleteFirst();
        break;
    case 3:
        printf("\n enter element:");
        scanf("%d",&m);
        insertfirst(m);
        break;
    case 4:
        fdelete();
        break;
    case 5:
        display();
        break;
    case 0:
        printf("\n Exit");
        break;
    
    default:
        printf("\n enter valid number");
        break;
    }
  }while (ch!=0);
 
  
}