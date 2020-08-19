#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void push(int val)
{
    Node *node = malloc(sizeof(Node));
    node->data = val;
    node->next = head;
    head = node;
}

int pop()
{
    Node *node = head;
    int val = node->data;
    head = head->next;
    free(node);
    return val;
}