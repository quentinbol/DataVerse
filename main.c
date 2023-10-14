#include "all.h"

void stack_test() 
{
    stack_t *stack = (stack_t*)malloc(sizeof(stack_t));

    initialize(stack);

    push_stack(stack, 20);
    push_stack(stack, 30);

    print_stack(stack);
    printf("element enlever -> %d\n", pop_stack(stack));
    print_stack(stack);
}

void list_test() 
{
    node_t* list = NULL;

    list = insert_front(list, 10);
    list = insert_front(list, 20);
    list = insert_front(list, 30);
    list = insert_front(list, 40);
    list = insert_back(list, 50);
    list = insert_index(list, 60, 2);

    print_list(list);

    search_node(list, 50);

    list = delete_node(list, 20);
    list = delete_first_node(list);
    list = delete_last_node(list);

    printf("After deleting : ");
    print_list(list);

    free_list(list);
}


int main() 
{
    list_test();
    return 0;
}