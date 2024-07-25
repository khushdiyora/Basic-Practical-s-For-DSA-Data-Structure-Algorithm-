#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *link;
};

struct node *header, *ptr, *temp, *ptr1;

void insert_front();
void insert_end();
void insert_any();
void display();

int main()
{
    int choice;
    int count = 1;
    header = (struct node *)malloc(sizeof(struct node));
    header->data = 0;
    header->link = NULL;

    while (count == 1)
    {
        printf("\nPress 1 Insert node at front");
        printf("\nPress 2 Insert node at end");
        printf("\nPress 3 Insert node at any position");
        printf("\nPress 4 Display");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_front();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_any();
            break;
        case 4:
            display();
            break;
        default:
            printf("\nInvalid choice.\n");
            break;
        }

        printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &count);
    }

    return 0;
}

void insert_front()
{
    int data_value;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for the node: ");
    scanf("%d", &data_value);
    temp->data = data_value;
    temp->link = header->link;
    header->link = temp;
}

void insert_end()
{
    int data_value;
    printf("Enter the data for the node: ");
    scanf("%d", &data_value);
    temp = (struct node *)malloc(sizeof(struct node));
    ptr = header;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    temp->data = data_value;
    temp->link = ptr->link;
    ptr->link = temp;
}

void insert_any()
{
    int key, data_value;
    printf("Enter the data for the node: ");
    scanf("%d", &data_value);
    printf("Enter data of the node after which new node is to be inserted: ");
    scanf("%d", &key);
    temp = (struct node *)malloc(sizeof(struct node));
    ptr = header;
    while (ptr->link != NULL && ptr->data != key)
    {
        ptr = ptr->link;
    }
    if (ptr->data == key)
    {
        temp->data = data_value;
        temp->link = ptr->link;
        ptr->link = temp;
    }
    else
    {
        printf("\nValue %d not found.\n", key);
    }
}

void display()
{
    printf("\nContents of the linked list are:\n");
    ptr = header;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
        printf("%d\n", ptr->data);
    }
   }
