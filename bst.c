#include<stdio.h>
#include<conio.h>
struct NODE
{
struct NODE *lchild;
int data;
struct NODE *rchild;
};
typedefstruct NODE node;
node* getnode()
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nEnter the data: ");
scanf("%d",&temp->data);
temp->lchild=NULL;
temp->rchild=NULL;
return temp;
}
node *create()
{
intch;
node *root,*temp,*ptr;
root=NULL;
do{
temp=getnode();
if(root==NULL)
root=temp;
else
{
ptr=root;
while(ptr!=NULL)
{
if(temp->data<ptr->data)
{
if(ptr->lchild==NULL)
{
ptr->lchild=temp;
break;
}
else
ptr=ptr->lchild;
}
else
{
if(ptr->rchild==NULL)
{
Ptr->rchild=temp;
break;
}
else
ptr=ptr->rchild;
}
}//while
}
printf("\nDo you want to add more node(Y/N): ");
// scanf(" %c",&ch);
ch=getche();
}while(ch=='Y'||ch=='y');
return root;
}
node *insert(node *root,node *temp)
{
intch;
node *ptr;
if(root==NULL)
root=temp;
else
{
ptr=root;
while(ptr!=NULL)
{
If(temp->data<ptr->data)
{
if(ptr->lchild==NULL)
{
ptr->lchild=temp;
break;
}
else
ptr=ptr->lchild;
}
else
{
if(ptr->rchild==NULL)
{
ptr->rchild=temp;
break;
}
else
ptr=ptr->rchild;
}
}//while
}
return root;
}
void display(node*ptr)
{
if(ptr!=NULL)
{
display(ptr->lchild);
printf(" %d",ptr->data);
display(ptr->rchild);
}
}
void main()
{
intch;
node *root=NULL,*temp;
clrscr();
while(1)
{
printf("\n1:Create a BST.");
printf("\n2:Insert element into a BST.")
printf("\n3:Display");
printf("\n4:Exit");
printf("\nEnter the Choice:");
scanf("%d",&ch);
switch(ch)
{
Case1:root=create();
break;
case 2: temp=getnode();
root=insert(root,temp);
break;
case 3: display(root);
break;
case 4: exit(0);
}
}
getch();
}
