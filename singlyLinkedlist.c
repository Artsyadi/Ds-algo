#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
// ------Addition of nodes---------
struct node *addNode(int data)
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
// ----------Traversing the Linked list---------------
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
// -----------Inserting a node at the beginning---------
struct node *Insertatbeg(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return head;
}
// -----------Inserting a node at the Index---------
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
// -----------Inserting a node at the End---------
struct node *InsertatEnd(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    newnode->data = data;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newnode->next = NULL;
    temp->next = newnode;
    return head;
}
// -----------Inserting a node after the given Node---------
struct node *InsertAfterNode(struct node *head, struct node *prevnode, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = prevnode->next;
    prevnode->next = newnode;
    return head;
}
// ---------------Deleting of First node----------
struct node *deleteFirst(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
// ---------------Deleting of Node at an Index----------
struct node *deleteatIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int count = 0;
    while (count != index - 1)
    {
        p = p->next;
        q = q->next;
        count++;
    }
    p->next = q->next;
    free(q);
    return head;
}
// ---------------Deleting of Node at End----------
struct node *deleteLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// ---------------Deleting the Node of given value----------
struct node *deletebyValue(struct node *head, int data)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != data && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == data)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("\nElement not present in linked list\n");
    }
    return head;
}
int main()
{
    head = addNode(10);
    struct node *first = addNode(20);
    struct node *second = addNode(30);
    struct node *third = addNode(40);
    // printf("\nList befor Insertion :-\n");
    printf("\nList before Deletion :-\n");
    Traversal(head);
    // -------------------------------------------INSERTION----------------------------
    // head = Insertatbeg(head,5);
    // head = InsertatIndex(head,15,1);
    // head = InsertatEnd(head,50);
    // head = InsertAfterNode(head, first, 15);
    // printf("\nList after Insertion :-\n");
    // Traversal(head);
    // --------------------------------------DELETION---------------------------------
    // head = deleteFirst(head);
    // head = deleteatIndex(head,1);
    // head = deleteLast(head);
    head = deletebyValue(head, 30);
    printf("\nList after Deletion :-\n");
    Traversal(head);
    return 0;
}