#include "avl_tree.h"

void  free_tree(t_node *node)
{
  if (!node)
    return;
  free_tree(node->left);
  free_tree(node->right);
  free(node);
}
