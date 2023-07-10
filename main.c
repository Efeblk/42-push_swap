#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int loadstack(stack *stack_A, int argc, char const *argv[])
{
    stack_A->array = (int *)malloc((argc - 1) * sizeof(int));

    if (stack_A->array == NULL)
    {
        printf("Memory allocation failed.\n");
        return -1; // Indicate failure with a non-zero value
    }

    stack_A->size = argc - 1;
    stack_A->top = argc -2;

    int i = 0;
    while (i < argc - 1)
    {
        stack_A->array[i] = atoi(argv[i + 1]);
        i++;
        
    }

    free(stack_A->array);
    return 0; // Indicate success with 0
}

int main(int argc, char const *argv[])
{
    stack stack_A;
    if (loadstack(&stack_A, argc, argv) == 0)
    {
        printf("%i \n", stack_A.array[argc - 2]);
        swapa(&stack_A);
        printf("%i", stack_A.array [argc - 2]);
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
    }

    //free(stack_A.array);
    return 0;
}
