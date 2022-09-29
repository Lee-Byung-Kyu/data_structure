#include "linked_list.h"

/*
  returns 1 if successful, 0 otherwise
  If the list is empty, the new node is the head and the tail
  If k is over the range, return 0
*/
int add_node_at_k_th(int k, int data, t_list *list)
{
  t_node *new_node;
  t_node *temp;
  int i;

  if (k < 0)
    return (0);
  if (k == 0)
    return (add_node_at_beginning(list, data));
  new_node = malloc(sizeof(t_node));
  if (new_node == NULL)
    return (0);
  new_node->data = data;
  new_node->next = NULL;
  temp = list->head;
  i = 0;
  while (temp && i < k - 1)
  {
    temp = temp->next;
    i++;
  }
  if (temp == NULL)
    return (0);
  new_node->next = temp->next;
  temp->next = new_node;
  return (1);
}
