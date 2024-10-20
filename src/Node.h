#ifndef NODE_H
#define NODE_H

#include <stdlib.h>
#include <stdio.h>

/*
    Definition and utilities for a singly-linked node,
    that holds an integer.

    @author Younes Laaroussi
    @date October 21st 2024
    @version CS 2263 F24 Lab #4
*/

typedef struct Node
{
    int data;
    struct Node *next;
} node;

node *makeNode(int);
void freeNode(node *);
void printNode(node *);

#endif