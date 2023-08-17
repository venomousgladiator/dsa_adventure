#include<stdlib.h>
#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int fr=-1, re=-1;

void enqueue(int element)
{
	if(fr==-1 && re==-1 )
	{
		fr=0; 
		re=0;
		queue[re]=element;
	}
	else if((re+1)%5==fr)
	{
		printf("Queue is full");
	}
	else
	{
		(re+1)%5==re;
		queue[re]=element;
	}
}
void dequeue()
{
	 if(fr==-1 && re==-1)
	 {
	 	printf("Queue is Empty!!");
	 }
	 else if(fr==re)
	 {
	 	printf("\nThe dequeued element is %d", queue[fr]);  
   		fr=-1;  
   		re=-1;  
	 }
	 else
	 {
	 	printf("\nThe dequeued element is %d", queue[fr]);  
   		fr=(fr+1)%SIZE;  
	 }
}
void display()  
{  

}
int main()
{
	int choice=1, x;
	
	while(choice<4 && choice!=0)
	{
		printf("\nPress 1: Insert an element");  
    	printf("\nPress 2: Delete an element");  
    	printf("\nPress 3: Display the element");  
    	printf("\nEnter your choice: ");  
    	scanf("%d", &choice);  
	
	switch(choice)  
    {  
        case 1:  
        printf("Enter the element which is to be inserted: ");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();
        break;
        default: printf("Invalid choice!!");
    }
	}
	return 0;
}
