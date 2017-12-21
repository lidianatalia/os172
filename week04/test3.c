#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#define FILE "uts2017-1.txt"
static char* str1 = "AABB\n";
static char* str2 = "CCDD\n";
static char* str3 = "EEFF\n";

void main(void) {
int fd1, fd2, fd3;
fd1 = open (FILE, O_TRUNC | O_RDWR | O_CREAT, 0644);
fd2 = open (FILE, O_TRUNC | O_RDWR | O_CREAT, 0644);
printf("fd1=%d, fd2=%d, fd3=%d\n", fd1, fd2, fd3);
write(fd1, str1, strlen(str1));
write(fd2, str2, strlen(str2));
write(fd3, str3, strlen(str3));
close(fd1);
close(fd2);
close(fd3);
}


