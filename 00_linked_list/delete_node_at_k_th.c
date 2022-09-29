#include "linked_list.h"

/*
  returns 1 if successful, 0 otherwise
*/
int delete_node_at_k_th(int k, t_node *head)
{
  t_node *tmp;
  t_node *tmp2;
  int i;

  if (head == NULL)
    return (0);
  tmp = head;
  i = 0;
  while (i < k - 1 && tmp != NULL)
  {
    tmp = tmp->next;
    i++;
  }
  if (tmp == NULL)
    return (0);
  tmp2 = tmp->next;
  tmp->next = tmp2->next;
  free(tmp2);
  return (1);
}
