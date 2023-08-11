#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void display()
{
    struct node *ptr = head;
    if (head == NULL)
        printf("List is Empty");
    else
    {
        while (ptr != NULL)
        {
            printf(" %d", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void insert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev=NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    
        ptr = ptr->next;
        ptr->next = temp;
        temp->prev=ptr;
        return;
    
}
void delete()
{
    struct node *ptr = head;
    struct node *p;
    if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
        temp->prev=NULL;
    }
    else
    {
        ptr=head;
        temp->next=ptr;
        ptr->prev=temp;
        head=temp;
    }
}
void deletefirst()
{
    struct node *ptr = head;
    head=ptr->next;
    free(ptr);

}void midinsert(int val,int p)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    while(ptr->data!=p)
    
        ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
        temp->prev=ptr;
}
void middelete(int pos)
{
    struct node *ptr = head;
    struct node *p;
    while(ptr->data!=pos)
    {
        p=ptr;
        ptr=ptr->next;        
    }
    p->next=ptr->next;
    free(ptr);
}
int main()
{
    int ch,m,n,c;
    printf("\n1.insert");
    printf("\n2.delete");
    printf("\n3.insertfirst");
    printf("\n4.deletefirst");
    printf("\n5.midinsert");
    printf("\n6.middelete");
    printf("\n7.display");
    printf("\n0.Exit");

    do
    {
            printf("\n Enter your choice:");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                    printf("\n enter value:");
                    scanf("%d",&m);
                    insert(m);
                    break;
                case 2:
                    delete();
                    break;
                case 3:
                    printf("\n enter value:");
                    scanf("%d",&m);
                    insertfirst(m);
                    break;
                case 4:
                    deletefirst();
                    break;
                case 5:
                    printf("\n Enter value:");
                    scanf("%d",&m);
                    printf("enter position:");
                    scanf("%d",&n);
                    midinsert(m,n);
                    break;
                case 6:
                    printf("\n enter position:");
                    scanf("%d",&c);
                    middelete(c);
                    break;
                case 7:
                  display();
                  break;
                case 0:
                    printf("\n Exit");
                    break;
                default :
                    printf("\n wrong choice");
                    break;  
                
            }
    } while (ch!=0);
    
   
}
