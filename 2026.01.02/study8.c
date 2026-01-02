#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct Queue {
  Node *front;
  Node *rear;
  int count; // optional
} Queue;

// enqueue : Add Data
// dequeue : Pop Data

void enqueue(Queue *q, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (q->front == NULL) {
    q->front = newNode;
    q->rear = newNode;
  }

  else {
    q->rear->next = newNode;
    q->rear = newNode;
  }

  q->count++;
}
