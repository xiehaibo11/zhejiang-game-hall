
pthread_rwlock_t * CRYPTO_THREAD_lock_new(void)

{
  int iVar1;
  pthread_rwlock_t *__rwlock;
  
  __rwlock = (pthread_rwlock_t *)CRYPTO_zalloc(0x38,"crypto/threads_pthread.c",0x10);
  if ((__rwlock != (pthread_rwlock_t *)0x0) &&
     (iVar1 = pthread_rwlock_init(__rwlock,(pthread_rwlockattr_t *)0x0), iVar1 != 0)) {
    CRYPTO_free(__rwlock);
    __rwlock = (pthread_rwlock_t *)0x0;
  }
  return __rwlock;
}

