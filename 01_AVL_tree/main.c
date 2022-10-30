#include "avl_tree.h"

int main()
{
  t_tree tree;

  tree.head = NULL;
  insert_node(&tree, 10);
  insert_node(&tree, 5);
  insert_node(&tree, 15);
  insert_node(&tree, 3);
  insert_node(&tree, 7);
  insert_node(&tree, 12);
  insert_node(&tree, 17);
  insert_node(&tree, 11);

  print_tree_in_order(tree.head);
  printf("\n");

  delete_node(&tree, 5);

  print_tree_in_order(tree.head);
  printf("\n");

  free_tree(tree.head);
  return (0);
}
