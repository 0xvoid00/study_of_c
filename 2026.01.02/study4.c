#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

int main(void) {
  Node *head = (Node *)malloc(sizeof(Node));
  head->data = 10;
  head->next = NULL;

  Node *node2 = (Node *)malloc(sizeof(Node));
  node2->data = 20;
  node2->next = NULL;

  head->next = node2;

  printf("첫 번째: %d\n", head->data);
  printf("두 번째: %d\n", head->next->data);

  free(node2);
  free(head);

  return 0;
}
