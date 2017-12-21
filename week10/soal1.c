#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <time.h>
#include "myutils.h"
#define MAX_TRIT 10
int nomor_trit=0;
sem_t mutex;
sem_t tmutex[MAX_TRIT];
void init_random() {
srand(time(NULL));
}

void* TRIT_sederhana (void* a) {
//ID dari trit yang sedang berjalan.
int trit_ID;
 sem_wait (&mutex);
 trit_ID = nomor_trit++;
 sem_post (&mutex);
 sem_wait (&tmutex[trit_ID]);
 printf("TRIT No %d\n", trit_ID);
 int next = trit_ID + 1;
 if (next >= MAX_TRIT)
 next = next % MAX_TRIT;
 sem_post (&tmutex[next]);
}
 int main(int argc, char * argv[]){
 int ii;
 init_random();
 int mulai = rand() % MAX_TRIT;
 for (ii=0; ii < MAX_TRIT; ii++) {
 sem_init (&tmutex[ii], 0, 0);
 daftar_trit(TRIT_sederhana);
 }
 sem_init (&mutex, 0, 1);
 sem_post (&tmutex[mulai]);
 jalankan_trit();
 beberes_trit("INDUK mohon diri");
 }
/* DICONTEK DAN DIMODIF DARI B210 */
