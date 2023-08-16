#include<stdio.h>
#include<stdlib.h>
int queue[10], fr=-1, re=-1;
void rear();
void front();
void display();

void main()
{
    int ch;
    printf("1.  Rear\n");
    printf("2.  Front\n");
    printf("3.  Display\n");
    printf("4.  Exit\n");
        while(1)
        {
            printf("\nEnter Choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1: rear();
                break;
                case 2: front();
                break;
                case 3: display();
                break;
                case 4: exit(0);
                break;
                default: printf("\nInvalid Choice\n");
            }
        }
}
void rear()
{
    int item;
    if(re==10-1)
    {
        printf("\nQueue is Full\n");
    }
    else
    {
        if(fr==-1)
        {
            fr=0;
        }
        printf("\nInsert element: ");
        scanf("%d",&item);
        re=re+1;
        queue[re]=item;
    }
}
void front()
{
    if(fr==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("Deleted the item %d",queue[fr]);
        fr=fr+1;
    }
}
void display()
{
    int i;
    if(fr==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for(i=fr;i<=re;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}