#ifndef AVL_TREE_H
# define AVL_TREE_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct s_node
{
  int data;
  struct s_node *left;
  struct s_node *right;
} t_node;

typedef struct s_tree
{
  int data;
  t_node *head;
} t_tree;

int insert_node(int k, t_tree *tree);
int delete_node(int k, t_tree *tree);

#endif
