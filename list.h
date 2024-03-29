#ifndef __list_h__
#define __list_h__

// Instruction node structure
typedef struct node {
    char* variable;
    struct node* next;
} *NODE;


NODE newList(char* var, NODE l);
void addLast(char* var, NODE *l);
void printList(NODE l);

#endif