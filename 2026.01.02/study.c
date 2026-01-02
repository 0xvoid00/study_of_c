#include <stdio.h>

int main(void) {
  char s1[] = "Code";
  char *s2 = "Code";

  s1[0] = 'M';
  s2 = s1;
  s2[0] = 'E';

  printf("%s\n", s1);
  printf("%s\n", s2);
  
  return 0;
}
