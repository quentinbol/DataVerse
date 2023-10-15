#ifndef linked_list_
#define linked_list_

typedef struct node_s node_t;
/**
 * @brief Create a new node
 * 
 * @param head 
 * @param data 
 * @return node_t* 
 */
node_t* create_node(int data);

/**
 * @brief Insert the node inside the list at the front
 * 
 * @param head 
 * @param data 
 * @return node_t* 
 */
node_t* insert_front(node_t* head, int data);

/**
 * @brief Delete the node which contain the data
 * 
 * @param head 
 * @param data 
 * @return node_t* 
 */
node_t* delete_node(node_t* head, int data);

/**
 * @brief search the node which contain the data inside the list
 * 
 * @param head 
 * @param data 
 * @return node_t* 
 */
node_t* search_node(node_t* head, int data);

/**
 * @brief print the list
 * 
 * @param head 
 */
void print_list(node_t* head);

/**
 * @brief free the memory of the list
 * 
 * @param head 
 */
void free_list(node_t* head);

/**
 * @brief insert the node at the back of list
 * 
 * @param head 
 * @param data 
 * @return node_t* 
 */
node_t* insert_back(node_t* head, int data);

/**
 * @brief insert the node at the position
 * 
 * @param head 
 * @param data 
 * @param position 
 * @return node_t* 
 */
node_t* insert_index(node_t* head, int data, int position);

/**
 * @brief count the number of node inside the list
 * 
 * @param head 
 * @return int 
 */
int count_node(node_t* head);

/**
 * @brief delete the first node of the list
 * 
 * @param head 
 * @return node_t* 
 */
node_t* delete_first_node(node_t* head);

/**
 * @brief delete the last node of the list
 * 
 * @param head 
 * @return node_t* 
 */
node_t* delete_last_node(node_t* head);

#endif /* !linked_list_ */