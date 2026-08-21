
int FUN_011aa248(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  if ((param_1 == (undefined8 *)0x0) ||
     (__mutex = (pthread_mutex_t *)*param_1, __mutex == (pthread_mutex_t *)0x0)) {
    iVar2 = 0x16;
  }
  else {
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 == 0) {
      iVar1 = *(int *)((long)__mutex + 0x5c);
      iVar2 = iVar1 + 1;
      *(int *)((long)__mutex + 0x5c) = iVar2;
      if (iVar2 == *(int *)((long)__mutex + 0x58)) {
        *(undefined4 *)((long)__mutex + 0x5c) = 0;
        *(int *)((long)__mutex + 0x60) = iVar1;
        pthread_cond_signal((pthread_cond_t *)(__mutex + 1));
        pthread_mutex_unlock(__mutex);
        iVar2 = 0x12345;
      }
      else {
        do {
          iVar2 = pthread_cond_wait((pthread_cond_t *)(__mutex + 1),__mutex);
          if (iVar2 != 0) goto LAB_011aa2e4;
        } while (*(int *)((long)__mutex + 0x5c) != 0);
        iVar2 = 0;
LAB_011aa2e4:
        *(int *)((long)__mutex + 0x60) = *(int *)((long)__mutex + 0x60) + -1;
        pthread_cond_signal((pthread_cond_t *)(__mutex + 1));
        pthread_mutex_unlock(__mutex);
      }
    }
  }
  return iVar2;
}

