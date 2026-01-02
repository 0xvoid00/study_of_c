#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
  struct Node *prev;
} Node;

void insertNext(Node *A, int data) {
  Node *B = (Node *)malloc(sizeof(Node));
  B->data = data;

  Node *C = A->next;

  B->next = C;
  B->prev = A;

  if (C != NULL) {
    C->prev = B
  }
  // 만약 이게 화살표 연결 맨 앞에 위치할 경우
  // Memory Leak & Data Loss 시나리오 발생
  A->next = B;
}
