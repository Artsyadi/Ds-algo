#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL,*tail=NULL;
struct node{
    int data;
    struct node *next;
};

struct node *addnode(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void traversal()
{
    struct node *p=head;
    if(head==NULL)
    {
        printf("List empty");
        return;
    }
    printf("Nodes :");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    
    addnode(1);
    addnode(2);
    addnode(3);
    traversal();
}