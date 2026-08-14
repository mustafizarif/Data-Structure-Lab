#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Create three nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Store data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect the nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Print the linked list
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}