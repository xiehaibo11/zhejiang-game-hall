
int FUN_011aa304(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x16;
  }
  __mutex = (pthread_mutex_t *)*param_1;
  if (__mutex == (pthread_mutex_t *)0x0) {
    return 0x16;
  }
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*(int *)((long)__mutex + 0x5c) == 0) && (*(int *)((long)__mutex + 0x60) == 0)) {
    pthread_mutex_unlock(__mutex);
    pthread_cond_destroy((pthread_cond_t *)(__mutex + 1));
    pthread_mutex_destroy(__mutex);
    FUN_0119f27c(*param_1);
    *param_1 = 0;
    return 0;
  }
  pthread_mutex_unlock(__mutex);
  return 0x10;
}

