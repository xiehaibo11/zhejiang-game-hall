
int pthread_barrier_destroy(pthread_barrier_t *__barrier)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  if (__barrier == (pthread_barrier_t *)0x0) {
    return 0x16;
  }
  __mutex = *(pthread_mutex_t **)__barrier;
  iVar1 = 0x16;
  if ((__mutex != (pthread_mutex_t *)0x0) && (iVar1 = pthread_mutex_lock(__mutex), iVar1 == 0)) {
    if ((*(int *)((long)__mutex + 0x5c) != 0) || (*(int *)((long)__mutex + 0x60) != 0)) {
      pthread_mutex_unlock(__mutex);
      return 0x10;
    }
    pthread_mutex_unlock(__mutex);
    pthread_cond_destroy((pthread_cond_t *)(__mutex + 1));
    pthread_mutex_destroy(__mutex);
    uv__free(__barrier->__align);
    __barrier->__align = 0;
  }
  return iVar1;
}

