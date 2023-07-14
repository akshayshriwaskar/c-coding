#include<stdio.h>
#include<conio.h>
struct node{
    int data;
    struct node* next;
};
struct node*head,*tail=NULL;
void node (int data)
{
    struct node*newnode=(struct data*);
    malloc(size of struct node);
    newnode->data;
    newnode->next=NULL;
    if (head==NULL)
{
    head=newnode;
    tail=newnode;
}
else
{
    tail->next=newnode;
    tail=newnode;
}
void display()
{
    struct node*temp=head;
    if (head==NULL)
}
{
    printf("list is empty");
    return;
}
printf("node of simply linkllist \n");
while (temp!=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n")
}
void main()
{
    addnode(3);
    addnode(5);
    addnode(22);
    display();
    getch();
}
