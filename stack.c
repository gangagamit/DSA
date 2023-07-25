#include <stdio.h>
#define n 5
int a[n], top = -1, i, c;
void display()
{
    int i;
    if (top < 0)
        printf("Array is empty...\n");
    else
    {
        for (i = 0; i <= top; i++)
            printf("\t%d", a[i]);
    }
}
int insert(int val)
{
    if (top >= n - 1)
        printf(" Array is full..\n");
    else
    {
        top++;
        a[top] = val;
        printf("insert element is: %d",val);
    }
}
int delete()
{
    if (top < 0)

        printf("Array is empty..\n");
    else
    {
        printf("Deleted element is: %d",a[top]);
        top--;
    }
}
int finsert(int val)
{
    if (top >= n - 1)
        printf("\n Array is full..");
    else if (top < 0)
    {
        top++;
        a[top] = val;
    }
    else
    {
        top++;
        for (i = top; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        printf("insert element is: %d",val);
    }
}

int fdelete()

{
    if (top < 0)
        printf("\n Array is Empty..");
    else
    {
        printf("Deleted element is: %d",a[0]);
        for (i = 0; i < top; i++)
        {
            a[i] = a[i + 1];
        }
        top--;
    }
}

int main()
{
    int ch, m;
    printf("\n1.insert at end");
    printf("\n2.delete at end");
    printf("\n3.insert at first");
    printf("\n4.delete at first");
    printf("\n5.display Array");
    printf("\n0.Exit");
    do
    {
        printf("\n enter youre choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter element: ");
            scanf("%d", &m);
            insert(m);

            break;
        case 2:
            delete ();
            break;
        case 3:
            printf("\nEnter element: ");
            scanf("%d", &m);
            finsert(m);
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
        }
    } while (ch != 0);
}