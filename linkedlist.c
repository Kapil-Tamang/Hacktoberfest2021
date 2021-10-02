/*Linked list Program Insertion program 
Insertion at the end*/

#include <stdio.h> //addind directory
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertion_at_end(struct Node *p, int d) //insertion program
{
    struct Node *q, *t;
    q = (struct Node *)malloc(sizeof(struct Node));
    t = (struct Node *)malloc(sizeof(struct Node));
    q->data = d;
    q->next = NULL;
    t = p;

    if (p == NULL)
    {
        p = q;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
    }
}

void print_list(struct Node *p) //print linked list
{
    while (p != NULL)
    {
        printf("%d  ", p->data);
        p = p->next;
    }
}

int main()
{
    struct Node *head, *second, *third;
    int inserted_node_data;

    head = (struct Node *)malloc(sizeof(struct Node)); //dynamically allocate memory
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1; //given data value
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third; // 1 -> 2 -> 3 -> NULL
    third->next = NULL;

    printf("Enter the data for inserted Node: "); //taken data value for new node
    scanf("%d", &inserted_node_data);

    insertion_at_end(head, inserted_node_data); //call a function
    print_list(head);
    return 0;
}
/*by putting insertion function in a for loop and using some if else statement we can 
create a long linked list of our choice */