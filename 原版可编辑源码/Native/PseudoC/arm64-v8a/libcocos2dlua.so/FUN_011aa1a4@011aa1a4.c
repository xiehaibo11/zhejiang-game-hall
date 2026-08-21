
int FUN_011aa1a4(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  iVar1 = 0x16;
  if ((param_1 != (undefined8 *)0x0) && (param_3 != 0)) {
    if (param_2 == 0) {
      __mutex = malloc(100);
      if (__mutex == (pthread_mutex_t *)0x0) {
        iVar1 = 0xc;
      }
      else {
        *(undefined4 *)((long)__mutex + 0x5c) = 0;
        *(undefined4 *)((long)__mutex + 0x60) = 0;
        *(int *)((long)__mutex + 0x58) = param_3;
        iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
        if (iVar1 == 0) {
          iVar1 = pthread_cond_init((pthread_cond_t *)(__mutex + 1),(pthread_condattr_t *)0x0);
          if (iVar1 == 0) {
            *param_1 = __mutex;
            return 0;
          }
          pthread_mutex_destroy(__mutex);
        }
        FUN_0119f27c(__mutex);
      }
    }
    else {
      iVar1 = 0x5f;
    }
  }
  return iVar1;
}

