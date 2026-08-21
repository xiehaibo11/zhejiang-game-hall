
undefined8 FUN_0117475c(long param_1)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(lVar1 + 0x1b8);
  __mutex = (pthread_mutex_t *)(lVar1 + 0x1d0);
  while( true ) {
    pthread_mutex_lock(__mutex);
    lVar3 = *(long *)(lVar1 + 0x1c0) + -1;
    *(long *)(lVar1 + 0x1c0) = lVar3;
    if (lVar3 == 0) {
      pthread_cond_signal((pthread_cond_t *)(lVar1 + 0x228));
    }
    pthread_cond_wait((pthread_cond_t *)(lVar1 + 0x1f8),__mutex);
    pthread_mutex_unlock(__mutex);
    if (*(code **)(lVar1 + 600) == (code *)0x0) break;
    (**(code **)(lVar1 + 600))(lVar1,uVar2,uVar4);
  }
  return 0;
}

