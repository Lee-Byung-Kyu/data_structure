#include "avl_tree.h"

t_node *make_node(int key)
{
  t_node  *new_node;

  if (!(new_node = (t_node*)malloc(sizeof(t_node))))
    return (NULL);
  new_node->key = key;
  new_node->left = NULL;
  new_node->right = NULL;
  return (new_node);
}

int insert_node(t_tree *tree, int key)
{
  t_node  *new_node;
  t_node  *iter;

  if (!(new_node = make_node(key)))
    return (1);
  if (!tree->head)
  {
    tree->head = new_node;
    return (0);
  }
  iter = tree->head;
  while (iter)
  {
    if (new_node->key < iter->key)
    {
      if (!iter->left)
      {
        iter->left = new_node;
        return (0);
      }
      iter = iter->left;
    }
    else
    {
      if (!iter->right)
      {
        iter->right = new_node;
        return (0);
      }
      iter = iter->right;
    }
  }
  return (0);
}
