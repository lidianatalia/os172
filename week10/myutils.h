#define MAX_THREAD 100
#define BUFFER_SIZE 5
#define TRUE 1
#define FALSE 0
typedef struct {
int buffer[BUFFER_SIZE];
int in;
int out;
int count;
} bbuf_t;
void daftar_trit (void* trit); // mempersiapkan "trit"
void jalankan_trit (void); // menjalankan dan menunggu hasil dari
// "daftar_trit"
void beberes_trit (char* pesan); // beberes menutup "jalankan_trit"
void rehat_acak (long max_mdetik); // istirohat acak "0-max_mdetik" (ms)
void init_buffer (void); // init buffer
void enter_buffer (int entry); // enter an integer item
int remove_buffer (void); // remove the item
void init_rw (void); // init readers writers
int startRead (void); // start reading
int endRead (void); // end reading
void startWrite (void); // start writing
void endWrite (void); // end writing
