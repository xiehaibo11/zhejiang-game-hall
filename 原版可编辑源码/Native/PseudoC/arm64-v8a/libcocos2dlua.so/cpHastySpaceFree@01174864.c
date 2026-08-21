
void cpHastySpaceFree(long param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  pthread_t *ppVar2;
  
  __mutex = (pthread_mutex_t *)(param_1 + 0x1d0);
  pthread_mutex_lock(__mutex);
  *(undefined8 *)(param_1 + 600) = 0;
  pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x1f8));
  pthread_mutex_unlock(__mutex);
  if (*(long *)(param_1 + 0x1b8) != 1) {
    uVar1 = 0;
    ppVar2 = (pthread_t *)(param_1 + 0x260);
    do {
      pthread_join(*ppVar2,(void **)0x0);
      uVar1 = uVar1 + 1;
      ppVar2 = ppVar2 + 3;
    } while (uVar1 < *(long *)(param_1 + 0x1b8) - 1U);
  }
  pthread_mutex_destroy(__mutex);
  pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x1f8));
  pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x228));
  cpSpaceFree(param_1);
  return;
}

