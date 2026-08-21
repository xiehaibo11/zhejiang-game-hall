
int pthread_barrier_wait(pthread_barrier_t *__barrier)

{
  pthread_cond_t *__cond;
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  if (__barrier == (pthread_barrier_t *)0x0) {
    return 0x16;
  }
  __mutex = *(pthread_mutex_t **)__barrier;
  iVar2 = 0x16;
  if ((__mutex != (pthread_mutex_t *)0x0) && (iVar2 = pthread_mutex_lock(__mutex), iVar2 == 0)) {
    iVar1 = *(int *)((long)__mutex + 0x5c);
    __cond = (pthread_cond_t *)(__mutex + 1);
    iVar2 = iVar1 + 1;
    *(int *)((long)__mutex + 0x5c) = iVar2;
    if (iVar2 != *(int *)((long)__mutex + 0x58)) {
      do {
        iVar2 = pthread_cond_wait(__cond,__mutex);
        if (iVar2 != 0) break;
      } while (*(int *)((long)__mutex + 0x5c) != 0);
      *(int *)((long)__mutex + 0x60) = *(int *)((long)__mutex + 0x60) + -1;
      pthread_cond_signal(__cond);
      pthread_mutex_unlock(__mutex);
      return iVar2;
    }
    *(undefined4 *)((long)__mutex + 0x5c) = 0;
    *(int *)((long)__mutex + 0x60) = iVar1;
    pthread_cond_signal(__cond);
    pthread_mutex_unlock(__mutex);
    iVar2 = 0x12345;
  }
  return iVar2;
}

