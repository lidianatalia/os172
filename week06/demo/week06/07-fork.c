/*
 * (c) 2005-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV04 Thu Oct 26 18:34:44 WIB 2017
 * REV02 Mon Oct 24 10:43:00 WIB 2016
 * REV01 Sun Feb 27 08:31:46 WIB 2011
 * START 2005
 */

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define DISPLAY1 "PARENT PID* ** pid (%5.5d) ** ***********\n"
#define DISPLAY2 "val1(%5.5d) -- val2(%5.5d) -- val3(%5.5d)\n"
/*************************************************** main ** */
void main(void) {
   pid_t val1, val2, val3;
   printf(DISPLAY1, getpid());
   val1 = fork();
   val2 = fork();
   val3 = fork();
   printf(DISPLAY2, val1, val2, val3);
/* ***********
   wait(NULL);
   wait(NULL);
   wait(NULL);
   *********** */
}

