/*
 * (c) 2017 Rahmat M. Samik-Ibrahim -- This is free software
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * Adapted from University of Waterloo Midterm Winter 2012.
 * REV01 Thu Oct 26 12:31:38 WIB 2017
 * START Wed May  3 20:56:05 WIB 2017
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void printflush(char* p) {
   wait(NULL);
   printf("%s", p);
   fflush(NULL);
}

void main(int argc, char *argv[]) {
   int rc, status;
   char *args[]={"./17-exec","X",0};

   rc = fork();
   printflush("A");
   if (rc != 0) {
      rc = fork();
   }
   printflush("B");
   rc = fork();
   printflush("C");
   if (rc == 0) {
/*
      rc = execv("./17-exec", args);
 */
      execv("./17-exec", args);
      printflush("D");
   }
   printflush("E\n");
}

