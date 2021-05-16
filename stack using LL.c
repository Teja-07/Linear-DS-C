#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(value);
void pop();
void display();

int main()
{
    int value,choice;
    printf("1.push \n 2.pop \n 3.display \n 4.exit:");
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

void push(int value)
{
    struct node*newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    if(top==NULL)
    newNode->next=NULL;
    else
    {
    newNode->next=top;
    top=newNode;
    printf("Insertion is success!!! \n");
    }

}
void pop
{
    if(top==NULL)
    {
        printf("Stack is empty!!!")
        else
        {
            struct node*temp=top;
            printf("%d",temp->data);
            top=temp->next;
        }
    }
}

void display()
{
    if(top==NULL)
    printf("stack is empty \n");
    else
    struct node*temp=top;
    while(temp->next!=NULL)
    {
        printf("%d...",temp->data);
        temp=temp->next;
    }
    printf("%d...NULL",temp->data);
}
