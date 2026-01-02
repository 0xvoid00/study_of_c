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
  node2->data = 20; // 값 넣기
  node2->next = NULL; // 다음 주소 NULL 설정
  head->next = node2; // 이전 노드와 연결

  Node *node3 = (Node *)malloc(sizeof(Node));
  node3->data = 30;
  node3->next = NULL;
  node2->next = node3;

  // 순회 (Traversal)
  Node *cur = head;
  printf("--- 리스트 출력 ---\n");
  while (cur != NULL) {
    printf("[%d] -> ", cur->data);
    cur = cur->next;
  }
  printf("NULL\n\n");

  // 메모리 해제 (Free)
  printf("--- 메모리 해제 시작 ---\n");
  cur = head;
  Node *temp;

  while (cur != NULL) {
    temp = cur->next;
    printf("%d 노드 삭제 중...\n", cur->data);
    free(cur);
    cur = temp;
  }

  return 0;
}
