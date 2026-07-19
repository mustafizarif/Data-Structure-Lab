#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue Function
void enqueue()
{
    int value;

    if ((rear + 1) % MAX == front)
    {
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;

    printf("%d inserted successfully.\n", value);
}

// Dequeue Function
void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d deleted successfully.\n", queue[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

// Peek Function
void peek()
{
    if (front == -1)
    {
        printf("Queue is Empty.\n");
        return;
    }

    printf("Front element = %d\n", queue[front]);
}

// Display Function
void display()
{
    if (front == -1)
    {
        printf("Queue is Empty.\n");
        return;
    }

    printf("\nQueue elements are:\n");

    int i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== CIRCULAR QUEUE MENU =====\n");
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