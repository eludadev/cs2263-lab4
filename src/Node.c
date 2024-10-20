#include "Node.h"

/*
    Factory function to create a node in heap memory.

    @param data Initial value to store in the node.
    @returns Newly created node.
*/
node *makeNode(int data)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = data;
    n->next = NULL;

    return n;
}

/*
    Cleans up a node by resetting its members once to zero,
    then frees up the allocated memory.

    @param n Node to free.
*/
void freeNode(node *n)
{
    n->data = 0;
    n->next = NULL;
    free(n);
}

/*
    Prints out information about a node:
    "node @0x[address] = [value] -> 0x[next_address]"

    @param n Node to print.
*/
void printNode(node *n)
{
    printf("node @%p = %d -> %p \n", n, n->data, n->next);
}
