#include <stdio.h>
#define max 30
int q[10], front = 0, rear = -1;
void main()
{
    int che;
    void insert_element();
    void delete_element();
    void display_element();
    printf("\nCircular Queue operations");
    printf("\n Enter 1 to insert into queue");
    printf("\n Enter 2 to delete element");
    printf("\n Enter 3 to display element");
    printf("\n Enter 4 to exit");
    do
    {
        printf("\n Enter your choice: ");
        scanf("%d", &che);
        switch (che)
        {
        case 1:
            insert_element();
            break;
        case 2:
            delete_element();
            break;
        case 3:
            display_element();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid input \n");
        }
    } while (1);
    return 0;
}
void insert_element()
{
    int x;
    if ((front == 0 && rear == max - 1) || (front > 0 && rear == front - 1))
        printf("Circular Queue Overflow\n");
    else
    {
        printf("\n Enter a value to insert: ");
        scanf("%d", &x);
        if (rear == max - 1 && front > 0)
        {
            rear = 0;
            q[rear] = x;
        }
        else
        {
            if ((front == 0 && rear == -1) || (rear != front - 1))
                q[++rear] = x;
        }
    }
}
void delete_element()
{
    int a;
    if ((front == 0) && (rear == -1))
    {
        printf("Circular Queue Underflow \n");
    }
    if (front == rear)
    {
        a = q[front];
        rear = -1;
        front = 0;
    }
    else if (front == max - 1)
    {
        a = q[front];
        front = 0;
    }
    else
        a = q[front++];
    printf("\n Element deleted from the queue :%d\n", a);
}
void display_element()
{
    int i, j;
    if (front == 0 && rear == -1)
    {
        printf("Circular Queue Underflow \n");
    }
    if (front > rear)
    {
        for (i = 0; i <= rear; i++)
            printf("\t%d", q[i]);
        for (j = front; j <= max - 1; j++)
            printf("\t%d", q[j]);
        printf("\nREAR: %d\n", q[rear]);
        printf("\nFRONT: %d\n", q[front]);
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("\t%d", q[i]);
        }
        printf("\nREAR: %d\n", q[rear]);
        printf("\nFRONT: %d\n", q[front]);
    }
    printf("\n");
}