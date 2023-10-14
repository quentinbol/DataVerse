#ifndef stack_
    #define stack_

    #define Max_size 100
    #include <stdbool.h>

    typedef struct stack_s stack_t;
    /**
     * @brief initialise the stack (putting top at -1)
     * 
     */
    void initialize();
/*-------------------------------------------------------------------------*/
    /**
     * @brief print the current state of the stack
     * 
     * @param stack 
     */
    void print_stack(stack_t *stack);
    /**
     * @brief print the current top of the stack
     * 
     * @param stack 
     * @return int 
     */
    int peek_stack(stack_t* stack);
/*-------------------------------------------------------------------------*/
    /**
     * @brief take and put the value at the top of the stack
     * 
     * @param stack 
     * @param value 
     */
    void push_stack(stack_t *stack, int value);
    /**
     * @brief remove the current top of the stack and return it
     * 
     * @param stack 
     * @return int 
     */
    int pop_stack(stack_t* stack);
    /**
     * @brief check if the stack is empty or not (avoid stack underflow)
     * 
     * @param stack 
     * @return true 
     * @return false 
     */
    void free_stack(stack_t *stack);
    /**
     * @brief free the memory of the stack
     * 
     */
/*-------------------------------------------------------------------------*/
    bool isEmpty(stack_t* stack);
    /**
     * @brief check if the stack is full or not (avoid stack overflow)
     * 
     * @param stack 
     * @return true 
     * @return false 
     */
    bool isFull(stack_t* stack);
    /**
     * @brief free the stack
     * 
     * @param stack 
     */
/*-------------------------------------------------------------------------*/
#endif /* !stack_ */
