#ifndef all
    #define all
    #include <stdio.h>
    #include "stack.h"
    #include "linked_list.h"
    #include "graph.h"
    #include <stdlib.h>

    typedef struct stack_s {
        int top;
        int data_stack[Max_size];
    } stack_t;

    typedef struct node_s {
        int data;
        struct node_s* next;
    } node_t;

    typedef struct graph_s {
        struct node_s **nodes;
        int numNodes;
    } graph_t;


#endif /* !all */
