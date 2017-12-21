/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV01 Thu Oct 26 12:29:59 WIB 2017
 * START Mon Oct 24 09:42:05 WIB 2016
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void procStatus(int level) {
   printf("L%d: PID[%d] (PPID[%d])\n", level, getpid(), getppid());
   fflush(NULL);
}

void levelFork(int *level) {
   if (fork() == 0)
      (*level)++;
   wait(NULL);
}

void main(void) {
   int level = 0;
   int ii;
   procStatus(level);
   for (ii=0;ii<3;ii++) {
      levelFork(&level);
      procStatus(level);
   }
}
