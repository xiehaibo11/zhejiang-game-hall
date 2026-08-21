
int freeNativeKeyValueList(void)

{
  undefined8 *__ptr;
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (DAT_0013edc8 == (undefined4 *)0x0) {
    return 0x13edc8;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013edd0);
  puVar1 = DAT_0013edc8;
  __ptr = *(undefined8 **)(DAT_0013edc8 + 2);
  while (__ptr != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)__ptr[2];
    free((void *)*__ptr);
    free((void *)__ptr[1]);
    free(__ptr);
    __ptr = puVar3;
  }
  *(undefined8 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013edd0);
  return iVar2;
}

