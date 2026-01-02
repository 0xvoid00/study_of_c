#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *left;
  struct Node *right;
} Node;

Node* insert(Node *root, int data) {
  if (root == NULL) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
  }

  if (data < root->data) {
    root->left = insert(root->left, data);
  }
  else if (data > root->data) { // data 중복일 경우 무시하기 위해 else 가 아닌 else if 사용
    root->right = insert(root->right, data);
  }
  return root;
}

void inorder(Node *root) {
  if (root == NULL)
    return;

  // Use in-order traversal
  inorder(root->left);
  printf("%d -> ", root->data);
  inorder(root->right);
}

void freeTree(Node *root) {
  if (root == NULL)
    return;

  freeTree(root->left);
  freeTree(root->right);

  printf("%d 해제\n", root->data);
  free(root);
}

int main(void) {
  Node *root = NULL;

  root = insert(root, 30);
  root = insert(root, 10);
  root = insert(root, 50);
  root = insert(root, 20);
  root = insert(root, 40);

  printf("--- 자동 정렬 결과 ---\n");
  inorder(root);
  printf("End\n");

  freeTree(root);
  
  return 0;
}
