#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void addFront(Node **ptrHead, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = *ptrHead;

  *ptrHead = newNode;
}

void addRear(Node **ptrHead, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (*ptrHead == NULL) {
    *ptrHead = newNode;
    return;
  }

  Node *cur = *ptrHead;

  while (cur->next != NULL) {
    cur = cur->next;
  }

  cur->next = newNode;
}

int main() {
  Node *head = NULL;

  addFront(&head, 10);
  addFront(&head, 20);
  addFront(&head, 30);

  Node *cur = head;
  while (cur != NULL) {
    printf("%d -> ", cur->data);
    cur = cur->next;
  }

  return 0;
}
