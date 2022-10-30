#include "avl_tree.h"

void  print_tree_pre_order(t_node *node)
{
  if (!node)
    return;
  printf("%d ", node->key);
  print_tree_pre_order(node->left);
  print_tree_pre_order(node->right);
}

void  print_tree_in_order(t_node *node)
{
  if (!node)
    return;
  print_tree_in_order(node->left);
  printf("%d ", node->key);
  print_tree_in_order(node->right);
}

void  print_tree_post_order(t_node *node)
{
  if (!node)
    return;
  print_tree_post_order(node->left);
  print_tree_post_order(node->right);
  printf("%d ", node->key);
}

