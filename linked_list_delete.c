#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *link;
};

struct node *header, *ptr, *temp, *ptr1;

void count1();
void delete_front();
void delete_end();
void delete_any();
void search();
void display();

int main()
{
    int choice;
    int count = 1;
    int data_value, a = 1;
    struct node *new1;

    header = (struct node *)malloc(sizeof(struct node));
    header->data = -1; 
    header->link = NULL;

    while (a == 1)
    {
        printf("\nEnter the data for the node: ");
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

        printf("Do you want to continue? If YES press 1, and 0 for NO: ");
        scanf("%d", &a);
    }

    while (count == 1)
    {
        printf("\nPress 1 Count nodes");
        printf("\nPress 2 Delete node at the front");
        printf("\nPress 3 Delete node at the end");
        printf("\nPress 4 Delete node at any position");
        printf("\nPress 5 Search node");
        printf("\nPress 6 Display");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            count1();
            break;
        case 2:
            delete_front();
            break;
        case 3:
            delete_end();
            break;
        case 4:
            delete_any();
            break;
        case 5:
            search();
            break;
        case 6:
            display();
            break;
        }

        printf("\nDo you want to continue? (1 for YES, 0 for NO): ");
        scanf("%d", &count);
    }

    return 0;
}

void count1()
{
    struct node *temp;
    int length = 0;
    temp = header;

    while (temp->link != NULL)
    {
        length++;
        temp = temp->link;
    }

    printf("\nLength of linked list = %d", length);
}

void delete_front()
{
    if (header->link == NULL)
    {
        printf("\nLinked list is empty.");
    }
    else
    {
        ptr = header->link;
        header->link = ptr->link;
        free(ptr);
        printf("\nNode deleted from the front position.");
    }
}

void delete_end()
{
    if (header->link == NULL)
    {
        printf("\nLinked list is empty.");
    }
    else
    {
        ptr = header;
        while (ptr->link != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->link;
        }

        ptr1->link = ptr->link;
        free(ptr);
        printf("\nNode deleted from the end.");
    }
}

void delete_any()
{
    int key;

    if (header->link == NULL)
    {
        printf("\nLinked list is empty.");
    }
    else
    {
        printf("\nEnter the data to be deleted: ");
        scanf("%d", &key);

        ptr = header;
        while ((ptr->link != NULL) && (ptr->data != key))
        {
            ptr1 = ptr;
            ptr = ptr->link;
        }

        if (ptr->data == key)
        {
            ptr1->link = ptr->link;
            free(ptr);
            printf("\nNode deleted.");
        }
        else
        {
            printf("Invalid, %d is not found.", key);
        }
    }
}

void search()
{
    int flag = 0, num;

    printf("\nEnter the data to search: ");
    scanf("%d", &num);

    temp = header->link;
    while (temp != NULL)
    {
        if (temp->data == num)
        {
            flag = 1;
            printf("\nSearch successful.");
            break;
        }
        temp = temp->link;
    }

    if (flag == 0)
    {
        printf("\nSearch was not successful.");
    }
}

void display()
{
    printf("\nContents of the linked list are:\n");
    ptr = header->link;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
