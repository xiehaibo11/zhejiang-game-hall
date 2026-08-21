
ulong freeNativeKeyValueList(ulong param_1)

{
  undefined8 *__ptr;
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (DAT_0013fe20 != (undefined4 *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013fe28);
    __ptr = *(undefined8 **)(DAT_0013fe20 + 2);
    puVar1 = DAT_0013fe20;
    while (DAT_0013fe20 = puVar1, __ptr != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)__ptr[2];
      free((void *)*__ptr);
      free((void *)__ptr[1]);
      free(__ptr);
      __ptr = puVar3;
      puVar1 = DAT_0013fe20;
    }
    *(undefined8 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013fe28);
    return (ulong)uVar2;
  }
  return param_1;
}

