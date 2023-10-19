# Week 5

## Queue & Stack

### Queue

Enqueue: adding something in the end of a queue
Dequeue: Deleting something from a queue
first in first out (FIFO)


### Stack

push: adding something in the top of a stack
pop: removing it from the top

Opposite of the queue
LIFO

Pointer:

Malloc: allocate memory
Realloc: reallocate a memory


There is what we call realloc. It takes two arguments: the array to be copied, the size to which you want the final array to be.

What realloc is the following. Create a  list of size (2nd argument). copies the value of the 1st argument. and a pointer is created to point to that list. once the copy is made the memory used by the list is freed. 

## Linked lists


We typically use struct to build linked list. Illustration at the code below.

```
typedef struct node
{
  int number;
  struct node *next;
}
node;
```
A linked list start with a pointer.
We will have a variable called list that is pointing to the first node which is pointing at the next node. we will also use malloc() for dynamically allocating memory of the element of the linked list.

![image](https://user-images.githubusercontent.com/64711820/205926839-435d63dd-bb3e-4ac5-abef-4296b1169380.png)

- struct.
We also use `atoi()` to convert a string into an integer.
```
node * list = NULL;
node *n = malloc(sizeof(node));
if( n!- NULL)
{
  n->number = 1;
  n->next = NULL;
}
list = n;
node *n = malloc(sizeof(node));
if( n!- NULL)
{
  n->number = 2;
  n->next = NULL;
}
list->next = n;
node *n = malloc(sizeof(node));
if( n!- NULL)
{
  n->number = 3;
  n->next = NULL;
}
list->next->next=n;
```
Notice that I am using a if statement to make sure that the node is empty. This is best practice. We also use `->` to express `(*n).next`. I I would like an element to my linked list I need to add `list = n`


When we make a linked list, we can user realloc(list, 4 * sizeof(int));


** Binary Tree **

<img width="722" alt="Screenshot 2023-10-15 at 8 02 48 PM" src="https://github.com/magmukendi/cs50x/assets/64711820/d070e1ec-b96c-42e2-86fb-cb00b0b627ca">

Searching a binary tree :


** Dictionary **

O(1) faster way to access data.


** Hashing and hash tables **

Magloire -> 1
Patrick -> 2;
Collision: adding a value to a hash table and something already exists at the hashed location.


** Tries **
