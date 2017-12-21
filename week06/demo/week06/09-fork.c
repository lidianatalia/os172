/*
 * (c) 2015-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * REV02 Thu Oct 26 12:28:14 WIB 2017
 * REV00 Mon Oct 24 10:43:00 WIB 2016
 * START 2015
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void main(void) {
   int value;

   value=fork();
   wait(NULL);
   printf("Value: %5.5d (I am PID[%5.5d])\n", value, getpid());

   value=fork();
   wait(NULL);
   printf("Value: %5.5d (I am PID[%5.5d])\n", value, getpid());
}

