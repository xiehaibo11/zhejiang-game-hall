
int BN_BLINDING_is_current_thread(long param_1)

{
  int iVar1;
  pthread_t __thread1;
  
  __thread1 = CRYPTO_THREAD_get_current_id();
  iVar1 = CRYPTO_THREAD_compare_id(__thread1,*(pthread_t *)(param_1 + 0x20));
  return iVar1;
}

