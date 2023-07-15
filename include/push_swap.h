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
void swapb(stack *stack_A);
void swapswap(stack *stack_A, stack *stack_B);

void pusha(stack *stack_A, stack *stack_B);
void pushb(stack *stack_B, stack *stack_A);

void rotateA(stack *stack_A);
void rotateB(stack *stack_B);
void rr(stack *stack_A, stack *stack_B);

void reverserotatea(stack *stack_A);
void reverserotateb(stack *stack_B);
void rrr(stack *stack_A, stack *stack_B);

void insertionSort(stack *stack_A, stack *stack_B);
void size2(stack *stack_A);
void size3(stack *stack_A);
void size4(stack *stack_A, stack *stack_B);
void pushandsort(stack *stack_A, stack *stack_B);
int findmax(stack *stack_A);

int	ft_atoi(const char *str);
int	ft_isdigit(int c);
int	ft_isspace(int c);

void radix(stack *stack_a, stack *stack_b);
void push_to_a(stack *stack_a, stack *stack_b, int bit);
void push_to_b(stack *stack_a, stack *stack_b, int bit);
int getMaxBit(int *array, int size);
int	check_sorted_rdx(stack *index);
#endif
