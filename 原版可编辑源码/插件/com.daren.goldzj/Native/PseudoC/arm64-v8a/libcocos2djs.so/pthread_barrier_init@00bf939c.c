
int pthread_barrier_init(pthread_barrier_t *__barrier,pthread_barrierattr_t *__attr,uint __count)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  if ((__barrier == (pthread_barrier_t *)0x0) || (__count == 0)) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = 0x5f;
    if (__attr == (pthread_barrierattr_t *)0x0) {
      __mutex = (pthread_mutex_t *)uv__malloc(100);
      iVar1 = 0xc;
      if (__mutex != (pthread_mutex_t *)0x0) {
        *(undefined4 *)((long)__mutex + 0x60) = 0;
        *(undefined4 *)((long)__mutex + 0x5c) = 0;
        *(uint *)((long)__mutex + 0x58) = __count;
        iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
        if (iVar1 == 0) {
          iVar1 = pthread_cond_init((pthread_cond_t *)(__mutex + 1),(pthread_condattr_t *)0x0);
          if (iVar1 == 0) {
            __barrier->__align = (long)__mutex;
            return 0;
          }
          pthread_mutex_destroy(__mutex);
        }
        uv__free(__mutex);
      }
    }
  }
  return iVar1;
}

