
undefined8 FUN_00e039f8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    pthread_mutex_lock((pthread_mutex_t *)*param_1);
    while (iVar1 = (int)param_1[1], iVar1 == 1) {
      pthread_cond_wait((pthread_cond_t *)((pthread_mutex_t *)*param_1 + 1),
                        (pthread_mutex_t *)*param_1);
    }
    if (iVar1 == 0) break;
    if (iVar1 == 2) {
      if ((code *)param_1[2] != (code *)0x0) {
        iVar1 = (*(code *)param_1[2])(param_1[3],param_1[4]);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | (uint)(iVar1 == 0);
      }
      lVar2 = *param_1;
      *(undefined4 *)(param_1 + 1) = 1;
    }
    else {
      lVar2 = *param_1;
    }
    pthread_cond_signal((pthread_cond_t *)(lVar2 + 0x28));
    pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  }
  pthread_cond_signal((pthread_cond_t *)(*param_1 + 0x28));
  pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  return 0;
}

