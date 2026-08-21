
void OPENSSL_thread_stop(void)

{
  int *ptr;
  
  ptr = (int *)CRYPTO_THREAD_get_local(&DAT_01784930);
  CRYPTO_THREAD_set_local(&DAT_01784930,0);
  if (ptr != (int *)0x0) {
    if (*ptr != 0) {
      ASYNC_cleanup_thread();
    }
    if (ptr[1] != 0) {
      err_delete_thread_state();
    }
    CRYPTO_free(ptr);
    return;
  }
  return;
}

