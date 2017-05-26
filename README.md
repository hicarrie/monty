# 0x18. C - Stacks, Queues - LIFO, FIFO
## Project Requirements
- Formatted with Betty style standards
- Compiled with gcc 4.8.4 (C90) using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- Maximum of one global variable
- No more than 5 functions per file
- Function prototypes should be included in a header file called `monty.h`
- Header files should be include guarded

### Project Data Structure
    /**
     * struct stack_s - doubly linked list representation of a stack (or queue)
     * @n: integer
     * @prev: points to the previous element of the stack (or queue)
     * @next: points to the next element of the stack (or queue)
     *
     * Description: doubly linked list node structure
     * for stack, queues, LIFO, FIFO Holberton project
     */
    typedef struct stack_s
    {
            int n;
            struct stack_s *prev;
            struct stack_s *next;
    } stack_t;

    /**
     * struct instruction_s - opcoode and its function
     * @opcode: the opcode
     * @f: function to handle the opcode
     *
     * Description: opcode and its function
     * for stack, queues, LIFO, FIFO Holberton project
     */
    typedef struct instruction_s
    {
            char *opcode;
            void (*f)(stack_t **stack, unsigned int line_number);
    } instruction_t;

## Usage

## Examples

## File Descriptions


## Author
*Carrie Ybay* - [Twitter](http://twitter.com/hicarrie_)
*Elaine Yeung* - [Twitter](http://twitter.com/egsy)