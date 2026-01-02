#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void push(Node **ptrHead, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = *ptrHead;

  *ptrHead = newNode;
}

int pop(Node **ptrHead) {
  if (*ptrHead == NULL) {
    printf("Stack Underflow!\n");
    return -1;
  }

  Node *delNode = *ptrHead;
  int result = delNode->data;
  *ptrHead = delNode->next;

  free(delNode);

  return result;
}

int main(void) {
  Node *stack = NULL;

  push(&stack, 10);
  push(&stack, 20);
  push(&stack, 30);

  printf("Pop: %d\n", pop(&stack));
  printf("Pop: %d\n", pop(&stack));
  printf("Pop: %d\n", pop(&stack));
  printf("Pop: %d\n", pop(&stack));

  return 0;
}
