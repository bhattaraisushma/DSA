#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct list
{
    int info;
    struct list *next;
};
typedef struct list node;
node *ptr, *start, *temp;
int x;

void insertf()
{
    ptr = (node *)malloc(sizeof(node));
    printf("Enter the element you want to insert");
    scanf("%d", &ptr->info);

    if (start == NULL)
    {
        ptr->next = NULL;
        start = ptr;
    }
    else
    {
        ptr->next = start;
        start = ptr;
    }
}
void insertend()
{
    node *last;
    last = (node *)malloc(sizeof(node));
    printf("Enter the element you want to insert at last: ");
    scanf("%d", &last->info);
    printf("Element added is %d", last->info);
    last->next = NULL;
    temp = start;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = last;
}
void display() 
{
     
    while (start!= NULL)
    {
        printf("%d \n", start->info);
        start= start->next;
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 to insert\nEnter 2 to insert at end \n Enter 3 to display all \n Enter 0 to  exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertf();
            break;
        case 0:
            return 0;
        case 2:
            insertend();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid choice");

            break;
        }
    }
}
