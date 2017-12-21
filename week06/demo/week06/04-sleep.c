/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV01 Thu Oct 26 11:33:20 WIB 2017
 * START Mon Oct 24 13:27:30 WIB 2016
 */

#include <stdio.h>
#include <unistd.h>

void main(void) {
   int ii;
   printf("Sleeping 3 seconds: ");
   fflush(NULL);
   for (ii=0; ii < 3; ii++) {
      sleep(1);
      printf("x ");
      fflush(NULL);
   }
   printf("\nSleeping with no fflush(): ");
   for (ii=0; ii < 3; ii++) {
      sleep(1);
      printf("x ");
   }
   printf("\n");
}

