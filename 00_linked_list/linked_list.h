#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct s_node
{
  int data;
  struct s_node *next;
} t_node;

typedef struct s_list
{
  t_node *head;
  t_node *tail;
} t_list;



int acess_node_at_k_th(int k, t_node *head);

int add_node_at_beginning(t_list *list, int data);
int add_node_at_end(t_list *list, int data);
int add_node_at_k_th(int k, int data, t_list *list);

int delete_node_at_k_th(int k, t_node *head);

int get_list_size(t_list *list);
int clear_list(t_list *list);

#endif
