/*
** EPITECH PROJECT, 2023
** graph_
** File description:
** graph_
*/

#ifndef graph_
    #define graph_

    typedef struct node_s node_t;
    typedef struct graph_s graph_t;

    /**
     * @brief Create a graph object
     * 
     * @param numNodes 
     * @return graph_t* 
     */
    graph_t* create_graph(int numNodes);
    /**
     * @brief add node into the graph
     * 
     * @param graph 
     * @param data 
     */
    void add_node(graph_t* graph, int data);
    /**
     * @brief add edge for both source and destination node
     * 
     * @param graph 
     * @param node_1 
     * @param node_2 
     */
    void add_edge(graph_t* graph, int node_1, int node_2);
    /**
     * @brief add edge for only the source node to the destination node
     * 
     * @param graph 
     * @param node_1 
     * @param node_2 
     */
    void add_one_sided_edge(graph_t* graph, int node_1, int node_2);
    /**
     * @brief print the graph
     * 
     * @param graph 
     */
    void print_graph(graph_t* graph);
    /**
     * @brief display a specific node of the graph
     * 
     * @param graph 
     * @param index 
     */
    void display_node(graph_t* graph, int index);
    
    


#endif /* !graph_ */
