#include "Node.h"

/*
    Tests for the Node structure and its utilities.

    @author Younes Laaroussi
    @date October 21st 2024
    @version CS 2263 F24 Lab #4
*/

int main()
{
    node *n1 = makeNode(5);
    node *n2 = makeNode(7);

    n1->next = n2;
    printNode(n1);
    printNode(n2);

    freeNode(n1);
    freeNode(n2);
}