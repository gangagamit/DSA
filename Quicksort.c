#include <stdio.h>
#include <stdlib.h>
int n;
void print(int a[])
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
}
void Quicksort(int a[], int f, int l)
{
    int i, j, temp, pivot;
    if (f < l)
    {
        print(a);
        pivot = f;
        i = f, j = l;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < l)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        Quicksort(a, f, j - 1);
        Quicksort(a, j + 1, l);
    }
}
int main()
{
    int a[25], i;
    //int i;
   // int a[]={50,30,10,40,20};
    printf("how many element enter:");
    scanf(" %d", &n);
    for (i = 0; i < n; i++)
        a[i] = rand() % 100 + 1;
        print(a);
    Quicksort(a, 0, n - 1);
    printf("\n after Quick sort");
    print(a);
}