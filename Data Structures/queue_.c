#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue function
void enqueue()
{
    int value;

    if (rear == MAX - 1)
    {
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    printf("%d inserted successfully.\n", value);
}

// Dequeue function
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d deleted successfully.\n", queue[front]);
    front++;

    // Reset queue when it becomes empty
    if (front > rear)
    {
        front = rear = -1;
    }
}

// Peek function
void peek()
{
    if (front == -1)
    {
        printf("Queue is Empty.\n");
        return;
    }

    printf("Front element = %d\n", queue[front]);
}

// Display function
void display()
{
    if (front == -1)
    {
        printf("Queue is Empty.\n");
        return;
    }

    printf("\nQueue elements are:\n");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== QUEUE MENU =====\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Program Ended.\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}