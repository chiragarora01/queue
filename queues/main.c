#include <stdio.h>
#include <stdlib.h>

int queue[500];
int front= -1,rear=-1;
void insert();
int delete_element()
int peek();
void display();
int main()
{
int choice,val;
do{
printf("\n1. Insert an element into a queue ");
printf("\n2. Delete an element from a queue ");
printf("\n3. Peek an element form a queue ");
printf("\n4. Display the queue ");
printf("\n5. EXIT");

printf("\n\n\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
    insert();
    break;
case 2:
    val = delete_element();
    if(val != -1);
    printf("\n The number deleted is : %d", val);
    break;
case 3:
    val = peek();
    if(val != -1);
    printf("\n The first value in queue is : %d", val);
    break;
case 4:
    display();
    break;
case 5:
    printf("EXIT");
default:
    printf("enter valid number");
    }
}

while (choice!=5)
{
    return 0;
}
}

void display()
{
    int i;
    if(front== -1|| front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        for (i=front;i<=rear;i++)
            printf("\t%d",queue[i])
    }
}
void insert()
{
    int num;
    printf("enter the value you want to enter")'
    scanf("%d",&num);
    if (rear=max-1)
        printf("overflow");
    else if (front==-1 && end==-1)
        rear=front=0;
    else
        rear++;
        queue[rear]=num;
}
int delete_element()
{
    if (front==-1 || front>rear)
        {printf("underflow");
        return -1;
        }
    else
    {
        val=queue[front];
        front++;
        if(front>rear)
            front=rear=-1;
            return val;
    }
}
int peek()
{
    if (front==-1|| front>rear)
    {
        printf("empty");
        return -1;
    }
    else {
        return queue[front];
    }
}
