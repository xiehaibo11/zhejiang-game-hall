
void CRYPTO_THREAD_lock_free(pthread_rwlock_t *param_1)

{
  if (param_1 != (pthread_rwlock_t *)0x0) {
                    /* try { // try from 00b54ce0 to 00c54dcf has its CatchHandler @ 00b54ce0
                       catch() { ... } // from try @ 00b54ce0 with catch @ 00b54ce0
                       catch() { ... } // from try @ 00b54e6c with catch @ 00b54ce0 */
    pthread_rwlock_destroy(param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

