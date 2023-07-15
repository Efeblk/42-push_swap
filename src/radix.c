#include "push_swap.h"
#include <limits.h>
#include <stdio.h>

void radix(stack *stack_a, stack *stack_b)
{
    int i;
    int maxbit = getMaxBit(stack_a->array, stack_a->size);
    
    i = 0;

    while (i < maxbit)
    {
        push_to_b(stack_a, stack_b, i);
        i++;
        push_to_a(stack_a, stack_b, i);
        i++;
    }
}

void push_to_a(stack *stack_a, stack *stack_b, int bit)
{
    int size = stack_b->size;
    printf("bit b %i \n", bit);
    while (size > 0)
    {        
        if ((stack_b->array[stack_b->top] & (1 << bit)) == 0)
        {
            rotateB(stack_a);
        }
        else
        {
            pusha(stack_a, stack_b);
        }   
        size--;
    }
}

void push_to_b(stack *stack_a, stack *stack_b, int bit)
{
    int size = stack_a->size;
    printf("bit a %i \n", bit);
    while (size > 0)
    {
        if((stack_a->array[stack_a->top] & (1 << bit)) == 0)
        {
            pushb(stack_b, stack_a);
        }
        else
        {
            rotateA(stack_b);
        } 
        size--;
    }
}

int getMaxBit(int *array, int size)
{
    int max_value = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    int max_bit = 0;
    while (max_value > 0) {
        max_value = max_value >> 1;
        max_bit++;
    }

    return max_bit;
}
int	check_sorted_rdx(stack *index)
{
	int	i;

	i = 0;
	while (i < index->size)
	{
		if (index->array[i] > index->array[i + 1])
			++i;
		else
			return (0);
	}
	return (1);
}