#include <stdio.h>
#define n 5
int f = -1, r = -1;
int a[n];
int display()
{
    int i = f;
    if (f < 0)
        printf("\n Queue is Empty");
    else
    {
        do
        {
            printf(" %d", a[i]);
            i = (i + 1) % n;
        } while (i < r);
        printf(" %d", a[i]);
    }
}
int insertfirst(int val)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = val;
    }
    else if ((r + 1) % n == f)
        printf("\n Queue is full");
    else
    {
        r = (r + 1) % n;
        a[r] = val;
    }
}
int deletefirst()
{
    if (f < 0)
        printf("\n Queue is empty");
    else if (f == r)
        f = r = -1;
    else
    {
        f = (f + 1) % n;
    }
}
int main()
{
    int ch, m;
    printf("\n 1.insertfirst");
    printf("\n 2.deletefirst");
    printf("\n 3.display");
    printf("\n 0.Exit");

    do
    {
        printf("\n Enter your choice:");
        scanf(" %d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter element:");
            scanf(" %d", &m);
            insertfirst(m);
            break;
        case 2:
            deletefirst();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("\n Exit");
            break;
        default:
            printf("\n enter valid number");
            break;
        }
    } while (ch != 0);
}