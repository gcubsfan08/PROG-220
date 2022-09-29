#include<stdio.h>
#include<stdlib.h>

typedef struct Node_t {
    int data;
    struct Node_t * next;
} Node;

Node *init(const int n)
{
    Node *new_node = (Node *)malloc(sizeof(Node));

    if(new_node != NULL || new_node != 0)
    {
        new_node->data = n;
        new_node->next = NULL;
        return new_node;
    }
    exit(1);
}

void delete(void *n)
{
    free(n);
    n = NULL;
}

Node * add(Node **head, const int value)
{
    Node * new = init(value);
    Node *last = *head;

    if(*head == NULL)
    {
        *head = new;
        return *head;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new;
    return last;
}

void print(Node **head)
{
    Node *last = *head;
    while(last->next != NULL)
    {
        printf("%d\n", last->data);
        last = last->next;
    }
    printf("%d", last->data);
}

//Detect if a linked list has any nodes that form a cylce (never ending loop)
short has_cycle(Node **head)
{
    //fill this ou t
    return 0;
}

//Get the value of the Node's data field at index i
int idx(Node **head, const int i)
{
    //fill this out
    return 0;
}

int main(void)
{
    Node *first = init(1);

    int x = 0;

    Node* tmp = first;
    while(x < 1000)
    {
        tmp = add(&tmp, x);
        x++;
    }

    print(&first);
}
