#include "linked_list.h"

/*
  returns the size of the list
  returns -1 if list is NULL
*/
int get_list_size(t_list *list)
{
  t_node *tmp;
  int size;

  if (list == NULL)
    return (-1);
  tmp = list->head;
  size = 0;
  while (tmp != NULL)
  {
    tmp = tmp->next;
    size++;
  }
  return (size);
}
