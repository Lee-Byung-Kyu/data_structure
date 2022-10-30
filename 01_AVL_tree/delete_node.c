#include "avl_tree.h"

int delete_node(t_tree *tree, int key)
{
  t_node *node;
  t_node *parent = NULL;

  node = tree->head;
  while (node)
  {
    if (node->key == key)
      break;
    else if (node->key > key)
    {
      parent = node;
      node = node->left;
    }
    else
    {
      parent = node;
      node = node->right;
    }
  }
  if (!node)
    return (1);
  if (!node->left && !node->right)
  {
    if (parent->left == node)
      parent->left = NULL;
    else
      parent->right = NULL;
    free(node);
  }
  else if (!node->left || !node->right)
  {
    if (parent->left == node)
      parent->left = node->left ? node->left : node->right;
    else
      parent->right = node->left ? node->left : node->right;
    free(node);
  }
  else
  {
    t_node *tmp;
    t_node *tmp_parent = node;

    tmp = node->right;
    while (tmp->left)
    {
      tmp_parent = tmp;
      tmp = tmp->left;
    }
    node->key = tmp->key;
    if (tmp_parent->left == tmp)
      tmp_parent->left = tmp->right;
    else
      tmp_parent->right = tmp->right;
    free(tmp);
  }
  return (0);
}
