#include "all.h"

void print_graph(graph_t* graph)
{
    for (int i = 0; i < graph->numNodes; i++) {
        node_t* currentNode = graph->nodes[i];
        printf("node_t %d: ", i);
        while (currentNode != NULL) {
            printf("%d -> ", currentNode->data);
            currentNode = currentNode->next;
        }
        printf("NULL\n");
    }
}

void display_node(graph_t* graph, int index)
{
    node_t *current = graph->nodes[index];

    printf("node_t %d: ", index);
    while (current != NULL) {
        printf("%d -> ",  current->data);
        current = current->next;
    }
    printf("NULL\n");
}