
int uv_barrier_init(undefined8 *param_1,int param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  iVar1 = 0x16;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    __mutex = malloc(100);
    if (__mutex == (pthread_mutex_t *)0x0) {
      iVar1 = 0xc;
    }
    else {
      *(undefined4 *)((long)__mutex + 0x5c) = 0;
      *(undefined4 *)((long)__mutex + 0x60) = 0;
      *(int *)((long)__mutex + 0x58) = param_2;
      iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
      if (iVar1 == 0) {
        iVar1 = pthread_cond_init((pthread_cond_t *)(__mutex + 1),(pthread_condattr_t *)0x0);
        if (iVar1 == 0) {
          *param_1 = __mutex;
          goto LAB_011aaa1c;
        }
        pthread_mutex_destroy(__mutex);
      }
      FUN_0119f27c(__mutex);
    }
  }
LAB_011aaa1c:
  return -iVar1;
}

