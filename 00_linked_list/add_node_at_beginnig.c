#include "linked_list.h"

/*
  returns 1 if successful, 0 otherwise
  If the list is empty, the new node is the head and the tail
  Otherwise, the new node is the head and the old head is the next node of the new node
*/
int add_node_at_beginning(t_list *list, int data)
{
  t_node  *new_node;

  new_node = malloc(sizeof(t_node));
  if (new_node == NULL)
    return (0);
  new_node->data = data;
  new_node->next = NULL;
  if (list->head == NULL && list->tail == NULL)
  {
    list->head = new_node;
    list->tail = new_node;
  }
  else
  {
    new_node->next = list->head;
    list->head = new_node;
  }
  return (1);
}
