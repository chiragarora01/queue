#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete_ll();
void display();
void main ()
{
    int choice;
     printf("\n*************************Main Menu*****************************\n");
        printf("\n=================================================================\n");
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");

    while(choice != 4)
    {
        printf("\nEnter your choice ?");
        scanf("%d",& choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete_ll();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nEnter valid choice??\n");
        }
    }
}

void insert()
{
    int val;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("nana");
    }
    else
    {
        printf("enter value \t\t\t");
    scanf("%d",&val);
    temp->data=val;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
        front->next=NULL;
        rear->next=NULL;
    }
    else
    {
        rear->next=temp;
        rear=temp;
        rear->next=NULL;
    }
    }
}

void delete_ll()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("underflow");
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("nana");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}


