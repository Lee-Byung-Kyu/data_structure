#include "linked_list.h"

int main()
{
  t_list list;
  int list_size;

  bzero(&list, sizeof(t_list));
  add_node_at_beginning(&list, 4);
  add_node_at_beginning(&list, 3);
  add_node_at_beginning(&list, 2);
  add_node_at_beginning(&list, 1);

  add_node_at_end(&list, 6);
  add_node_at_end(&list, 7);
  add_node_at_end(&list, 8);
  add_node_at_end(&list, 9);
  add_node_at_end(&list, 10);

  add_node_at_k_th(0, 0, &list);
  add_node_at_k_th(5, 5, &list);
  add_node_at_k_th(11, 11, &list);
  add_node_at_k_th(42, 42, &list);

  list_size = get_list_size(&list);
  printf("------------------------------------------\n");
  for (int i = 0; i < list_size; i++)
    printf("%d\n", acess_node_at_k_th(i, list.head));

  delete_node_at_k_th(1, list.head);
  delete_node_at_k_th(5, list.head);
  delete_node_at_k_th(42, list.head);

  list_size = get_list_size(&list);
  printf("------------------------------------------\n");
  for (int i = 0; i < list_size; i++)
    printf("%d\n", acess_node_at_k_th(i, list.head));
  printf("------------------------------------------\n");

  clear_list(&list);
  return (0);
}
