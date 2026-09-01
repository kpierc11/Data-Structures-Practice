#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *next;
    int data;
};

void print(struct Node *head)
{
    struct Node *cur = head;
    // display data for each node
    for (cur = head; cur != NULL; cur = cur->next)
    {
        printf("%d\t", cur->data);
    }
    printf("\n");
}

int length(struct Node *head)
{
    struct Node *cur = head;
    int count = 0;
    for (cur = head; cur != NULL; cur = cur->next)
    {
        count++;
    }
    return count;
}

struct Node *insertAtStart(struct Node *head, int data)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        head->next = NULL;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{

    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        head->next = NULL;
    }
    else
    {
        struct Node *cur;
        cur = head;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = temp;
    }
    return head;
}

