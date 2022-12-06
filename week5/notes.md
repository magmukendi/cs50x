# Week 5


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
