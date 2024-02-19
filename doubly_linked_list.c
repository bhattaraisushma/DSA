#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct doubly
{
    int info;
    struct doubly *prev;
    struct doubly *next;
};
typedef struct doubly node;
node *start = NULL;
void inser_f()
{
    node *ptr = (node *)malloc(sizeof(node));
    printf("Enter the elemen to add in list :\t");
    scanf("%d", &ptr->info);
    if (start == NULL)
    {
        ptr->prev = NULL;
        ptr->next = NULL;
        start = ptr;
    }
    else
    {
        ptr->next = start;
        ptr->prev = NULL;
        start = ptr;
    }
}
void display()
{
    node *temp;
     temp=(node*)malloc(sizeof(node));
    if(start==NULL)
    {
        printf("Empty List");
        return;
    }
    else
    {
        temp=start;
        while (temp!= NULL)
        {
            printf("%d", temp->info);
            printf("\n");
            temp=temp->next;

        }
    }
}
int main()
{
    int choice;
    while (1)
    {
    printf("Enter 1 to insert at front \n Enter  0 to exit \n Enter 3 to insert at last \n Enter 4 to display all\n ");
    scanf("%d", &choice);
    
        switch (choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            inser_f();
            break;
        case 4:
            display();
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }
    return 0;
}