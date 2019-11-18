#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int Q[MAX],rear=-1,front=-1 ;

void enqueue();
void dequeue();
void display();

void main()
{
 int ch ;

  while(1)
      {
          printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
void enqueue()
{
   int val;
	
	if(rear>=(MAX-1))
	{
		printf("\nQueue is full!!");
	}
	else
	{
		printf("\nEnter element to be enqueued:");
		scanf("%d",&val);
                if(rear==-1)
                   {front=0;
                     rear=0;}
                else		
                   rear=rear+1;
		Q[rear]=val;
	}
}

void dequeue()
{  
   int item;
   if(rear==-1)
      printf("\nQueue is empty\n");
   else 
      item=Q[front];
      if(front==rear)
       {front=-1;
          rear=-1;}
      else
       front=front+1;
}      

void display()
{
 int i;
 if(rear==-1)
  printf("Queue is empty.\n") ;
 else
  for(i=front;i<=rear;i++)
    printf("%d\n",Q[i]);
}  
