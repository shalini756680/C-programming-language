#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversel(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" the element of link list: %d \n ", ptr->data);

        ptr = ptr->next;
    }
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;

    // allocate memory for nodes in link list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 6;
    head->next = second;

    second->data = 21;
    second->next = third;

    third->data = 11;
    third->next = NULL;

    traversel(head);

    return 0;
}

