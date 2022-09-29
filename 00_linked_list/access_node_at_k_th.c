#include "linked_list.h"

/*
  returns data of k-th node starting from the head
  returns -1 if k is negative or if k-th node does not exist
*/
int acess_node_at_k_th(int k, t_node *head)
{
  t_node *tmp;
  int i;

  if (k < 0)
    return (-1);
  tmp = head;
  i = 0;
  while (tmp != NULL && i < k)
  {
    tmp = tmp->next;
    i++;
  }
  if (tmp == NULL)
    return (-1);
  return (tmp->data);
}
