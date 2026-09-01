#include <stdio.h>
#include "linked-list.h"

int main()
{

    struct Node *head = insertAtStart(NULL, 20);

    for (int i = 0; i < 10; i++)
    {
        head = insertAtStart(head, i);
    }

    head = insertAtEnd(head, 54);

    print(head);
    printf("\n");
    int size = length(head);
    printf("Linked List Length: %d", size);
    printf("\n");
}
