#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void error_handling(char *message) {
  fputs(message,stderr);
  fputc('\n', stderr);
  exit(1);
}

int main(int argc, char *argv[]) {
  int serv_sock;
  struct sockaddr_in serv_addr;
  
  if (argc != 2) {
    printf("Usage: %s <port>\n", argv[0]);
    exit(1);
  }

  serv_sock = socket(PF_INET, SOCK_STREAM, 0);

  if (serv_sock == -1)
    error_handling("socket() error");

  memset(&serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
  serv_addr.sin_port = htons(atoi(argv[1]));

  printf("서버 세팅 완료... 연결 대기 준비...\n");

  // to be continue ...
  
  return 0;
}
