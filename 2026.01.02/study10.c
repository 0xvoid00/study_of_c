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

  if (data < root->data) { // 아래 줄이 포인트
    root->left = insert(root->left, data);
  }
  else if (data > root->data) { // 아래 줄이 포인트
    root->right = insert(root->right, data);
  }

  return root;
}

int main(void) {
  Node *root = NULL;

  root = insert(root, 10);
  insert(root, 5);
  insert(root, 17);

  return 0;
}
