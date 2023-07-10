#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>

typedef struct stack
{
    int *array;
    int top; //top
    int size;
} stack;

// Function prototypes
void swapa(stack *stack_A);

#endif
