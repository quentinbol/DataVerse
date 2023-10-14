#include "all.h"

bool isFull(stack_t *stack) {
    return stack->top == Max_size - 1;
}

bool isEmpty(stack_t *stack) {
    return stack->top == -1;
}