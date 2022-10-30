#ifndef AVL_TREE
# define AVL_TREE

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_node
{
  int key;
  struct s_node *left;
  struct s_node *right;
} t_node;

typedef struct s_tree
{
  t_node* head;
} t_tree;

int   insert_node(t_tree *tree, int key);
int   delete_node(t_tree *tree, int key);

void  free_tree(t_node *node);

void  print_tree_pre_order(t_node *node);
void  print_tree_in_order(t_node *node);
void  print_tree_post_order(t_node *node);

#endif
