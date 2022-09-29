#include "linked_list.h"

/*
  returns 1 if successful, 0 otherwise
*/
int clear_list(t_list *list)
{
  t_node *tmp;
  t_node *tmp2;

  if (list == NULL)
    return (0);
  tmp = list->head;
  while (tmp != NULL)
  {
    tmp2 = tmp->next;
    free(tmp);
    tmp = tmp2;
  }
  list->head = NULL;
  list->tail = NULL;
  return (1);
}
