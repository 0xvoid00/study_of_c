#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void error_handling(char *message) {
  fputs(message, stderr);
  fputc('\n', stderr);
  exit(1);
}

int main(int argc, char *argv[]) { // argv = argument variable -> 실행 명령어의 인자들
  int serv_sock;                   // ex) ./tiny 8000 aaa -> 차례대로 argv[0], argv[1], argv[2]의 value가 됨
  struct sockaddr_in serv_addr;

  if (argc != 2) { // argc = argument count -> 운영체제가 이 프로그램을 실행했을 때 전달되는 인수의 갯수
    printf("Usage: %s <port>\n", argv[0]);
    exit(1);
  }

  
}
