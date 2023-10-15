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

void graph_test() 
{
    graph_t* graph = create_graph(5);

    add_node(graph, 0);
    add_node(graph, 1);
    add_node(graph, 2);
    add_node(graph, 3);
    add_node(graph, 4);

    add_edge(graph, 0, 1);
    add_edge(graph, 0, 2);
    add_edge(graph, 1, 3);
    add_edge(graph, 2, 3);
    add_one_sided_edge(graph, 3, 4);

    print_graph(graph);
    display_node(graph, 0);
}

int main() 
{
    printf("/*************************/STACK/*************************/\n");
    stack_test();
    printf("/*************************/LINKED_LIST/*************************/\n");
    list_test();
    printf("/*************************/GRAPH/*************************/\n");
    graph_test();
    return 0;
}