#include <stdio.h>

int main(void) {
    int n = 0x12345678;
    int *p_int = &n;
    char *p_char = (char*)&n;

    printf("int 포인터로 읽음: 0x%x\n", *p_int);
    printf("char 포인터로 읽음: 0x%x\n", *p_char); 

    printf("p_int + 1 주소 증가량: %ld\n", (long)(p_int + 1) - (long)p_int);
    printf("p_char + 1 주소 증가량: %ld\n", (long)(p_char + 1) - (long)p_char);

    return 0;
}

// <Result>
// int 포인터로 읽음: 0x12345678
// char 포인터로 읽음: 0x78
// p_int + 1 주소 증가량: 4
// p_char + 1 주소 증가량: 1
