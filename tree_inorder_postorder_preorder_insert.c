#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

struct node *search(struct node *root, int key)
{
    if (root == NULL || root->key == key)
        return root;

    if (key < root->key)
        return search(root->left, key);

    return search(root->right, key);
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}

void main()
{
    struct node *root = NULL;
    int c = 1, n, ch, searchKey;

    do
    {
        printf("Enter element to insert in tree = ");
        scanf("%d", &n);
        printf("Press 1 to enter new element\n");
        printf("Press 0 for exit\n");
        printf("Enter 0 or 1 = ");
        scanf("%d", &c);
        root = insert(root, n);
    } while (c != 0);

    do
    {
        printf("\n1.PREORDER");
        printf("\n2.INORDER");
        printf("\n3.POSTORDER");
        printf("\n4.SEARCH");
        printf("\n5.EXIT");
        printf("\nEnter your choice = ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            preorder(root);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            postorder(root);
            break;
        case 4:
            printf("Enter the key to search: ");
            scanf("%d", &searchKey);
            if (search(root, searchKey) != NULL)
                printf("Key %d found in the tree.\n", searchKey);
            else
                printf("Key %d not found in the tree.\n", searchKey);
            break;
        case 5:
            exit(0);
            break;
        }
    } while (1);
}
