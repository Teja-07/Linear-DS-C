#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void insert(value);
void delete();
void display();

int main()
{
    int value,choice;
    printf("1.insert \n 2.delete \n 3.display \n 4.exit:");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter the value to be insert:\n");
               scanf("%d",&value);
               push(value);
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:exit(0);
        default:printf("Invalid choice!!!wrong selection!!!");
    }

    return 0;
}

void insert(int value)
{
    struct node*newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    if(front==NULL)
    front=rear=newNode;
    else
    {
    rear->next=null;
    rear=newNode;
    printf("Insertion is success!!! \n");
    }

}
void delete()
{
    if(front==NULL)
    {
        printf("Queue is empty!!!")
        else
        {
            struct node*temp=front;
            front=front->next;
            printf("deleted element=%d",temp->data);
            
        }
    }
}

void display()
{
    if(front==NULL)
    printf("queue is empty \n");
    else
    struct node*temp=front;
    while(temp->next!=NULL)
    {
        printf("%d...",temp->data);
        front=front->next;
    }
    printf("%d...NULL \n",temp->data);
}
