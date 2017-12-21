/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV01 Thu Oct 26 12:28:38 WIB 2017
 * START Mon Oct 24 09:42:05 WIB 2016
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int forkDelayChildAndAddLevel(int level) {
   if (! fork()) {
      level++;
   }
   sleep(level);
   return level;
}


void main(void) {
   int level = 0;
   level=forkDelayChildAndAddLevel(level);
   level=forkDelayChildAndAddLevel(level);
   level=forkDelayChildAndAddLevel(level);
   wait(NULL);
   wait(NULL);
   wait(NULL);
   printf("Level[%d]: PID[%d] (PPID[%d])\n", 
                level, getpid(), getppid());
}

