#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5
struct stack
{
    int st[SIZE];
    int top;
};
void push();
void pop();
void peek(); 


int main()
{
    int value, choice;
    //s.top=-1;
    while (1)
    {
        printf("\n\n***** MENU *****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(value);            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong selection!!! Try again!!!");
        }
    }
} 
struct stack s;
void push()
{

    if (s.top== SIZE-1)
    {
        printf("\nThe stack is overflow!");
    }
    else
    {
        int x;
        s.top = s.top + 1;
        printf("\n\nEnter the element\n");
        scanf("%d", &x);
        s.st[s.top] = x;
        printf("\n\n%d is pushed", s.st[s.top]);
    }
}

void pop()
{
if (s.top==-1)
{
    printf("\nThe Stack is Underflow!!");
}
else
{
    printf("\nDeleted : %d ",s.st[s.top]);
    s.top=s.top-1;
}
}

void peek()
{
    if (s.top==-1)
    {
        printf("\nThe stack is Underflow");
    }
    else
    {
        int i;
        printf("\nStack Elements are:\n");
        for(i=s.top;i>=0; i--)
            printf("%d\n",s.st[i]);
    }
}`