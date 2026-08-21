
void FUN_00e03964(long *param_1)

{
  int iVar1;
  
  if ((pthread_mutex_t *)*param_1 != (pthread_mutex_t *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)*param_1);
    iVar1 = (int)param_1[1];
    if (iVar1 != 0) {
      while (iVar1 != 1) {
        pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                          (pthread_mutex_t *)*param_1);
        iVar1 = (int)param_1[1];
      }
      *(undefined4 *)(param_1 + 1) = 0;
      pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x28));
    }
    pthread_mutex_unlock((pthread_mutex_t *)*param_1);
    pthread_join(*(pthread_t *)(*param_1 + 0x58),(void **)0x0);
    pthread_mutex_destroy((pthread_mutex_t *)*param_1);
    pthread_cond_destroy((pthread_cond_t *)(*param_1 + 0x28));
    WebPSafeFree((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

