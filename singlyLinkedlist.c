#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node  *head=NULL,*tail = NULL;
struct node* addNode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
    return newnode;
}
void Traversal(struct node *head)
{
    int count = 1;
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Element %d = %d\n", count, temp->data);
            temp = temp->next;
            count++;
        }
    }
}
struct node *Insertatbeg(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return head;
}
struct node *InsertatIndex(struct node *head, int data, int index)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    newnode->data = data;
    int count = 0;
    while (count != index - 1)
    {
        temp = temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
struct node *InsertatEnd(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    newnode->data = data;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    newnode->next = NULL;
    temp->next = newnode;
    return head;
}
struct node *InsertAfterNode(struct node *head,struct node *prevnode, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next=prevnode->next;
    prevnode->next=newnode;
    return head;
}
int main()
{
    head=addNode(10);
    struct node* first=addNode(20);
    struct node* second=addNode(30);
    struct node* third=addNode(40);
    printf("\nList befor Insertion :-\n");
    Traversal(head);
    // head = Insertatbeg(head,5);
    // head = InsertatIndex(head,15,1);
    // head = InsertatEnd(head,50);
    head = InsertAfterNode(head,first,15);
    printf("\nList after Insertion :-\n");
    Traversal(head);
    return 0;
}