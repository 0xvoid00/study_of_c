#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
  int data;
  struct Node *next;
};

int main(void) {
  struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));

  n1->data = 10;
  (*n1).data = 20;

  n1.next = NULL;

  free(n1);

  return 0;
}
