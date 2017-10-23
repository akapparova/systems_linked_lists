#include <stdlib.h>
#include <stdio.h>

struct node{
  int x;
  struct node *next;
};

void print_list(struct node *);
struct node *insert_front(struct node *, int i);
struct node * free_list(struct node *);


void print_list(struct node * p) {
  while (p) {
    printf("%d\n", p -> x);
    p = p -> next;
  }
}

struct node * insert_front( struct node * f, int i ){
    struct node * n = (struct node *)malloc( sizeof(struct node) );
    n -> x = i;
    n -> next = f;
    return n;
}

struct node * free_list(struct node * p){
  while(p){
    struct node * this = p;
    p = p -> next;
    free(this);
  }
  return p;
}
