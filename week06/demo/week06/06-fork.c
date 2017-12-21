/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV03 Thu Oct 26 18:32:38 WIB 2017
 * REV00 Mon Oct 24 10:43:00 WIB 2016
 * START 2005
 */

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*************************************************** main ** */
void main(void) {
   pid_t val1, val2, val3;
   val3 = val2 = val1 = 999;
   printf("PID==%5.5d ==== ===== ==========\n", getpid());
   fflush(NULL);
/* ***** ***** ***** ***** ***** *****
   val1 = fork();
   wait(NULL);
   val2 = fork();
   wait(NULL);
   val3 = fork();
   wait(NULL);
   ***** ***** ***** ***** ***** ***** */
   printf("VAL1=%5.5d VAL2=%5.5d VAL3=%5.5d\n", val1, val2, val3);
}

