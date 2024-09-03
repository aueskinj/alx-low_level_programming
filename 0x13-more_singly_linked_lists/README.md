# Singly Linked List Functions

Welcome to the Singly Linked List project! This repository includes a collection of functions designed to manipulate and manage singly linked lists in C. Each file provides a specific operation for handling linked lists, from basic operations like printing and adding nodes to more advanced functionalities like detecting loops.

## Table of Contents

1. [Function Descriptions](#function-descriptions)
2. [Data Structure](#data-structure)
3. [Compilation and Testing](#compilation-and-testing)
4. [License](#license)

## Function Descriptions

- **`0-print_listint.c`**: 
  - **Function**: `print_listint`
  - **Description**: Prints all elements of a `listint_t` list. It displays each node’s data with the appropriate format.
  
- **`1-listint_len.c`**: 
  - **Function**: `listint_len`
  - **Description**: Returns the number of elements in a `listint_t` list.
  
- **`2-add_nodeint.c`**: 
  - **Function**: `add_nodeint`
  - **Description**: Adds a new node at the beginning of a `listint_t` list. The new node is added with the specified data.
  
- **`3-add_nodeint_end.c`**: 
  - **Function**: `add_nodeint_end`
  - **Description**: Adds a new node at the end of a `listint_t` list. This function inserts a new node with the given data at the end of the list.
  
- **`4-free_listint.c`**: 
  - **Function**: `free_listint`
  - **Description**: Frees a `listint_t` list, releasing all allocated memory.
  
- **`5-free_listint2.c`**: 
  - **Function**: `free_listint2`
  - **Description**: Frees a `listint_t` list and sets the head pointer to `NULL` to avoid dangling pointers.
  
- **`6-pop_listint.c`**: 
  - **Function**: `pop_listint`
  - **Description**: Deletes the head node of a `listint_t` list and returns the data (`n`) of the removed node.
  
- **`7-get_nodeint.c`**: 
  - **Function**: `get_nodeint_at_index`
  - **Description**: Returns the nth node of a `listint_t` list. If the node does not exist, it returns `NULL`.
  
- **`8-sum_listint.c`**: 
  - **Function**: `sum_listint`
  - **Description**: Returns the sum of all the data (`n`) in a `listint_t` list.
  
- **`9-insert_nodeint.c`**: 
  - **Function**: `insert_nodeint_at_index`
  - **Description**: Inserts a new node at a specified position in a `listint_t` list. The position is determined by an index.
  
- **`10-delete_nodeint.c`**: 
  - **Function**: `delete_nodeint_at_index`
  - **Description**: Deletes the node at a specific index in a `listint_t` list. The function handles index boundary cases.
  
- **`100-reverse_listint.c`**: 
  - **Function**: `reverse_listint`
  - **Description**: Reverses the order of nodes in a `listint_t` list.
  
- **`101-print_listint_safe.c`**: 
  - **Function**: `print_listint_safe`
  - **Description**: Prints a `listint_t` list safely, handling cases where the list might contain loops.
  
- **`102-free_listint_safe.c`**: 
  - **Function**: `free_listint_safe`
  - **Description**: Frees a `listint_t` list safely, ensuring that all nodes are properly deallocated even if there are loops.
  
- **`103-find_loop.c`**: 
  - **Function**: `find_loop`
  - **Description**: Detects if there is a loop in a `listint_t` list and returns the node where the loop starts.

## Data Structure

The primary data structure used in this project is `listint_t`, defined as follows:

```c
/**
 * struct listint_s - singly linked list node
 * @n: integer value
 * @next: points to the next node
 *
 * Description: Singly linked list node structure.
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Compilation and Testing

To compile the files, use the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o linked_list
```

Ensure that each function is tested individually and that all tests are performed with both valid and edge cases to validate functionality and robustness.

