
int FUN_0115fd5c(long *param_1)

{
  int iVar1;
  
  if ((pthread_mutex_t *)*param_1 == (pthread_mutex_t *)0x0) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)*param_1);
  iVar1 = (int)param_1[1];
  if (iVar1 != 0) {
    while (iVar1 != 1) {
      pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                        (pthread_mutex_t *)*param_1);
      iVar1 = (int)param_1[1];
    }
    *(undefined4 *)(param_1 + 1) = 2;
    pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x28));
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  return iVar1;
}

