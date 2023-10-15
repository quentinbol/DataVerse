#include "all.h"

graph_t* create_graph(int numNodes)
{
    graph_t* graph = (graph_t*)malloc(sizeof(graph_t));
    graph->numNodes = numNodes;
    graph->nodes = (node_t**)malloc(numNodes * sizeof(node_t*));

    for (int i = 0; i < numNodes; i++) {
        graph->nodes[i] = NULL;
    }

    return graph;
}

void add_node(graph_t* graph, int data)
{
    node_t* newNode = create_node(data);

    int i;
    for (i = 0; i < graph->numNodes; i++) {
        if (graph->nodes[i] == NULL) {
            graph->nodes[i] = newNode;
            break;
        }
    }
}

void add_edge(graph_t* graph, int node_1, int node_2)
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = node_2;
    newNode->next = graph->nodes[node_1];
    graph->nodes[node_1] = newNode;

    newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = node_1;
    newNode->next = graph->nodes[node_2];
    graph->nodes[node_2] = newNode;
}

void add_one_sided_edge(graph_t* graph, int node_1, int node_2)
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = node_1;
    newNode->next = graph->nodes[node_2];
    graph->nodes[node_2] = newNode;
}