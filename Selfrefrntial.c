#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};
int main()
{
    char Null;
    struct node x,y;
    x.ch='A';
    x.data=65;
    x.ptr=Null;

    y.ch='Z';
    y.data=78;
    y.ptr=Null;

    printf("X:\n data:%d\t ch: %c",x.data,x.ch);
    printf("Y: \n data:%d\t ch: %c",y.data,y.ch);
   // y.ptr=&x;

    //x.ptr=&y;

    //printf("x:\n data:%d \t ch: %c",y.ptr->data,y.ptr->ch);
   // printf("\n\n y:\ndata: %d\t ch: %c",x.ptr->data,x.ptr->ch);
}