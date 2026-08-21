
bool FUN_0115fbc4(long *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  *(undefined4 *)(param_1 + 5) = 0;
  if ((int)param_1[1] != 1) {
    if ((int)param_1[1] == 0) {
      __mutex = (pthread_mutex_t *)WebPSafeCalloc(1,0x60);
      *param_1 = (long)__mutex;
      if (__mutex == (pthread_mutex_t *)0x0) {
        return false;
      }
      iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
      if (iVar1 == 0) {
        iVar1 = pthread_cond_init((pthread_cond_t *)(*param_1 + 0x28),(pthread_condattr_t *)0x0);
        if (iVar1 == 0) {
          pthread_mutex_lock((pthread_mutex_t *)*param_1);
          iVar1 = pthread_create((pthread_t *)(*param_1 + 0x58),(pthread_attr_t *)0x0,FUN_0115fea0,
                                 param_1);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 1) = 1;
            pthread_mutex_unlock((pthread_mutex_t *)*param_1);
            return true;
          }
          pthread_mutex_unlock((pthread_mutex_t *)*param_1);
          pthread_mutex_destroy((pthread_mutex_t *)*param_1);
          pthread_cond_destroy((pthread_cond_t *)(*param_1 + 0x28));
        }
        else {
          pthread_mutex_destroy((pthread_mutex_t *)*param_1);
        }
      }
      WebPSafeFree((void *)*param_1);
      *param_1 = 0;
      return false;
    }
    if ((pthread_mutex_t *)*param_1 != (pthread_mutex_t *)0x0) {
      pthread_mutex_lock((pthread_mutex_t *)*param_1);
      if (1 < *(uint *)(param_1 + 1)) {
        do {
          pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                            (pthread_mutex_t *)*param_1);
        } while ((int)param_1[1] != 1);
      }
      pthread_mutex_unlock((pthread_mutex_t *)*param_1);
      return (int)param_1[5] == 0;
    }
  }
  return true;
}

