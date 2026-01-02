#include <stdio.h>
#include <stdlib.h>

int *makeArrayStack() {
  int arr[3] = {10, 20, 30}; // -> 이 놈이 왜 return 되면 안되냐
  // 댕글링 포인터(Dangling Pointer)
  return arr;
}

int *makeArrayHeap() {
  int *arr = (int *)malloc(sizeof(int) * 3);
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  return arr;
}

int main(void) {
  int *p1 = makeArrayStack();
  int *p2 = makeArrayHeap();

  printf("Heap값: %d\n", p2[0]);

  free(p2);

  return 0;
}
