#include <stdio.h>

int main(void) {
  int arr[] = { 10, 20, 30, 40, 50 };
  int *ptr = arr; // ptr -> arr[0]를 가리킨다

  printf("1. *ptr : %d\n", *ptr);

  printf("2. *(ptr + 1): %d\n", *(ptr + 1));
  printf("2. ptr[1]: %d\n", ptr[1]);
  printf("2. 1[ptr]: %d\n", 1[ptr]); // TMI: 어짜피 arr[i] <=> *(arr + i)로 변경하는 구조라서 오류안남

  ptr++;

  printf("3. *ptr after ptr++: %d\n", *ptr);

  printf("4. *ptr + 1: %d\n", *ptr + 1);

  return 0;
}
