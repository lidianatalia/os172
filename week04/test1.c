#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
char *string = "ABCD\n";

void main() {
 int fileDescriptor;
 close(STDOUT_FILENO);
 fileDescriptor = open ("output.txt", O_RDWR|O_CREAT|O_TRUNC, 0644);
 printf ( "%s", string);
 write(fileDescriptor, string, strlen(string));
}
