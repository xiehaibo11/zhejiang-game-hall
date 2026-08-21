
int cpHastySpaceSetThreads(pthread_t param_1,ulong param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  pthread_t *ppVar2;
  ulong uVar3;
  
  __mutex = (pthread_mutex_t *)(param_1 + 0x1d0);
  pthread_mutex_lock(__mutex);
  *(undefined8 *)(param_1 + 600) = 0;
  pthread_cond_broadcast((pthread_cond_t *)(param_1 + 0x1f8));
  iVar1 = pthread_mutex_unlock(__mutex);
  if (*(long *)(param_1 + 0x1b8) != 1) {
    uVar3 = 0;
    ppVar2 = (pthread_t *)(param_1 + 0x260);
    do {
      iVar1 = pthread_join(*ppVar2,(void **)0x0);
      uVar3 = uVar3 + 1;
      ppVar2 = ppVar2 + 3;
    } while (uVar3 < *(long *)(param_1 + 0x1b8) - 1U);
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (1 < param_2) {
    param_2 = 2;
  }
  *(ulong *)(param_1 + 0x1b8) = param_2;
  *(ulong *)(param_1 + 0x1c0) = param_2 - 1;
  if (param_2 - 1 != 0) {
    pthread_mutex_lock(__mutex);
    if (*(long *)(param_1 + 0x1b8) != 1) {
      uVar3 = 0;
      ppVar2 = (pthread_t *)(param_1 + 0x260);
      do {
        uVar3 = uVar3 + 1;
        ppVar2[1] = param_1;
        ppVar2[2] = uVar3;
        pthread_create(ppVar2,(pthread_attr_t *)0x0,FUN_0117475c,ppVar2);
        ppVar2 = ppVar2 + 3;
      } while (uVar3 < *(long *)(param_1 + 0x1b8) - 1U);
    }
    pthread_cond_wait((pthread_cond_t *)(param_1 + 0x228),__mutex);
    iVar1 = pthread_mutex_unlock(__mutex);
    return iVar1;
  }
  return iVar1;
}

