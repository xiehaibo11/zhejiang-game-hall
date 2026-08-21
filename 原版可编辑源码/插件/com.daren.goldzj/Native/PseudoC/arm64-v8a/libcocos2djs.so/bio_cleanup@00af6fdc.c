
void bio_cleanup(void)

{
  bio_sock_cleanup_int();
  CRYPTO_THREAD_lock_free(bio_lookup_lock);
  bio_lookup_lock = 0;
                    /* try { // try from 00af700c to 00bf700f has its CatchHandler @ 00af70b4 */
  CRYPTO_THREAD_lock_free(bio_type_lock);
  bio_type_lock = 0;
  return;
                    /* try { // try from 00af7024 to 00bf702f has its CatchHandler @ 00af7098 */
}

